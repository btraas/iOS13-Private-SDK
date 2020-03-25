//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface OITSUBezierPath : NSObject <NSCopying, NSCoding>
{
    long long sfr_elementCount;
    long long sfr_elementMax;
    struct PATHSEGMENT sfr_head;
    double sfr_elementLength;
    double sfr_totalLength;
    long long sfr_lastSubpathIndex;
    void sfr_extraSegments;
    double sfr_lineWidth;
    CGRect sfr_controlPointBounds;
    double sfr_miterLimit;
    double sfr_flatness;
    double sfr_dashedLinePattern;
    NSUInteger sfr_dashedLineCount;
    double sfr_dashedLinePhase;
    void sfr_path;
    long long sfr_extraSegmentCount;
    long long sfr_extraSegmentMax;
    struct {
        unsigned int sfr_flags:8;
        unsigned int sfr_pathState:2;
        unsigned int sfr_calculatedLengths:1;
        unsigned int sfr_unused:21;
    } sfr_bpFlags;
}

+ (double)defaultLineWidth;
+ (void)setDefaultLineWidth:(double)arg1;
+ (NSUInteger)defaultLineJoinStyle;
+ (void)setDefaultLineJoinStyle:(NSUInteger)arg1;
+ (NSUInteger)defaultLineCapStyle;
+ (void)setDefaultLineCapStyle:(NSUInteger)arg1;
+ (NSUInteger)defaultWindingRule;
+ (void)setDefaultWindingRule:(NSUInteger)arg1;
+ (double)defaultFlatness;
+ (void)setDefaultFlatness:(double)arg1;
+ (double)defaultMiterLimit;
+ (void)setDefaultMiterLimit:(double)arg1;
+ (void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2;
+ (void)clipRect:(CGRect)arg1;
+ (void)strokeRect:(CGRect)arg1;
+ (void)fillRect:(CGRect)arg1;
+ (id)bezierPathWithCGPath:(CGPath )arg1;
+ (id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2;
+ (id)bezierPathWithOvalInRect:(CGRect)arg1;
+ (id)bezierPathWithRect:(CGRect)arg1;
+ (id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2;
+ (id)bezierPath;
+ (void)initialize;
+ (double)lineWidth;
+ (void)setLineWidth:(double)arg1;
+ (NSUInteger)lineJoinStyle;
+ (void)setLineJoinStyle:(NSUInteger)arg1;
+ (NSUInteger)lineCapStyle;
+ (void)setLineCapStyle:(NSUInteger)arg1;
+ (NSUInteger)windingRule;
+ (void)setWindingRule:(NSUInteger)arg1;
+ (double)flatness;
+ (void)setFlatness:(double)arg1;
+ (double)miterLimit;
+ (void)setMiterLimit:(double)arg1;
- (id)initWithCString:(const char )arg1;
- (const char )cString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)containsPoint:(CGPoint)arg1;
- (void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(double)arg3;
- (void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5;
- (void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)appendBezierPathWithOvalInRect:(CGRect)arg1;
- (void)appendBezierPathWithPoints:(CGPoint )arg1 count:(long long)arg2;
- (void)appendBezierPathWithRect:(CGRect)arg1;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2;
- (void)_appendToPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2;
- (void)setAssociatedPoints:(CGPoint )arg1 atIndex:(long long)arg2;
- (long long)elementAtIndex:(long long)arg1 allPoints:(CGPoint )arg2;
- (long long)elementAtIndex:(long long)arg1 associatedPoints:(CGPoint )arg2;
- (long long)elementAtIndex:(long long)arg1;
- (long long)elementCount;
- (double)lengthToElement:(long long)arg1;
- (double)lengthOfElement:(long long)arg1;
- (double)length;
- (void)calculateLengths;
- (double)calculateLengthOfElement:(long long)arg1;
- (BOOL)isClockwise;
- (BOOL)isFlat;
- (CGRect)bounds;
- (CGRect)controlPointBounds;
- (CGPoint)currentPoint;
- (BOOL)isEmpty;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (BOOL)isDiamond;
- (BOOL)isTriangular;
- (CGPath )CGPath;
- (void)transformUsingAffineTransform:(CGAffineTransform)arg1;
- (id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(double)arg1;
- (id)bezierPathByRemovingRedundantElements;
- (id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(double)arg1;
- (id)bezierPathByReversingPath;
- (id)_copyFlattenedPath;
- (id)bezierPathByFlatteningPathWithFlatness:(double)arg1;
- (id)bezierPathByFlatteningPath;
- (void)flattenIntoPath:(id)arg1 flatness:(double)arg2;
- (void)flattenIntoPath:(id)arg1;
- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5;
- (void)addClip;
- (void)fill;
- (void)stroke;
- (void)_doPath;
- (CGPoint)_checkPointForValidity:(CGPoint)arg1;
- (BOOL)_isValid:(double)arg1;
- (void)getLineDash:(double )arg1 count:(long long )arg2 phase:(double )arg3;
- (void)setLineDash:(const double )arg1 count:(long long)arg2 phase:(double)arg3;
- (void)setFlatness:(double)arg1;
- (double)flatness;
- (void)setMiterLimit:(double)arg1;
- (double)miterLimit;
- (void)setWindingRule:(NSUInteger)arg1;
- (NSUInteger)windingRule;
- (void)setLineJoinStyle:(NSUInteger)arg1;
- (NSUInteger)lineJoinStyle;
- (void)setLineCapStyle:(NSUInteger)arg1;
- (NSUInteger)lineCapStyle;
- (void)setLineWidth:(double)arg1;
- (double)lineWidth;
- (void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3;
- (void)relativeLineToPoint:(CGPoint)arg1;
- (void)relativeMoveToPoint:(CGPoint)arg1;
- (void)removeAllPoints;
- (void)closePath;
- (void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3;
- (void)lineToPoint:(CGPoint)arg1;
- (void)moveToPoint:(CGPoint)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyPathAttributesTo:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3;
- (void)_deviceLineToPoint:(CGPoint)arg1;
- (void)_deviceMoveToPoint:(CGPoint)arg1;
- (void)_addPathSegment:(long long)arg1 point:(CGPoint)arg2;
- (id)description;
- (void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5;
- (void)attachBezierPath:(id)arg1;

@end
