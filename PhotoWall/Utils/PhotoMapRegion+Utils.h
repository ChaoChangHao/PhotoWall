//
//  PhotoMapRegion+Utils.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/22.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//
#import "PhotoMapRegion.h"

#import <MapKit/MapKit.h>

@interface PhotoMapRegion (Utils)

+ (PhotoMapRegion*)fromMKCoordinateRegion:(MKCoordinateRegion)region;

- (MKCoordinateRegion)toMKCoordinateRegion;

@end
