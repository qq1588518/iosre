//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountErrorInfo, NSArray, NSString;

@protocol WCFindFriendLogicDelegate <NSObject>

@optional
- (void)onSendSmsToMFriendList:(AccountErrorInfo *)arg1;
- (void)onCheckMFriendList:(AccountErrorInfo *)arg1 ticket:(NSString *)arg2 arrMobileInfo:(NSArray *)arg3 arrEmailInfo:(NSArray *)arg4;
@end
