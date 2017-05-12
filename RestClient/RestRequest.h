//
//  RestRequest.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/12.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RestResponse;

typedef void(^ResponseHandler)(RestResponse*);

@interface RestRequest : NSObject

- (instancetype)initWithURL:(NSString*)url;
//直接給一個url

- (RestRequest*)query:(NSString*)key withValue:(NSString*)value;

- (RestRequest*)resolve:(NSString*)key withValue:(NSString*)value;

- (RestRequest*)setValue:(NSString*)value forHeader:(NSString*)header;
//設定header的值

- (void)get:(ResponseHandler)handler;

- (void)delete:(ResponseHandler)handler;

- (void)put:(id)content withHandler:(ResponseHandler)handler;

- (void)post:(id)content withHandler:(ResponseHandler)handler;

- (void)upload:(NSData*)data withMethod:(NSString*)method andHandler:(ResponseHandler)handler;
//NSData可以當作binary array

@property (readonly) NSString* url;
@property (readonly) NSString* completeURL;
@property (readonly) NSDictionary* headers;
@property (readonly) NSDictionary* pathParameters;
@property (readonly) NSDictionary* queryParameters;
//不希望被改的部分，設定為readonly
@end
