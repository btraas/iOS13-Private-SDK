//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentAnimationHandler.h>


@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>
{
    double _initialAlpha;
    double _initialScale;
}

@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) double initialAlpha; // @synthesize initialAlpha=_initialAlpha;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)finishAnimation;
- (void)updateAnimationWithFactor:(double)arg1;
- (void)startAnimation;
- (void)prepareAnimation;
- (id)initWithComponent:(id)arg1 withAnimation:(id)arg2;

@end

