//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKDisplayType, HKGraphSeries, UIColor;

@interface HKGraphSeriesConfiguration : NSObject
{
    HKGraphSeries *_graphSeries;
    HKDisplayType *_displayType;
    UIColor *_tintColor;
}

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) HKGraphSeries *graphSeries; // @synthesize graphSeries=_graphSeries;
// - (void).cxx_destruct;

@end

