//
//  CSAppDelegate.h
//  CSNotificationViewDemo
//
//  Created by Christian Schwarz on 01.09.13.
//  Copyright (c) 2013 Christian Schwarz. Check LICENSE.md.
//

#import <UIKit/UIKit.h>
@class CSDetailsViewController;

@interface CSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic) CSDetailsViewController *detailsViewController;

@end