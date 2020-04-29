// Copyright 2019 - University of Strathclyde, King's College London and Schlumberger Ltd
// This source code is licensed under the BSD license found in the LICENSE file in the root directory of this source tree.

#include "FlexLexer.h"
#include "TypedAnalyser.h"
#include "ptree.h"
#include <cstdio>
#include <fstream>
#include <iostream>

extern int yyparse();
extern int yydebug;

using std::ifstream;
using std::ofstream;

namespace VAL {

  extern bool Verbose;
  extern ostream *report;
  extern parse_category *top_thing;

  extern analysis an_analysis;
  extern analysis *current_analysis;

  extern yyFlexLexer *yfl;

  extern TypeChecker *theTC;

  int PropInfo::x = 0;

};  // namespace VAL

extern const char *current_filename;
using namespace VAL;

/**
 * This expects any number of filenames as arguments, although
 * it probably doesn't ever make sense to supply more than two.
 */
int main(int argc, char *argv[]) {
  current_analysis = &an_analysis;
  an_analysis.pred_tab.replaceFactory< holding_pred_symbol >();
  an_analysis.func_tab.replaceFactory< extended_func_symbol >();

  ifstream *current_in_stream;
  yydebug = 0;  // Set to 1 to output yacc trace

  yfl = new yyFlexLexer;

  // Loop over given args
  for (int a = 1; a < argc; ++a) {
    current_filename = argv[a];
    cout << "File: " << current_filename << '\n';
    current_in_stream = new ifstream(current_filename);
    if (current_in_stream->bad()) {
      // Output a message now
      cout << "Failed to open\n";

      // Log an error to be reported in summary later
      line_no = 0;
      log_error(E_FATAL, "Failed to open file");
    } else {
      line_no = 1;

      // Switch the tokeniser to the current input stream
      yfl->switch_streams(current_in_stream, &cout);
      yyparse();

      // Output syntax tree
      // if (top_thing) top_thing->display(0);
    }
    delete current_in_stream;
  }
  // Output the errors from all input files
  current_analysis->error_list.report();
  delete yfl;

  TypeChecker tc(current_analysis);
  theTC = &tc;

  TypePredSubstituter a;
  current_analysis->the_problem->visit(&a);
  current_analysis->the_domain->visit(&a);
  Analyser aa;
  current_analysis->the_problem->visit(&aa);
  current_analysis->the_domain->visit(&aa);
  current_analysis->the_domain->predicates->visit(&aa);
  if (current_analysis->the_domain->functions)
    current_analysis->the_domain->functions->visit(&aa);
}
