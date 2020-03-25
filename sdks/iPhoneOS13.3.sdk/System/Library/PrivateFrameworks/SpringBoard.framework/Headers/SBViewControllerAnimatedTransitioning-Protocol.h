//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSUIAnimationFactory;
@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerAnimatedTransitioning <UIViewControllerAnimatedTransitioning>
- (void)animateTransition:(id <SBViewControllerContextTransitioning>)arg1;
- (double)transitionDuration:(id <SBViewControllerContextTransitioning>)arg1;

@optional
- (NSUInteger)transitionAnimationOptions:(id <SBViewControllerContextTransitioning>)arg1;
- (BSUIAnimationFactory *)transitionAnimationFactory:(id <SBViewControllerContextTransitioning>)arg1;
@end
