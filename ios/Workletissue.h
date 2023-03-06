#ifdef __cplusplus
#import "react-native-workletissue.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNWorkletissueSpec.h"

@interface Workletissue : NSObject <NativeWorkletissueSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Workletissue : NSObject <RCTBridgeModule>
#endif

@end
