//
//  AppDelegate.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/5.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

#import "UserManager.h"
#import "PhotoManager.h"
#import "AccountManager.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate, AuthenticationDelegate>

@property (strong, nonatomic) UIWindow *window;


@property (strong, nonatomic) UserManager* userManager;
@property (strong, nonatomic) PhotoManager* photoManager;
@property (strong, nonatomic) AccountManager* accountManager;

@end

