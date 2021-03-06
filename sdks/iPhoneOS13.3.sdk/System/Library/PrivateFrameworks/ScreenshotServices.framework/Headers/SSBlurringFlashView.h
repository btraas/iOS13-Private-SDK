//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenshotServices/SSFlashView.h>

@class SSBlurView, UIViewPropertyAnimator, _SSSFlashSuperColorView;

@interface SSBlurringFlashView : SSFlashView
{
    id /* CDUnknownBlockType */ _completionBlock;
    SSBlurView *_blurView;
    _SSSFlashSuperColorView *_superColorView;
    UIViewPropertyAnimator *_superColorViewOpacityAnimator;
    UIViewPropertyAnimator *_blurViewRadiusAnimator;
    BOOL _isCompletingFlashWithNewTimingParameters;
    BOOL _superColorViewBackgroundColorAnimatorCompleted;
    BOOL _blurViewRadiusAnimatorCompleted;
}

+ (double)expectedAnimationDurationForStyle:(NSUInteger)arg1;
// - (void).cxx_destruct;
- (double)_cornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_runCompletionBlockIfAppropriate;
- (void)_superColorViewBackgroundColorAnimatorCompleted;
- (void)_blurViewRadiusAnimatorCompleted;
- (void)flashWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

