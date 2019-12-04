//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>
#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@class NSString, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDShadow : NSObject <TSSPropertyValueArchiving, TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>
{
    double mAngle;
    double mOffset;
    double mRadius;
    double mOpacity;
    TSUColor *mColor;
    _Bool mEnabled;
}

+ (id)mixableObjectClasses;
+ (_Bool)canMixWithNilObjects;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (_Bool)automaticallyNotifiesObserversOfTSUColor;
+ (id)keyPathsForValuesAffectingTSUColor;
+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(_Bool)arg7;
+ (id)shadowWithNSShadow:(id)arg1;
+ (id)contactShadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 height:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(_Bool)arg7;
+ (id)shadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(id)arg5 enabled:(_Bool)arg6;
+ (id)defaultDisabledShadow;
+ (id)defaultShadow;
+ (id)p_defaultShadowEnabled:(_Bool)arg1;
+     // Error parsing type: @32@0:8r^{ShadowArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{DropShadowArchive}^{ContactShadowArchive}^{CurvedShadowArchive}iBffif}16@24, name: instanceWithArchive:unarchiver:
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=mEnabled;
@property(readonly, copy, nonatomic) TSUColor *color; // @synthesize color=mColor;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;
@property(readonly, nonatomic) double radius; // @synthesize radius=mRadius;
@property(readonly, nonatomic) double offset; // @synthesize offset=mOffset;
@property(readonly, nonatomic) double angle; // @synthesize angle=mAngle;
- (id)NSShadow;
- (id)shadowByTransformingByTransform:(struct CGAffineTransform)arg1;
- (id)mixedBaseObjectWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (_Bool)differenceRequiresRebuilding:(id)arg1;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalAngle:(double)arg2;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2 flipped:(_Bool)arg3 extraOffset:(struct CGSize)arg4;
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2 flipped:(_Bool)arg3;
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2;
@property(readonly, nonatomic) struct CGPoint offsetDelta;
- (id)typeDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)shadowType;
- (_Bool)showForEditingText;
- (_Bool)isCurvedShadow;
- (_Bool)isDropShadow;
- (_Bool)isContactShadow;
- (unsigned long long)hash;
- (void)dealloc;
- (id)newShadowClampedForSwatches;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)clampOpacity:(double)arg1;
- (double)clampRadius:(double)arg1;
- (double)clampOffset:(double)arg1;
-     // Error parsing type: v32@0:8^{ShadowArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{DropShadowArchive}^{ContactShadowArchive}^{CurvedShadowArchive}iBffif}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{ShadowArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{DropShadowArchive}^{ContactShadowArchive}^{CurvedShadowArchive}iBffif}16@24, name: initWithArchive:unarchiver:
- (struct CGImage *)i_newEmptyImage;
- (id)i_initWithOpacity:(double)arg1 color:(id)arg2 enabled:(_Bool)arg3;

@end
