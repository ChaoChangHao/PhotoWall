//
//  PhotoManager.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/22.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <MapKit/MapKit.h>

#import "Photo.h"
#import "PhotoMapRegion.h"

@class RestClient;

typedef void(^PhotoHandler)(NSError* error, NSArray* photos);

@interface PhotoManager : NSObject<CLLocationManagerDelegate>

- (instancetype)initWithClient:(RestClient*)client;

- (void)uploadPhoto:(NSData*)photo withHandler:(PhotoHandler)handler;

- (void)loadPhotosAfter:(NSDate*)after before:(NSDate*)before ofUser:(NSString*)userId withHandler:(PhotoHandler)handler;

- (void)loadPhotosNear:(PhotoMapRegion*)region withHandler:(PhotoHandler)handler;

@end
