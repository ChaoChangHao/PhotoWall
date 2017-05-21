//
//  PhotoMapRegion.m
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/22.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import "PhotoMapRegion.h"

@implementation PhotoMapRegion

- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude andRadius:(double)radius {
    if (self = [super init]) {
        _latitude = latitude;
        _longitude = longitude;
        _radius = radius;
    }
    return self;
}

@end
