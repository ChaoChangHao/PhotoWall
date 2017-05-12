//
//  RestResponse.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/12.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RestRequest;
//使用class, 避免循環import
@interface RestResponse : NSObject

- (instancetype)initWithRequest:(RestRequest*)request rawResponse:(NSURLResponse*)response andResponseObject:(id)object;

@property (readonly) NSInteger statusCode;
@property (readonly) BOOL succeeded;
@property (readonly) id result;
@property (readonly) NSError* error;
@property (readonly) NSDictionary* headers;

@end
