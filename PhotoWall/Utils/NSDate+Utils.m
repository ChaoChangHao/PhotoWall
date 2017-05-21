//
//  NSDate+Utils.m
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/22.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import "NSDate+Utils.h"

@implementation NSDate (Utils)

- (NSString*)timestampInMilliseconds {
    long milliseconds = ceil(self.timeIntervalSince1970 * 1000);
    return [NSString stringWithFormat:@"%ld", milliseconds];
}

- (NSString*)dayString {
    NSDateFormatter* formatter = [NSDateFormatter new];
    formatter.dateFormat = @"YYYY/MM/dd";
    return [formatter stringFromDate:self];
}

@end
