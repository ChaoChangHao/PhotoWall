//
//  PhotoGridViewController.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/21.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UserManager;
@class PhotoManager;

@interface PhotoGridViewController : UIViewController

@property (nonatomic, weak) UIViewController* rootViewController;

@property (nonatomic) NSString* posterId;
@property (nonatomic, weak) UserManager* userManager;
@property (nonatomic, weak) PhotoManager* photoManager;

- (void)refreshPhotos;
@end
