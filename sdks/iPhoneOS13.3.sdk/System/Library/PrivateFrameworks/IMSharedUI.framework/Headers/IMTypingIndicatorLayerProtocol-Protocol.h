//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UITraitCollection;

@protocol IMTypingIndicatorLayerProtocol <NSObject>
@property(nonatomic) BOOL hasDarkBackground;
- (void)startGrowAnimation;
- (void)stopAnimation;
- (void)stopPulseAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(void (^)(void))arg1;
- (void)startGrowAnimationWithCompletionBlock:(void (^)(void))arg1;

@optional
- (void)setTraitCollection:(UITraitCollection *)arg1;
@end
