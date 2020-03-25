//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDFill.h>

@class NSNumber, TSCH3DFillSetIdentifier, TSCH3DLightingModel;

__attribute__((visibility("hidden")))
@interface TSCH3DFill : TSDFill
{
    TSCH3DLightingModel *_lightingModel;
    TSCH3DFillSetIdentifier *_identifier;
    TSDFill *_fallbackFill;
    NSNumber *_percentage;
    TSDFill *_cachedImageFill;
    CGSize _cachedImageFillSize;
    TSDFill *_swatchFill;
}

+ (id)fillWithIdentifier:(id)arg1;
+ (id)fill;
+ (id)fillWithLightingModel:(id)arg1 identifier:(id)arg2;
+ (id)instanceWithArchive:(const struct FillArchive )arg1 unarchiver:(id)arg2;
+ (id)lightingModelWithSageFillData:(id)arg1;
+ (id)fillWithSageFillData:(id)arg1;
@property(retain, nonatomic) NSNumber *percentage; // @synthesize percentage=_percentage;
@property(retain, nonatomic) TSCH3DFillSetIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)didInitFromSOS;
- (long long)fillType;
- (id)referenceColor;
- (void)paintPath:(CGPath )arg1 inContext:(CGContext )arg2 offset:(CGPoint)arg3;
- (void)paintPath:(CGPath )arg1 inContext:(CGContext )arg2;
- (void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContext )arg2;
- (void)paintPath:(CGPath )arg1 naturalBounds:(CGRect)arg2 inContext:(CGContext )arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(CGRect)arg1 inContext:(CGContext )arg2;
- (void)setFallbackFill:(id)arg1;
- (id)p_iconFill;
- (id)p_imageFillForRect:(CGRect)arg1 context:(CGContext )arg2;
- (id)p_imageFillForSize:(CGSize)arg1 context:(id)arg2;
- (id)convertToSimpleTSDFillWithSize:(NSUInteger)arg1 context:(id)arg2;
- (id)p_convertToTSDFillWithSize:(NSUInteger)arg1 technique:(NSUInteger)arg2;
- (id)p_convertToTSDFillWithSize:(NSUInteger)arg1 technique:(NSUInteger)arg2 context:(id)arg3;
- (id)renderingLightingModelWithLightings:(id)arg1;
- (void)nonatomicallySetLightingModel:(id)arg1;
@property(readonly) TSCH3DLightingModel *lightingModel;
- (BOOL)identifierReferencesUnavailableLocalBundle;
- (id)p_lazyLightingModel;
- (void)nonatomicallyClearLightingModel;
@property(readonly, nonatomic) float percentageValue;
- (id)lightenByPercent:(float)arg1;
- (BOOL)isOpaque;
- (BOOL)hasCompleteData;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithLightingModel:(id)arg1 identifier:(id)arg2;
- (id)init;
@property(readonly) TSDFill *swatchFill; // @synthesize swatchFill=_swatchFill;
- (id)convertForChartSeriesType:(id)arg1 context:(id)arg2;
- (void)saveToArchive:(struct FillArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive )arg1 unarchiver:(id)arg2;
- (void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1;
- (id)representativeDiffuseColor;
- (id)sageFillData;
- (BOOL)tsch_hasAllResources;

@end
