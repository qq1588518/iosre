//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class EmoticonTabItemView, NSArray, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, UIImageView;

@interface EmoticonBoardBottomTabBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionViewFlowLayout *m_collectionLayout;
    UICollectionView *m_collectionView;
    UIView *m_sendButtonBackgroundView;
    UIButton *m_sendButton;
    UIImageView *m_newBadge;
    EmoticonTabItemView *m_storePlusBtn;
    EmoticonTabItemView *m_floatingSettingBtn;
    _Bool _hasStorePlusBtn;
    _Bool _hasSettingBtn;
    id <EmoticonBoardBottomTabBarDelegate> _delegate;
    NSArray *_emoticonTabItems;
    NSString *_lastSelectedPid;
}

@property(nonatomic) _Bool hasSettingBtn; // @synthesize hasSettingBtn=_hasSettingBtn;
@property(nonatomic) _Bool hasStorePlusBtn; // @synthesize hasStorePlusBtn=_hasStorePlusBtn;
@property(retain, nonatomic) NSString *lastSelectedPid; // @synthesize lastSelectedPid=_lastSelectedPid;
@property(retain, nonatomic) NSArray *emoticonTabItems; // @synthesize emoticonTabItems=_emoticonTabItems;
@property(nonatomic) __weak id <EmoticonBoardBottomTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=m_sendButton;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onSettingBtnClick:(id)arg1;
- (void)onStorePlusBtnClick:(id)arg1;
- (void)updateNew:(_Bool)arg1;
- (void)adjustFloatingSettingBtnPositionIfNeed;
- (void)configSendButton;
- (void)configCollectionView;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
