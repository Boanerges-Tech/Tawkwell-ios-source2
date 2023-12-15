//
//  GNOneSignalHeader.h
//  OneSignalPlugin
//
//  Created by bld ai on 2/20/22.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "GNRegistrationHeader.h"

@interface GNOneSignalHeader : NSObject
- (BOOL)webviewOnTop;
- (void)presentAlert:(UIAlertController*)alert;
- (void)loadUrl:(NSURL*)url;
- (void)setInitialUrl:(NSURL *)url; // for initial launch from push notification
- (void)runGonativeInfoWithCallback:(NSString*)callback additionalData:(NSDictionary*)additionalData;
- (void)runJavascript:(NSString*)js;

@property WKWebView *wkWebview;
@property GNRegistrationHeader *registration;
@end
