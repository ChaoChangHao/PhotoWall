//
//  FriendCell.m
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/21.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import "FriendCell.h"
#import "User.h"

#import "RestClient.h"
#import "UIColor+Defaults.h"
#import "UIImageView+WebImage.h"

NSString* const FriendCellIdentifier = @"FriendCell";

@implementation FriendCell

- (void)setFriend:(User*)aFriend {
    self.nicknameLabel.text = aFriend.nickname;
    
    self.portraitView.layer.masksToBounds = YES;
    self.portraitView.layer.borderColor = [UIColor main].CGColor;
    self.portraitView.layer.cornerRadius = self.portraitView.frame.size.width / 2;
    [self.portraitView setImageWithPath:aFriend.portraitPath andPlaceholder:nil];
}

@end
