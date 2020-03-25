//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol CAMCVCStillImageResultCoordinatorDelegate;

@interface CAMCVCStillImageResultCoordinator : NSObject
{
    BOOL _expectingPairedVideo;
    BOOL _allowMultipleCaptures;
    BOOL _shouldReturnFilteredPhotosAsSingleAsset;
    BOOL __didReceiveForceRemainingDispatchesIfPossible;
    id <CAMCVCStillImageResultCoordinatorDelegate> _delegate;
    NSString *_identifier;
    NSSet *_allExpectedResultSpecifiers;
    NSMutableSet *__receivedPhotos;
    NSMutableSet *__receivedVideos;
    NSMutableSet *__photoResultSpecifiersDelayingForcedDispatch;
    NSMutableSet *__videoResultSpecifiersDelayingForcedDispatch;
    NSMutableSet *__handledResultSpecifiers;
    NSMutableSet *__dispatchedResultSpecifiers;
    NSMutableDictionary *__pendingPhotoProperties;
    NSMutableDictionary *__pendingVideoProperties;
    NSMutableDictionary *__pendingAssetAdjustments;
}

@property(readonly, nonatomic) NSMutableDictionary *_pendingAssetAdjustments; // @synthesize _pendingAssetAdjustments=__pendingAssetAdjustments;
@property(readonly, nonatomic) NSMutableDictionary *_pendingVideoProperties; // @synthesize _pendingVideoProperties=__pendingVideoProperties;
@property(readonly, nonatomic) NSMutableDictionary *_pendingPhotoProperties; // @synthesize _pendingPhotoProperties=__pendingPhotoProperties;
@property(readonly, nonatomic) NSMutableSet *_dispatchedResultSpecifiers; // @synthesize _dispatchedResultSpecifiers=__dispatchedResultSpecifiers;
@property(readonly, nonatomic) NSMutableSet *_handledResultSpecifiers; // @synthesize _handledResultSpecifiers=__handledResultSpecifiers;
@property(nonatomic, setter=_setDidReceiveForceRemainingDispatchesIfPossible:) BOOL _didReceiveForceRemainingDispatchesIfPossible; // @synthesize _didReceiveForceRemainingDispatchesIfPossible=__didReceiveForceRemainingDispatchesIfPossible;
@property(readonly, nonatomic) NSMutableSet *_videoResultSpecifiersDelayingForcedDispatch; // @synthesize _videoResultSpecifiersDelayingForcedDispatch=__videoResultSpecifiersDelayingForcedDispatch;
@property(readonly, nonatomic) NSMutableSet *_photoResultSpecifiersDelayingForcedDispatch; // @synthesize _photoResultSpecifiersDelayingForcedDispatch=__photoResultSpecifiersDelayingForcedDispatch;
@property(readonly, nonatomic) NSMutableSet *_receivedVideos; // @synthesize _receivedVideos=__receivedVideos;
@property(readonly, nonatomic) NSMutableSet *_receivedPhotos; // @synthesize _receivedPhotos=__receivedPhotos;
@property(readonly, nonatomic) BOOL shouldReturnFilteredPhotosAsSingleAsset; // @synthesize shouldReturnFilteredPhotosAsSingleAsset=_shouldReturnFilteredPhotosAsSingleAsset;
@property(readonly, nonatomic) BOOL allowMultipleCaptures; // @synthesize allowMultipleCaptures=_allowMultipleCaptures;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo; // @synthesize expectingPairedVideo=_expectingPairedVideo;
@property(readonly, nonatomic) NSSet *allExpectedResultSpecifiers; // @synthesize allExpectedResultSpecifiers=_allExpectedResultSpecifiers;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak id <CAMCVCStillImageResultCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_errorWithDescription:(id)arg1 code:(long long)arg2;
- (id)_errorForResultSpecifiers:(NSUInteger)arg1 allowMissingVideo:(BOOL)arg2;
- (BOOL)_attemptDispatchForResultSpecifiers:(NSUInteger)arg1 forceRemainingDispatches:(BOOL)arg2;
- (BOOL)_attemptDispatchForPairWithFilteredResultSpecifiers:(NSUInteger)arg1 unfilteredResultSpecifiers:(NSUInteger)arg2 forceRemainingDispatches:(BOOL)arg3;
- (BOOL)_isWaitingOnResultSpecifiers:(NSUInteger)arg1;
- (void)_dispatchPendingPropertiesForced:(BOOL)arg1;
- (void)forceRemainingDispatchesIfPossible;
@property(readonly, nonatomic, getter=_isDelayingForcedDispatch) BOOL _delayingForcedDispatch;
- (void)delayForcedDispatchForVideoResultSpecifiers:(NSUInteger)arg1;
- (void)delayForcedDispatchForPhotoResultSpecifiers:(NSUInteger)arg1;
- (void)updateVideoProperties:(id)arg1 forResultSpecifiers:(NSUInteger)arg2;
- (void)updatePhotoProperties:(id)arg1 assetAdjustments:(id)arg2 forResultSpecifiers:(NSUInteger)arg3;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2 allExpectedResultSpecifiers:(id)arg3 isExpectingPairedVideo:(BOOL)arg4 allowMultipleCaptures:(BOOL)arg5 shouldReturnFilteredPhotosAsSingleAsset:(BOOL)arg6;

@end
