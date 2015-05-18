//
//  MainViewController.h
//  QuickstartMusic
//
//  Created by Dave Frost on 17/06/2013.
//  Copyright (c) 2013 Dave Frost. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
