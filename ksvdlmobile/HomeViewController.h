//
//  HomeViewController.h
//  ksvdlmobile
//
//  Created by Praveen on 5/20/15.
//  Copyright (c) 2015 Praveen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <iAd/iAd.h>
#import "SVProgressHUD.h"

@interface HomeViewController : UIViewController <ADBannerViewDelegate>
- (IBAction)submitTap:(id)sender;
@property (nonatomic, weak) IBOutlet UIImageView *imageview;
@end
