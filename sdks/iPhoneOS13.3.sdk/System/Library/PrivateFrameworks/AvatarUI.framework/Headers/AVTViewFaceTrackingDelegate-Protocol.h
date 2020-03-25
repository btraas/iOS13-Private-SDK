//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVTView, NSError;

@protocol AVTViewFaceTrackingDelegate <NSObject>
- (void)avatarViewFaceTrackingSessionInterruptionDidEnd:(AVTView *)arg1;
- (void)avatarViewFaceTrackingSessionInterruptionDidBegin:(AVTView *)arg1;
- (void)avatarView:(AVTView *)arg1 faceTrackingSessionFailedWithError:(NSError *)arg2;
- (void)avatarView:(AVTView *)arg1 didUpdateWithSensorOcclusionStatus:(BOOL)arg2;
- (void)avatarView:(AVTView *)arg1 didUpdateWithLowLightStatus:(BOOL)arg2;
- (void)avatarView:(AVTView *)arg1 didUpdateWithFaceTrackingStatus:(BOOL)arg2;
@end
