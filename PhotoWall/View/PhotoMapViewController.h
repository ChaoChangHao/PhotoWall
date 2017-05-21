//
//  PhotoMapViewController.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/21.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UserManager;
@class PhotoManager;

@interface PhotoMapViewController : UIViewController

@property (weak, nonatomic) UIViewController* rootViewController;
@property (weak, nonatomic) UserManager* userManager;
@property (weak, nonatomic) PhotoManager* photoManager;

@end
