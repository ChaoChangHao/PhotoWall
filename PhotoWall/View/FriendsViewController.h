//
//  FriendsViewController.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/21.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UserManager;
@class RootViewController;

@interface FriendsViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (weak) UserManager* userManager;
@property (weak) RootViewController* rootViewController;


@property (weak, nonatomic) IBOutlet UITableView *friendsView;

@end
