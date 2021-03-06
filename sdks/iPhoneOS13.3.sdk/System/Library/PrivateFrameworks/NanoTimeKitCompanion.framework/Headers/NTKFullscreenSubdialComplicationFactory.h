//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory-Protocol.h>

@class NTKFaceView;

@interface NTKFullscreenSubdialComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory>
{
    NTKFaceView *_faceView;
    CGPoint _circularComplicationDistanceFromCenter;
}

@property(nonatomic) __weak NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) CGPoint circularComplicationDistanceFromCenter; // @synthesize circularComplicationDistanceFromCenter=_circularComplicationDistanceFromCenter;
// - (void).cxx_destruct;
- (BOOL)_convertCircularSlot:(id)arg1 toPosition:(long long )arg2;
- (CGPoint)_circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(CGRect)arg2;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)loadLayoutRules;
- (long long)legacyLayoutOverrideforComplicationType:(NSUInteger)arg1 slot:(id)arg2;
- (NSUInteger)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (id)pickerMaskForSlot:(id)arg1;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (NSUInteger)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (id)initForDevice:(id)arg1;

@end

