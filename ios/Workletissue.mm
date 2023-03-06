#import "Workletissue.h"
#import <jsi/jsi.h>
#import <React/RCTBridge+Private.h>
#import <React/RCTUtils.h>

using namespace facebook;

@implementation Workletissue

@synthesize bridge = _bridge;
@synthesize methodQueue = _methodQueue;

RCT_EXPORT_MODULE()

- (NSNumber *)multiply:(double)a b:(double)b {
    RCTBridge* bridge = [RCTBridge currentBridge];
    RCTCxxBridge* cxxBridge = (RCTCxxBridge*)bridge;
    
    if (cxxBridge == nullptr) {
      return @NO;
    }

    auto runtime = (jsi::Runtime*)cxxBridge.runtime;
    if (runtime == nullptr) {
      return @NO;
    }

  
    NSNumber *result = @(workletissue::multiply(*runtime, bridge.jsCallInvoker));

    return result;
}

// Don't compile this code when we build for the old architecture.
#ifdef RCT_NEW_ARCH_ENABLED
- (std::shared_ptr<facebook::react::TurboModule>)getTurboModule:
    (const facebook::react::ObjCTurboModule::InitParams &)params
{
    return std::make_shared<facebook::react::NativeWorkletissueSpecJSI>(params);
}
#endif

@end
