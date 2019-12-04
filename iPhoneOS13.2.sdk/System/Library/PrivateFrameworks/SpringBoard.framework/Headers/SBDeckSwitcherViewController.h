//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBFluidSwitcherViewController.h>

#import <SpringBoard/SBSwitcherAppSuggestionViewControllerDelegate-Protocol.h>

@class NSString, SBSwitcherAppSuggestionViewController;

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate>
{
    SBSwitcherAppSuggestionViewController *_appSuggestionController;
}

@property(retain, nonatomic) SBSwitcherAppSuggestionViewController *appSuggestionController; // @synthesize appSuggestionController=_appSuggestionController;
- (long long)orientationForSuggestionViewController:(id)arg1;
- (void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(id /* block */)arg2;
- (void)setBestAppSuggestion:(id)arg1;
- (id)bestAppSuggestion;
- (id)handleGestureDidBegin:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)performTransitionWithContext:(id)arg1 animated:(_Bool)arg2 alongsideAnimationHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)viewWillLayoutSubviews;
- (id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
