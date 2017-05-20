//
//  UIViewController+Mask.m
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/20.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import "UIViewController+Mask.h"

#import "UIView+Utils.h"
static UIView* maskView;


@implementation UIViewController (Mask)

- (void)showMask {
    if (maskView != nil) {
        return;
    }
    UIWindow* window = [[[UIApplication sharedApplication] windows] firstObject];
    maskView = [[[NSBundle mainBundle] loadNibNamed:@"MaskView" owner:nil options:nil] firstObject];
    [window addSubview:maskView fit:YES];
}

- (void)hideMask {
    [maskView removeFromSuperview];
    maskView = nil;
}

@end
