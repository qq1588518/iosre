//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "IMusicPlayerExt.h"
#import "ISysCallCheckExt.h"
#import "IWAAudioPlayerDelegate.h"

@class NSMutableDictionary, NSString;

@interface WAJSContextPlugin_AudioPlayer : WAJSContextPluginBase <IWAAudioPlayerDelegate, IMusicPlayerExt, ISysCallCheckExt>
{
    id <IJSContextPluginDelegate> _resultDelegate;
    NSMutableDictionary *_playerDic;
}

@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)onResumeMusic:(id)arg1;
- (void)onPlayMusic:(id)arg1 fromScene:(int)arg2;
- (void)BeginInterruption;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)setAllPlayerMute:(_Bool)arg1;
- (void)pauseAllPlayer;
- (void)stopAllPlayer;
- (void)onPlayerStateChange:(long long)arg1 audioId:(id)arg2 errCode:(long long)arg3 errMsg:(id)arg4;
- (id)getPlayerWithAudioId:(id)arg1;
- (double)getPlayerBufferTime:(id)arg1;
- (double)getPlayerStartTime:(id)arg1;
- (id)getPlayerSrc:(id)arg1;
- (double)getPlayerCurtime:(id)arg1;
- (double)getPlayerDuration:(id)arg1;
- (_Bool)isPlayerIdle:(id)arg1;
- (_Bool)isPlayerWaiting:(id)arg1;
- (_Bool)isPlayerPlaying:(id)arg1;
- (_Bool)isPlayerPaused:(id)arg1;
- (_Bool)isPlayerSet:(id)arg1;
- (void)destoryPlayer:(id)arg1;
- (void)stopPlayer:(id)arg1;
- (void)seekPlayer:(id)arg1 seekTime:(float)arg2;
- (void)pausePlayer:(id)arg1;
- (void)playPlayer:(id)arg1;
- (void)setPlayerState:(id)arg1 src:(id)arg2 startTime:(double)arg3 autoPlay:(_Bool)arg4 loop:(_Bool)arg5 obeyMuteSwitch:(_Bool)arg6;
- (_Bool)isAudioPlayerExist:(id)arg1;
- (id)createAudioInstance;
- (_Bool)canCreateAuidoInstance;
- (unsigned long long)audioPlayerCount;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
