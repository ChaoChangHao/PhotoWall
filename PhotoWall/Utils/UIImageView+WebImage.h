//
//  UIImageView+WebImage.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/21.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (WebImage)

- (void)setImageWithURL:(NSURL*)url andPlaceholder:(UIImage*)placeholder;

- (void)setImageWithPath:(NSString*)path andPlaceholder:(UIImage*)placeholder;

@end
