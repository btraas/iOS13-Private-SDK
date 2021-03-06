//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSNumber;

@interface HKHistogramChartPoint : NSObject <HKChartPoint>
{
    NSNumber *_xValue;
    NSNumber *_yValue;
}

@property(readonly, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) NSNumber *xValue; // @synthesize xValue=_xValue;
// - (void).cxx_destruct;
- (id)userInfo;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)maxYValue;
- (id)minYValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;

@end

