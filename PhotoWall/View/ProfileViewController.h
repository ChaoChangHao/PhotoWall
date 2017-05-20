//
//  ProfileViewController.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/21.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AccountManager.h"

@interface ProfileViewController : UIViewController<AccountEditDelegate, UITextFieldDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak) AccountManager* accountManager;
@property (weak) UIViewController* rootViewController;

@end
