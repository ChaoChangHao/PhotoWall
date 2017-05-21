//
//  LocationAwarePhotoUploadTask.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/22.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <CoreLocation/CoreLocation.h>

#import "PhotoManager.h"

@interface LocationAwarePhotoUploadTask : NSObject<CLLocationManagerDelegate>

- (instancetype)initWithData:(NSData*)data;

- (void)uploadWithClient:(RestClient*)client andHandler:(PhotoHandler)handler;

@end
