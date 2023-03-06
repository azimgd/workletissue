#ifndef WORKLETISSUE_H
#define WORKLETISSUE_H

#include <jsi/jsilib.h>
#include <jsi/jsi.h>
#include <ReactCommon/CallInvoker.h>

using namespace::facebook::react;
using namespace::facebook::jsi;
using namespace::std;

namespace workletissue {
  double multiply(Runtime &jsRuntime, shared_ptr<CallInvoker> jsCallInvoker);
}

#endif /* WORKLETISSUE_H */
