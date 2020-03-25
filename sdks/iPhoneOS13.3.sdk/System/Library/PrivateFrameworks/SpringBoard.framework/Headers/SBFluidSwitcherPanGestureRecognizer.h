//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBPanSystemGestureRecognizer.h>

#import <SpringBoard/SBGestureRecognizerPanGestureProviding-Protocol.h>
#import <SpringBoard/SBGestureRecognizerTouchHistoryProviding-Protocol.h>

@class SBFluidSwitcherViewController, SBTouchHistory;

@interface SBFluidSwitcherPanGestureRecognizer : SBPanSystemGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>
{
    BOOL _installedAsSystemGesture;
    SBFluidSwitcherViewController *_switcherViewController;
    SBTouchHistory *_touchHistory;
}

@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
@property(nonatomic) BOOL installedAsSystemGesture; // @synthesize installedAsSystemGesture=_installedAsSystemGesture;
@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
// - (void).cxx_destruct;
- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
