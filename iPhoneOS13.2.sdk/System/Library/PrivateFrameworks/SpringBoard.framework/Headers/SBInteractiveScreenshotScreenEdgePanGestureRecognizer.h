//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>

@class SBInteractiveScreenshotSettings;

@interface SBInteractiveScreenshotScreenEdgePanGestureRecognizer : SBScreenEdgePanGestureRecognizer
{
    SBInteractiveScreenshotSettings *_settings;
    long long _touchInterfaceOrientationWhenGestureBegan;
}

+ (_Bool)_shouldSupportStylusTouches;
+ (id)interactiveScreenshotScreenEdgePanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)_isOrientedLocation:(struct CGPoint)arg1 inCorner:(unsigned long long)arg2 forOrientedBounds:(struct CGRect)arg3 withEdgeOffsets:(struct UIOffset)arg4;
- (_Bool)shouldReceiveTouch:(id)arg1;
- (long long)_touchInterfaceOrientation;
- (void)setState:(long long)arg1;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;

@end
