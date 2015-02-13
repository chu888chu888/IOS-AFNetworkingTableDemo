//
//  User.m
//  AFNetworkingTableDemo
//
//  Created by chuguangming on 15/2/13.
//  Copyright (c) 2015年 chu. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kUserProfileImageDidLoadNotification;

@interface User : NSObject

@property (readonly, nonatomic, assign) NSUInteger userID;
@property (readonly, nonatomic, copy) NSString *username;
@property (readonly, nonatomic, unsafe_unretained) NSURL *avatarImageURL;

- (instancetype)initWithAttributes:(NSDictionary *)attributes;

@end