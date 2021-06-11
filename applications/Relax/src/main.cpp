// Copyright 2019 - University of Strathclyde, King's College London and Schlumberger Ltd
// This source code is licensed under the BSD license found in the LICENSE file in the root directory of this source tree.

#include "FlexLexer.h"
#include "RelaxTranslator.h"
#include "ptree.h"
#include <cstdio>
#include <fstream>
#include <iostream>

using std::cout;
using std::ifstream;
using std::ofstream;
using std::shared_ptr;

extern int yyparse();
extern int yydebug;

namespace VAL_v1 {

  extern parse_category *top_thing;

  extern analysis an_analysis;
  extern analysis *current_analysis;

  extern yyFlexLexer *yfl;

  extern bool Verbose;
  extern bool LaTeX;

};  // namespace VAL_v1

extern const char *current_filename;
using namespace VAL_v1;

/**
 * Maria Fox and Derek Long - PDDL2.2 and VAL
 * Stephen Cresswell - PDDL2.2 Parser
 * Richard Howey - Continuous Effects, derived predicates, timed initial literals
 * and LaTeX report in VAL
 */
int main(int argc, char *argv[]) {
  current_analysis = &an_analysis;

  yfl = new yyFlexLexer;

  ifstream current_in_stream(argv[1]);
  yydebug = 0;  // Set to 1 to output yacc trace

  cout << "Processing file: " << argv[1] << '\n';
  RelaxTranslator *dyna = 0;

  if (current_in_stream.bad()) {
    cout << "Failed to open\n";
    // Log an error to be reported in summary later
    line_no = 0;
    log_error(E_FATAL, "Failed to open file");
  } else {
    line_no = 1;

    // Switch the tokeniser to the current input stream
    yfl->switch_streams(&current_in_stream, &cout);
    yyparse();

    // Output syntax tree
    dyna = new RelaxTranslator(current_analysis);
    shared_ptr< WriteController > ts = shared_ptr< WriteController >(dyna);
    // NOTE: We pass responsibility for dyna into parse_category. There
    // is no need to garbage collect it. BUT we access dyna later through
    // this pointer, so beware!
    parse_category::setWriteController(ts);
    if (top_thing) {
      string nm(argv[1]);
      nm += ".rlx";
      ofstream domfile(nm.c_str());
      domfile << *top_thing;
    };
  }
  // Output the errors from all input files
  current_analysis->error_list.report();
  delete yfl;

  for (int i = 2; i < argc; ++i) {
    yfl = new yyFlexLexer;
    ifstream problem_in_stream(argv[i]);
    cout << "Processing file: " << argv[i] << "\n";
    if (problem_in_stream.bad()) {
      cout << "Failed to open\n";
      // Log an error to be reported in summary later
      line_no = 0;
      log_error(E_FATAL, "Failed to open file");
    } else {
      line_no = 1;

      // Switch the tokeniser to the current input stream
      yfl->switch_streams(&problem_in_stream, &cout);
      yyparse();

      if (top_thing) {
        string nm(argv[2]);
        nm += ".rlx";
        ofstream probfile(nm.c_str());
        probfile << *top_thing;
      };
    }
  }
}
