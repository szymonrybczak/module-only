
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNModuleonlySpec.h"

@interface Moduleonly : NSObject <NativeModuleonlySpec>
#else
#import <React/RCTBridgeModule.h>

@interface Moduleonly : NSObject <RCTBridgeModule>
#endif

@end
