//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FBSScene, FBSSceneTransitionContext, NSSet, UIScene, UISceneSession, _UISceneConnectionOptionsContext;

@protocol _UISceneBSActionHandler <NSObject>
- (NSSet *)_respondToActions:(NSSet *)arg1 forFBSScene:(FBSScene *)arg2 inUIScene:(UIScene *)arg3 fromTransitionContext:(FBSSceneTransitionContext *)arg4;

@optional
- (_UISceneConnectionOptionsContext *)_launchOptionsFromActions:(NSSet *)arg1 forFBSScene:(FBSScene *)arg2 uiSceneSession:(UISceneSession *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
@end
