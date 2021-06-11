// Copyright 2019 - University of Strathclyde, King's College London and Schlumberger Ltd
// This source code is licensed under the BSD license found in the LICENSE file in the root directory of this source tree.

#ifndef __AGENTS
#define __AGENTS

#include "Environment.h"
#include "ptree.h"

class Agents {
 private:
  int numGps;
  std::vector< vector< VAL_v1::const_symbol * > > agentGps;
  std::map< VAL_v1::const_symbol *, int > inGroup;
  std::map< int, vector< pair< VAL_v1::operator_ *, int > > > groupActions;

 public:
  Agents() : numGps(0), agentGps(){};
  void addAgent(VAL_v1::const_symbol *c) {
    agentGps[numGps - 1].push_back(c);
    inGroup[c] = numGps - 1;
  }
  void startNewGroup(VAL_v1::const_symbol *c) {
    agentGps.push_back(std::vector< VAL_v1::const_symbol * >());
    ++numGps;
    addAgent(c);
  }

  void addAction(VAL_v1::operator_ *o, int n) {
    groupActions[numGps - 1].push_back(make_pair(o, n));
  }

  vector< int > whichGroups(const VAL_v1::Environment &bdgs) {
    vector< int > gps;
    int c = 0;
    for (vector< vector< VAL_v1::const_symbol * > >::iterator i = agentGps.begin();
         i != agentGps.end(); ++i, ++c) {
      for (vector< VAL_v1::const_symbol * >::iterator j = i->begin();
           j != i->end(); ++j) {
        for (VAL_v1::Environment::const_iterator k = bdgs.begin(); k != bdgs.end();
             ++k) {
          if (k->second == *j) {
            gps.push_back(c);
            j = i->end();
            --j;
            break;
          }
        }
      }
    }
    return gps;
  }

  string show(int g) {
    string s("");
    for (vector< VAL_v1::const_symbol * >::iterator i = agentGps[g].begin();
         i != agentGps[g].end(); ++i) {
      s += (*i)->getName();
      s += " ";
    }
    return s;
  }
};

#endif
