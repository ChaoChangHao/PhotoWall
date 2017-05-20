//
//  NSString+Utils.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/20.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Digest)

- (NSString*)sha1;

- (NSString*)base64;

+ (BOOL)notEmpty:(NSString*)string;

@end
