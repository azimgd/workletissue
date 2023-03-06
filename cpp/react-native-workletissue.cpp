#include "react-native-workletissue.h"
#import "WKTJsiWorkletContext.h"
#import "WKTJsiWorklet.h"
#import "WKTJsiWorkletApi.h"

using namespace::std;
using namespace::facebook::react;
using namespace::facebook::jsi;

namespace workletissue {
	double multiply(Runtime &jsRuntime, shared_ptr<CallInvoker> jsCallInvoker) {
    
    auto workletContext = std::make_shared<RNWorklet::JsiWorkletContext>("MyLibrary");

    auto runOnJS = [](std::function<void()>&& f) {};
    auto runOnWorklet = [](std::function<void()>&& f) {};

    workletContext = std::make_shared<RNWorklet::JsiWorkletContext>("MyLibrary");
    workletContext->initialize("MyLibrary", &jsRuntime, runOnJS, runOnWorklet);
    RNWorklet::JsiWorkletApi::installApi(jsRuntime);
    RNWorklet::JsiWorkletContext::getDefaultInstance()->initialize("Default", &jsRuntime, runOnJS, runOnWorklet);
    
		return 1;
	}
}
