//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoPlaybackObserver-Protocol.h>
#import <Silex/SXVideoVolumeObserving-Protocol.h>

@class AVAudioSession, SVKeyValueObserver, SXPlaybackCoordinator;

@interface SXVideoVolumeObserver : NSObject <SXVideoPlaybackObserver, SXVideoVolumeObserving>
{
    BOOL _muted;
    float _volume;
    id /* CDUnknownBlockType */ _volumeChangeBlock;
    id /* CDUnknownBlockType */ _muteStateChangeBlock;
    SXPlaybackCoordinator *_playbackCoordinator;
    AVAudioSession *_audioSession;
    SVKeyValueObserver *_outputVolumeObserver;
}

@property(readonly, nonatomic) SVKeyValueObserver *outputVolumeObserver; // @synthesize outputVolumeObserver=_outputVolumeObserver;
@property(readonly, nonatomic) __weak AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(readonly, nonatomic) __weak SXPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property(copy, nonatomic, setter=onMuteStateChange:) id /* CDUnknownBlockType */ muteStateChangeBlock; // @synthesize muteStateChangeBlock=_muteStateChangeBlock;
@property(copy, nonatomic, setter=onVolumeChange:) id /* CDUnknownBlockType */ volumeChangeBlock; // @synthesize volumeChangeBlock=_volumeChangeBlock;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) BOOL muted; // @synthesize muted=_muted;
// - (void).cxx_destruct;
- (void)updateWithVolume:(float)arg1 muted:(BOOL)arg2;
- (void)volumeChanged:(float)arg1;
- (void)playbackCoordinatorMuteStateChanged:(id)arg1;
- (id)initWithPlaybackCoordinator:(id)arg1 audioSession:(id)arg2;

@end
