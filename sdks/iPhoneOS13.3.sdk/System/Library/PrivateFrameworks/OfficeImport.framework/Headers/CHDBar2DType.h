//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CHDChartTypeWithGrouping.h>

__attribute__((visibility("hidden")))
@interface CHDBar2DType : CHDChartTypeWithGrouping
{
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}

- (int)defaultLabelPosition;
- (BOOL)isHorizontal;
- (void)setColumn:(BOOL)arg1;
- (BOOL)isColumn;
- (void)setOverlap:(int)arg1;
- (int)overlap;
- (void)setGapWidth:(int)arg1;
- (int)gapWidth;
- (id)initWithChart:(id)arg1;

@end

