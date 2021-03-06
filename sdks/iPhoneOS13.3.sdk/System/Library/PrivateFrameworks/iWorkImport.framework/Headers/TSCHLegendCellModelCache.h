//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSCHChartSeries, TSDStroke;

__attribute__((visibility("hidden")))
@interface TSCHLegendCellModelCache : NSObject
{
    int mLegendCellType;
    int mBadgeType;
    NSUInteger mSeriesIndex;
    TSCHChartSeries *mSeries;
    NSString *mLabelString;
    TSDStroke *mStroke;
    TSDStroke *mSymbolStroke;
    int mSymbolType;
    int mLineType;
    CGSize mCellSize;
    double mEffectiveStrokeWidth;
    double mEffectiveSymbolStrokeWidth;
    CGRect mBadgeFrame;
    CGRect mLabelFrame;
    CGRect mBadgeFillFrame;
}

@property(readonly) double effectiveSymbolStrokeWidth; // @synthesize effectiveSymbolStrokeWidth=mEffectiveSymbolStrokeWidth;
@property(readonly) double effectiveStrokeWidth; // @synthesize effectiveStrokeWidth=mEffectiveStrokeWidth;
@property(readonly) int lineType; // @synthesize lineType=mLineType;
@property(readonly) int symbolType; // @synthesize symbolType=mSymbolType;
@property(readonly) TSDStroke *symbolStroke; // @synthesize symbolStroke=mSymbolStroke;
@property(readonly) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property(readonly) CGRect labelFrame; // @synthesize labelFrame=mLabelFrame;
@property(readonly) CGRect badgeFillFrame; // @synthesize badgeFillFrame=mBadgeFillFrame;
@property(readonly) CGRect badgeFrame; // @synthesize badgeFrame=mBadgeFrame;
@property(readonly) CGSize size; // @synthesize size=mCellSize;
@property(readonly) NSString *labelString; // @synthesize labelString=mLabelString;
@property(readonly) TSCHChartSeries *series; // @synthesize series=mSeries;
@property(readonly) NSUInteger seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
@property(readonly) int badgeType; // @synthesize badgeType=mBadgeType;
@property(readonly) int cellType; // @synthesize cellType=mLegendCellType;
// - (void).cxx_destruct;
@property(readonly) id symbolFill;
@property(readonly) id fill;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 cellType:(int)arg2 seriesIndex:(NSUInteger)arg3 withMetrics:(id)arg4 overrideLabel:(id)arg5;

@end

