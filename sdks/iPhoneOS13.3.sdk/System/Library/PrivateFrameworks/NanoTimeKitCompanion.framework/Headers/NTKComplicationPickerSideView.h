//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOptionPickerSideView.h>

#import <NanoTimeKitCompanion/NTKCurvedPickerSideView-Protocol.h>

@class NTKComplicationLayoutRule;

@interface NTKComplicationPickerSideView : NTKEditOptionPickerSideView <NTKCurvedPickerSideView>
{
    NTKComplicationLayoutRule *_layoutRule;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NTKComplicationLayoutRule *layoutRule; // @synthesize layoutRule=_layoutRule;
// - (void).cxx_destruct;
- (void)setCurvedAngle:(double)arg1;
- (void)layoutSubviews;

@end
