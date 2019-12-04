//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NSDate, NTKColoringLabel, NTKRichComplicationDialView, UIImageView;

@interface NTKTimerRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    NTKRichComplicationDialView *_backgroundDial;
    NTKRichComplicationDialView *_foregroundDial;
    UIImageView *_timerImageView;
    NTKColoringLabel *_timerLabel;
    NSDate *_timerDate;
    double _timerDuration;
    struct NSNumber *_updateToken;
    struct {
        long long numberTicks;
        struct CGSize tickSize;
        double dialDiameter;
        double timerLabelBottom;
        double timerLabelFontSize;
        double timerLabelMaxWidth;
    } _layoutConstants;
}

- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_pause;
- (void)_resume;
- (void)_updateDialProgress;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end
