// Copyright 2019 - University of Strathclyde, King's College London and Schlumberger Ltd
// This source code is licensed under the BSD license found in the LICENSE file in the root directory of this source tree.

#ifndef __SIMPLE_EVALUATOR
#define __SIMPLE_EVALUATOR
#include "FastEnvironment.h"
#include "VisitController.h"
#include "ptree.h"
#include <map>
#include <set>
#include <vector>

namespace VAL_v1 {

  class TypeChecker;
};

namespace Inst {

  typedef std::set< VAL_v1::pred_symbol * > IState0Arity;
  typedef std::map< VAL_v1::pred_symbol *, vector< VAL_v1::parameter_symbol_list * > >
      IState;

  class PrimitiveEvaluator {
   protected:
    bool &valueTrue;
    bool &unknownTrue;
    bool &valueFalse;
    bool &unknownFalse;

   public:
    PrimitiveEvaluator(bool &xt, bool &yt, bool &xf, bool &yf)
        : valueTrue(xt), unknownTrue(yt), valueFalse(xf), unknownFalse(yf){};
    virtual ~PrimitiveEvaluator(){};
    virtual void evaluateSimpleGoal(VAL_v1::FastEnvironment *f,
                                    VAL_v1::simple_goal *s) {
      unknownTrue = true;
      unknownFalse = true;
    };
  };

  template < typename PE >
  class PrimitiveEvaluatorConstructor {
   public:
    PrimitiveEvaluator *operator()(bool &v, bool &u, bool &w, bool &x) {
      return new PE(v, u, w, x);
    }
  };

  class InitialStateEvaluator : public PrimitiveEvaluator {
   protected:
    friend class ParameterDomainConstraints;
    friend class LitStoreEvaluator;
    static IState initState;
    static IState0Arity init0State;

   public:
    InitialStateEvaluator(bool &v, bool &u, bool &w, bool &x)
        : PrimitiveEvaluator(v, u, w, x){};
    static void setInitialState();
    virtual void evaluateSimpleGoal(VAL_v1::FastEnvironment *f,
                                    VAL_v1::simple_goal *s);
    static const IState0Arity &getInit0State() { return init0State; }
  };

  typedef PrimitiveEvaluatorConstructor< InitialStateEvaluator > ISC;

  class SimpleEvaluator : public VAL_v1::VisitController {
   protected:
    bool valueTrue;
    bool unknownTrue;
    bool valueFalse;
    bool unknownFalse;

    VAL_v1::TypeChecker *tc;
    VAL_v1::FastEnvironment *f;

    VAL_v1::pred_symbol *const equality;

    bool isFixed;
    bool undefined;
    double nvalue;  // Used for numeric values.
    bool isDuration;

    PrimitiveEvaluator *const primev;

   public:
    static bool verbose;

    template < typename PEC >
    SimpleEvaluator(VAL_v1::TypeChecker *const tcIn,
                    VAL_v1::FastEnvironment *const ff,
                    PrimitiveEvaluatorConstructor< PEC > pec)
        : valueTrue(true),
          unknownTrue(false),
          valueFalse(false),
          unknownFalse(false),
          tc(tcIn),
          f(ff),
          equality(VAL_v1::current_analysis->pred_tab.symbol_probe("=")),
          primev(pec(valueTrue, unknownTrue, valueFalse, unknownFalse)){};

    ~SimpleEvaluator() { delete primev; };

    bool reallyTrue() const { return !unknownTrue && valueTrue; };
    bool reallyFalse() const {
      // return !unknownTrue && !valueTrue;
      return !unknownFalse && valueFalse;
    };

    void prepareForVisit(VAL_v1::FastEnvironment *const ff) {
      f = ff;
      valueTrue = true;
      unknownTrue = false;
      valueFalse = false;
      unknownFalse = false;
    }

    static void setInitialState() { InitialStateEvaluator::setInitialState(); };

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
    virtual void visit_derivation_rule(VAL_v1::derivation_rule *o);
    virtual void visit_durative_action(VAL_v1::durative_action *da);
    bool equiv(const VAL_v1::parameter_symbol_list *,
               const VAL_v1::parameter_symbol_list *);

    virtual void visit_plus_expression(VAL_v1::plus_expression *s);
    virtual void visit_minus_expression(VAL_v1::minus_expression *s);
    virtual void visit_mul_expression(VAL_v1::mul_expression *s);
    virtual void visit_div_expression(VAL_v1::div_expression *s);
    virtual void visit_uminus_expression(VAL_v1::uminus_expression *s);
    virtual void visit_int_expression(VAL_v1::int_expression *s);
    virtual void visit_float_expression(VAL_v1::float_expression *s);
    virtual void visit_special_val_expr(VAL_v1::special_val_expr *s);
    virtual void visit_func_term(VAL_v1::func_term *s);
    virtual void visit_class_func_term(VAL_v1::class_func_term *s);
  };

};  // namespace Inst

#endif
