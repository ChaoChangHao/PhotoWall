//
//  PhotoMapRegion.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/22.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PhotoMapRegion : NSObject

- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude andRadius:(double)radius;

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double radius;

@end
