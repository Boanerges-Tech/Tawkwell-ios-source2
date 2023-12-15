//
//  GNOSPSubscriptionsModel.h
//  GonativeIO
//
//  Created by Weiyin He on 10/20/17.
//  Copyright © 2017 GoNative.io LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GNOSPSubscriptionItem : NSObject
@property NSString *identifier;
@property NSString *name;
@property BOOL isSubscribed;
@end

@interface GNOSPSubscriptionsSection : NSObject
@property NSString *name;
@property NSArray<GNOSPSubscriptionItem*> *items;
@end

@interface GNOSPSubscriptionsModel : NSObject
@property NSArray<GNOSPSubscriptionsSection*> *sections;

+(GNOSPSubscriptionsModel*)modelWithJSONData:(NSData*)data;

@end
