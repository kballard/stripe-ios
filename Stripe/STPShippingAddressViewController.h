//
//  STPShippingAddressViewController.h
//  Stripe
//
//  Created by Ben Guo on 8/29/16.
//  Copyright © 2016 Stripe, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STPTheme.h"
#import "STPPaymentConfiguration.h"

@interface STPShippingAddressViewController : UIViewController

- (instancetype)initWithConfiguration:(STPPaymentConfiguration *)configuration theme:(STPTheme *)theme;

@end
