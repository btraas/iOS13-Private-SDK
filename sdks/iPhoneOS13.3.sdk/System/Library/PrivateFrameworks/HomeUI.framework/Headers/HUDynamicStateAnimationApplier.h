//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUDisplayLinkApplier.h>

@class HUAnimationSettings;

@interface HUDynamicStateAnimationApplier : HUDisplayLinkApplier
{
    BOOL _hasUpdatedProgress;
    HUAnimationSettings *_animationSettings;
    double _initialProgress;
    double _targetProgress;
    double _preInterpolatedProgress;
    double _lastTargetChangeTime;
}

@property(nonatomic) BOOL hasUpdatedProgress; // @synthesize hasUpdatedProgress=_hasUpdatedProgress;
@property(nonatomic) double lastTargetChangeTime; // @synthesize lastTargetChangeTime=_lastTargetChangeTime;
@property(nonatomic) double preInterpolatedProgress; // @synthesize preInterpolatedProgress=_preInterpolatedProgress;
@property(nonatomic) double targetProgress; // @synthesize targetProgress=_targetProgress;
@property(nonatomic) double initialProgress; // @synthesize initialProgress=_initialProgress;
// - (void).cxx_destruct;
- (double)effectiveInputProgressForBlock:(id /* CDUnknownBlockType */)arg1;
- (void)updateProgress:(double)arg1;
- (BOOL)start;
@property(readonly, copy, nonatomic) HUAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (id)initWithAnimationSettings:(id)arg1 initialProgress:(double)arg2 progressInputBlock:(id /* CDUnknownBlockType */)arg3;

@end

