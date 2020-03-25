//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFWindow.h>

#import <SpringBoard/SBMainDisplayInterfaceOrientationSource-Protocol.h>
#import <SpringBoard/SBRecycledViewsContainerProviding-Protocol.h>
#import <SpringBoard/SBWindowLayoutStrategyObserving-Protocol.h>

@class NSMutableSet, NSString, SBRecycledViewsContainer, SBUICoronaAnimationController, UIView;
@protocol SBWindowLayoutStrategy;

@interface SBWindow : SBFWindow <SBMainDisplayInterfaceOrientationSource, SBRecycledViewsContainerProviding, SBWindowLayoutStrategyObserving>
{
    SBUICoronaAnimationController *_coronaAnimationController;
    SBRecycledViewsContainer *_recycledViewsContainerView;
    BOOL _requestedHiddenValue;
    NSMutableSet *_additionalHiddenReasons;
    id <SBWindowLayoutStrategy> _layoutStrategy;
}

+ (BOOL)sb_autorotates;
+ (BOOL)sb_disableStatusBarHeightChanges;
+ (id)defaultLayoutStrategy;
@property(readonly, nonatomic) id <SBWindowLayoutStrategy> layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *orientationSourceDescription;
@property(readonly, nonatomic) double orientationSourceLevel;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic) long long activeInterfaceOrientation;
@property(readonly, copy) NSString *description;
- (void)_didDisableSecureRendering:(id)arg1;
- (void)_willEnableSecureRendering:(id)arg1;
- (void)_updateHidingForSecureRendering:(BOOL)arg1;
- (void)_removeHiddenReason:(id)arg1;
- (void)_addHiddenReason:(id)arg1;
- (void)_updateRealIsHidden;
@property(readonly, nonatomic) UIView *recycledViewsContainer;
- (void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (id)sb_coronaAnimationController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)makeKeyAndVisible;
- (void)setHidden:(BOOL)arg1;
- (BOOL)_shouldResizeWithScene;
- (void)layoutStrategyFrameOnScreenDidChange:(id)arg1;
- (void)dealloc;
- (id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2 rootViewController:(id)arg3;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)arg1;

@end
