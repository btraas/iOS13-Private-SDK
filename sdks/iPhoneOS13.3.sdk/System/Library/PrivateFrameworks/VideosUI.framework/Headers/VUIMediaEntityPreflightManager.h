//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUIMediaEntityPreflightManager : NSObject
{
}

+ (id)defaultManager;
- (BOOL)_isOnWiFi;
- (BOOL)_isOnCellular;
- (BOOL)_isMediaItemPlayableOnCellular:(id)arg1;
- (BOOL)_isRemainingTimeLeftWithinRentalPlaybackWindowWithMediaItem:(id)arg1;
- (BOOL)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1;
- (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_verifyMediaItemIsPlayableOnCellular:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_determineCellularPlaybackQualityForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_presentCellularPlaybackIsDisabledAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(BOOL)arg2 presentingViewController:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_preflightDownloadWithMediaEntityType:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(BOOL)arg2 presentingViewController:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;

@end

