//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/SBGridLayoutSwitcherModifierDelegate-Protocol.h>
#import <SpringBoard/SBGridSwitcherScrollProviding-Protocol.h>

@class NSString, SBGridLayoutSwitcherModifier;
@protocol SBFluidSwitcherScrollProviding, SBFluidSwitcherScrollProvidingDelegate;

@interface SBAppExposeGridSwitcherModifier : SBSwitcherModifier <SBGridLayoutSwitcherModifierDelegate, SBGridSwitcherScrollProviding>
{
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    NSUInteger _initialNumberOfRows;
    double _initialCardScale;
    BOOL _hasForegroundMainApp;
    BOOL _isTethered;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
    NSString *_appExposeBundleID;
}

@property(readonly, copy, nonatomic) NSString *appExposeBundleID; // @synthesize appExposeBundleID=_appExposeBundleID;
@property(readonly, nonatomic) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *multitaskingModifier; // @synthesize multitaskingModifier=_multitaskingModifier;
@property(readonly, nonatomic) BOOL isTethered; // @synthesize isTethered=_isTethered;
@property(nonatomic) __weak id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
// - (void).cxx_destruct;
- (BOOL)_isGridified;
- (double)_gridLayoutScale;
- (NSUInteger)_gridLayoutNumberOfRows;
- (double)trailingPadding;
- (double)leadingPadding;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(NSUInteger)arg1;
- (CGSize)contentSize;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
@property(readonly, nonatomic) double effectiveHorizontalSpacing;
@property(readonly, nonatomic) NSUInteger numberOfRows;
- (NSUInteger)insertionStyleForInsertingAppLayout:(id)arg1;
- (_NSRange)fullSizeSnapshotsRange;
- (BOOL)wantsDockBehaviorAssertion;
- (long long)backdropBlurType;
- (double)dimmingAlpha;
- (double)backdropBlurProgress;
- (BOOL)isScrollEnabled;
- (BOOL)isTetheredScrollingEnabled;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
@property(readonly, nonatomic) double cardScale;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithTetheredMode:(BOOL)arg1 multitaskingModifier:(id)arg2 appExposeBundleID:(id)arg3 initialNumberOfRows:(NSUInteger)arg4 initialCardScale:(double)arg5;
- (id)initWithTetheredMode:(BOOL)arg1 multitaskingModifier:(id)arg2 appExposeBundleID:(id)arg3;

@end

