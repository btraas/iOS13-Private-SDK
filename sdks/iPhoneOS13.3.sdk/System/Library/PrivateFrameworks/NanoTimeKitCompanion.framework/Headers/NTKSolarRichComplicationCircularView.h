//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKSolarRichComplicationFullColorImageView;

@interface NTKSolarRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    NTKSolarRichComplicationFullColorImageView *_solarImageView;
}

// - (void).cxx_destruct;
- (void)_updateWithLocation:(id)arg1 useIdealizedTime:(BOOL)arg2 forceUpdate:(BOOL)arg3 animated:(BOOL)arg4;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (id)init;

@end
