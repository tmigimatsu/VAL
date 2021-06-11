// Copyright 2019 - University of Strathclyde, King's College London and Schlumberger Ltd
// This source code is licensed under the BSD license found in the LICENSE file in the root directory of this source tree.

#ifndef __LITERALPROPLINK
#define __LITERALPROPLINK

namespace VAL_v1 {
  class SimpleProposition;
  class Environment;
};  // namespace VAL_v1

namespace Inst {

  class Literal;
  class instantiatedOp;

  Literal *toLiteral(const VAL_v1::SimpleProposition *);
  VAL_v1::Environment toEnv(instantiatedOp *op);

};  // namespace Inst

#endif
