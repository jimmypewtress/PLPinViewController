//
//  PLViewController.h
//  PLPinViewController
//
//  Created by Ash Thwaites on 09/17/2016.
//  Copyright (c) 2016 Ash Thwaites. All rights reserved.
//

@import UIKit;

@import PLPinViewController;

@interface PLExampleViewController : UIViewController <PLPinViewControllerDelegate>

- (IBAction)createPinPressed:(id)sender;
- (IBAction)changePinPressed:(id)sender;
- (IBAction)enterPinPressed:(id)sender;

@end
