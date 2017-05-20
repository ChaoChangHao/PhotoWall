//
//  KeyChainSecuredAuthenticator.m
//  PhotoWall
//
//  Created by Chang Hao Chao on 2017/5/20.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import "KeyChainSecuredAuthenticator.h"

#import <NitroKeychain/TNTKeychain.h>

#import "RestRequest.h"
#import "AccountManager.h"

@implementation KeyChainSecuredAuthenticator

- (void)authenticate:(RestRequest*)request {
    NSString* token = [TNTKeychain load:KeyChainTokenKey accessGroup:KeyChainGroup];
    if (token != nil) {
        [request setValue:token forHeader:@"Auth-Token"];
    }
}

@end
