//
//  GNOneSignalUtilities.h
//  OneSignalPlugin
//
//  Created by bld ai on 2/20/22.
//

#import <Foundation/Foundation.h>

@interface GNOneSignalUtilities : NSObject
+(NSURL*)urlWithString:(NSString*)string;
+(BOOL)checkNativeBridgeUrl:(NSString*)url;
@end
