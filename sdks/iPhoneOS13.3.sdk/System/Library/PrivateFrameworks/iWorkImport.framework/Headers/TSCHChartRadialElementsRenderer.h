//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface TSCHChartRadialElementsRenderer : TSCHRenderer
{
    CGPoint mHitPoint;
    NSUInteger mHitSeries;
    float mHitStartAngle;
    float mHitRadius;
    float mHitExplosion;
    BOOL mDidMoveDuringTouchIfNotThenRotateChartForDemo;
    NSIndexSet *mPartialRenderingSeriesIndexSet;
    BOOL mPartialRenderingInclusionFlag;
}

// - (void).cxx_destruct;
- (double)p_calculateIntersectionAreaForRectangle:(CGRect)arg1 circleCenter:(CGPoint)arg2 circleRadius:(double)arg3;
- (CGRect)chartLayoutSpaceRenderingRect;
- (void)drawAll;
- (void)drawAllButSeriesIndicies:(id)arg1;
- (void)drawOnlySeriesIndicies:(id)arg1;
- (BOOL)p_shouldRenderSeriesIndex:(NSUInteger)arg1;
- (void)renderLabelWithPieLabel:(id)arg1 combinedLabelTransform:(CGAffineTransform)arg2 context:(CGContext )arg3 paragraphStyle:(id)arg4;
- (void)renderLabelsWithWedgeLayoutInfo:(id)arg1 paragraphStyle:(id)arg2 context:(CGContext )arg3;
- (void)p_renderIntoContext:(CGContext )arg1 visible:(CGRect)arg2;
- (CGLayer )p_newPreRenderedImageWithContext:(CGContext )arg1 wedgePath:(CGPath )arg2 fullWedgePath:(CGPath )arg3 fill:(id)arg4 stroke:(id)arg5 shadow:(id)arg6 outUserSpaceLayerBounds:(CGRect )arg7;
- (void)p_drawLinePathsIntoContext:(CGContext )arg1 linePath:(CGPath )arg2 tailPath:(CGPath )arg3 headPath:(CGPath )arg4 fillTail:(BOOL)arg5 fillHead:(BOOL)arg6 stroke:(id)arg7;
- (void)p_drawWedgePathIntoContext:(CGContext )arg1 path:(CGPath )arg2 fill:(id)arg3 stroke:(id)arg4 opacity:(double)arg5 withinBounds:(CGRect)arg6;
- (void)p_drawOnlyShadow:(id)arg1 forImage:(CGLayer )arg2 intoRect:(CGRect)arg3 intoContext:(CGContext )arg4 atViewScale:(double)arg5 usingBlendMode:(int)arg6 opacity:(double)arg7;
- (void)p_drawOnlyShapeImage:(CGLayer )arg1 intoRect:(CGRect)arg2 intoContext:(CGContext )arg3 usingBlendMode:(int)arg4 opacity:(double)arg5;
- (int)chunkPlane;
- (void)dealloc;

@end

