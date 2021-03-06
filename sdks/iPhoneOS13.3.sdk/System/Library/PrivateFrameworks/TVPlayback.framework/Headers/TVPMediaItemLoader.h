//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/AVAssetResourceLoaderDelegate-Protocol.h>

@class AVURLAsset, NSError, NSNotification, NSString, NSTimer, TVPContentKeySession, TVPMediaItemTimingData, TVPStateMachine;
@protocol OS_dispatch_queue, TVPMediaItem;

__attribute__((visibility("hidden")))
@interface TVPMediaItemLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    BOOL _cleanedUp;
    BOOL _AVAudioSessionConfiguredAfterMediaServicesReset;
    NSObject<TVPMediaItem> *_mediaItem;
    NSString *_state;
    NSError *_error;
    TVPMediaItemTimingData *_timingData;
    AVURLAsset *_existingAVAsset;
    id _reportingHierarchyToken;
    AVURLAsset *_AVAsset;
    TVPStateMachine *_stateMachine;
    AVURLAsset *_AVAssetInternal;
    TVPContentKeySession *_contentKeySession;
    NSObject<OS_dispatch_queue> *_assetInternalAccessQueue;
    NSObject<OS_dispatch_queue> *_assetLoadContextAccessQueue;
    NSUInteger _assetLoadContext;
    NSUInteger _refCount;
    NSString *_mediaItemLoaderGUID;
    NSTimer *_diskSpaceMonitorTimer;
    NSNotification *_savedMediaServerResetUserNotification;
}

+ (id)tempDirURL;
+ (void)removeTemporaryDownloadDirectory;
+ (id)loaderForMediaItem:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSNotification *savedMediaServerResetUserNotification; // @synthesize savedMediaServerResetUserNotification=_savedMediaServerResetUserNotification;
@property(nonatomic) BOOL AVAudioSessionConfiguredAfterMediaServicesReset; // @synthesize AVAudioSessionConfiguredAfterMediaServicesReset=_AVAudioSessionConfiguredAfterMediaServicesReset;
@property(nonatomic) BOOL cleanedUp; // @synthesize cleanedUp=_cleanedUp;
@property(retain, nonatomic) NSTimer *diskSpaceMonitorTimer; // @synthesize diskSpaceMonitorTimer=_diskSpaceMonitorTimer;
@property(copy, nonatomic) NSString *mediaItemLoaderGUID; // @synthesize mediaItemLoaderGUID=_mediaItemLoaderGUID;
@property(nonatomic) NSUInteger refCount; // @synthesize refCount=_refCount;
@property(nonatomic) NSUInteger assetLoadContext; // @synthesize assetLoadContext=_assetLoadContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetLoadContextAccessQueue; // @synthesize assetLoadContextAccessQueue=_assetLoadContextAccessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetInternalAccessQueue; // @synthesize assetInternalAccessQueue=_assetInternalAccessQueue;
@property(retain, nonatomic) TVPContentKeySession *contentKeySession; // @synthesize contentKeySession=_contentKeySession;
@property(retain, nonatomic) AVURLAsset *AVAssetInternal; // @synthesize AVAssetInternal=_AVAssetInternal;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) AVURLAsset *AVAsset; // @synthesize AVAsset=_AVAsset;
@property(retain, nonatomic) id reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(retain, nonatomic) AVURLAsset *existingAVAsset; // @synthesize existingAVAsset=_existingAVAsset;
@property(retain, nonatomic) TVPMediaItemTimingData *timingData; // @synthesize timingData=_timingData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
// - (void).cxx_destruct;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)_cleanUp;
- (void)_cellularSettingsDidChange:(id)arg1;
- (void)_networkTypeDidChange:(id)arg1;
- (void)_mediaItemStopPlayback:(id)arg1;
- (void)_mediaItemPlaybackErrorDidOccur:(id)arg1;
- (void)_stopBackgroundCaching:(id)arg1;
- (id)_skipKeyNameFromType:(NSUInteger)arg1;
- (id)_rollKeyNameFromType:(NSUInteger)arg1;
- (NSUInteger)_skipTypeFromMetadataItemKey:(id)arg1;
- (NSUInteger)_rollTypeFromMetadataItemKey:(id)arg1;
- (id)_stringValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3;
- (id)_numberValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3;
- (id)_advisoryInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 withTotalCount:(NSUInteger)arg3;
- (id)_skipInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(NSUInteger)arg3 withTotalCount:(NSUInteger)arg4;
- (id)_rollInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(NSUInteger)arg3 withTotalCount:(NSUInteger)arg4;
- (void)_loadMediaItemMetadataAsynchronously;
- (id)_contentKeyRequestParamsFromBase64String:(id)arg1;
- (id)_tomatoFreshnessFromString:(id)arg1;
- (id)_advisoryKeyNamesWithCount:(NSUInteger)arg1;
- (id)_skipKeyNamesForType:(NSUInteger)arg1 withCount:(NSUInteger)arg2;
- (id)_rollKeyNamesForType:(NSUInteger)arg1 withCount:(NSUInteger)arg2;
- (BOOL)_needToLoadBlockingMetadataKeys;
- (id)_metadataKeysToLoad;
- (void)_postMediaServicesResetFailureWithNotification:(id)arg1;
- (void)_avAudioSessionConfiguredAfterMediaServicesReset;
- (void)_avAudioSessionMediaServicesReset:(id)arg1;
- (void)_avAssetMediaServicesReset:(id)arg1;
- (id)_avAssetOptions;
- (void)_registerStateMachineHandlers;
- (void)loadSHA1DigestWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)newPlayerItem;
@property(readonly, nonatomic) BOOL containsStreamingAVAsset;
@property(readonly, copy) NSString *description;
- (void)prepareForPlaybackInitiation;
- (void)cleanupIfNecessary;
- (void)loadIfNecessary;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;

@end

