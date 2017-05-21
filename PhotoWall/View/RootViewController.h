//
//  RootViewController.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/20.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UserManager;
@class PhotoManager;
@class AccountManager;

@interface RootViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UIView *viewContainer;

@property (weak, nonatomic) IBOutlet UIButton *friendsTabButton;
@property (weak, nonatomic) IBOutlet UIButton *gridTabButton;
@property (weak, nonatomic) IBOutlet UIButton *takePictureTabButton;
@property (weak, nonatomic) IBOutlet UIButton *photoMapTabButton;
@property (weak, nonatomic) IBOutlet UIButton *profileTabButton;

@property UserManager* userManager;
@property PhotoManager* photoManager;
@property AccountManager* accountManager;

- (void)showPhotosOfUser:(NSString*)userId;

@end
