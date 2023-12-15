//
//  GNRegistrationHeader.h
//  GNRegistrationHeader
//
//  Created by bld ai on 2/20/22.
//

#import <Foundation/Foundation.h>

@interface GNRegistrationHeader : NSObject
-(void)setOneSignalUserId:(NSString *)userId pushToken:(NSString*)pushToken subscribed:(BOOL)subscribed;
-(void)setOneSignalRequiresPrivacyConsent:(BOOL)requiresPrivacyConsent;
@end
