//
//  FriendCell.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/21.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <UIKit/UIKit.h>
@class User;

FOUNDATION_EXPORT NSString* const FriendCellIdentifier;

@interface FriendCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nicknameLabel;

@property (weak, nonatomic) IBOutlet UIImageView *portraitView;

- (void)setFriend:(User*)aFriend;

@end
