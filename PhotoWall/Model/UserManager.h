//
//  UserManager.h
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/21.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>


#import "User.h"

@class RestClient;

FOUNDATION_EXPORT NSString* const UsersSynchronizedNotificationName;

@interface UserManager : NSObject

- (instancetype)initWithClient:(RestClient*)client;

- (User*)getUser:(NSString*)userId;

- (void)markAsFavorite:(User*)user;

- (void)unmarkFavorite:(User*)user;

- (void)synchronize;

@property (readonly) NSArray* users;

@end
