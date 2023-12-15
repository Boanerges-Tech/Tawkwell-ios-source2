//
//  GNSubscriptionsTableViewController.h
//  GonativeIO
//
//  Created by Weiyin He on 10/20/17.
//  Copyright © 2017 GoNative.io LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GNOSPSubscriptionsModel.h"

@interface GNOSPSubscriptionsTableViewController : UITableViewController
-(void)loadModel:(GNOSPSubscriptionsModel*)model;
@end
