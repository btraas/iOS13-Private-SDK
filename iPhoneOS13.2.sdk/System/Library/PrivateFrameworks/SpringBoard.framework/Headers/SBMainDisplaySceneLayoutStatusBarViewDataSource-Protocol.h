//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString, UIView;
@protocol SBApplicationSceneStatusBarDescribing;

@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource 
- (_Bool)allowsConfiguringIndividualStatusBarParts;
- (long long)statusBarOrientation;
- (id <SBApplicationSceneStatusBarDescribing>)statusBarDescriberForStatusBarPart:(NSString *)arg1;
- (NSArray *)statusBarDescribers;

@optional
- (struct CGRect)statusBarAvoidanceFrame;
- (struct CGRect)frameForSceneIdentifier:(NSString *)arg1 inView:(UIView *)arg2;
- (id <SBApplicationSceneStatusBarDescribing>)statusBarDescriberAtPoint:(struct CGPoint)arg1 inView:(UIView *)arg2 pointInSceneLayoutSpace:(struct CGPoint *)arg3;
- (NSArray *)currentlyValidStatusBarPartIdentifiers;
- (NSArray *)statusBarPartsForSceneWithIdentifier:(NSString *)arg1;
@end
