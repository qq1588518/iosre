//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface GameCenterUpItem : MMObject <PBCoding>
{
    NSString *fromUserName;
    NSString *timeDesc;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *timeDesc; // @synthesize timeDesc;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

