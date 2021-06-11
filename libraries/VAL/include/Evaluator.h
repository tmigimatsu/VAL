// Copyright 2019 - University of Strathclyde, King's College London and Schlumberger Ltd
// This source code is licensed under the BSD license found in the LICENSE file in the root directory of this source tree.

#ifndef __EVALUATOR
#define __EVALUATOR
#include "Environment.h"
#include "VisitController.h"
#include "ptree.h"
#include <map>
#include <set>
#include <vector>

namespace VAL_v1 {
  class State;
  class FastEnvironment;
  class Validator;

};  // namespace VAL_v1

namespace Inst {

  class instantiatedOp;

  class Evaluator : public VAL_v1::VisitController {
   protected:
    VAL_v1::Validator *vld;

    bool value;
    VAL_v1::Environment env;
    VAL_v1::FastEnvironment *f;

    const VAL_v1::State *state;

    VAL_v1::pred_symbol *equality;

    bool ignoreMetrics;
    bool context;

   public:
    static void setInitialState();

    Evaluator(VAL_v1::Validator *v, const VAL_v1::State *s, Inst::instantiatedOp *op,
              bool im = false);

    virtual void visit_simple_goal(VAL_v1::simple_goal *);
    virtual void visit_qfied_goal(VAL_v1::qfied_goal *);
    virtual void visit_conj_goal(VAL_v1::conj_goal *);
    virtual void visit_disj_goal(VAL_v1::disj_goal *);
    virtual void visit_timed_goal(VAL_v1::timed_goal *);
    virtual void visit_imply_goal(VAL_v1::imply_goal *);
    virtual void visit_neg_goal(VAL_v1::neg_goal *);
    virtual void visit_comparison(VAL_v1::comparison *);
    virtual void visit_preference(VAL_v1::preference *);
    virtual void visit_event(VAL_v1::event *e);
    virtual void visit_process(VAL_v1::process *p);
    virtual void visit_action(VAL_v1::action *o);
    virtual void visit_durative_action(VAL_v1::durative_action *da);
    bool operator()() { return value; };
  };

};  // namespace Inst

#endif
