//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, NTKComplication, UIImage, UIView;
@protocol NTKComplicationDisplay, NTKEditOptionContainerView, NTKKeylineView;

@protocol NTKFaceViewComplicationFactory 
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(NSString *)arg1;
- (UIView<NTKKeylineView> *)keylineViewForComplicationSlot:(NSString *)arg1;
- (void)configureComplicationView:(UIView *)arg1 forSlot:(NSString *)arg2;
- (UIView<NTKComplicationDisplay> *)newLegacyViewForComplication:(NTKComplication *)arg1 family:(long long)arg2 slot:(NSString *)arg3;
- (void)loadLayoutRules;

@optional
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(NSString *)arg2;
- (UIView<NTKEditOptionContainerView> *)customEditOptionContainerViewForSlot:(NSString *)arg1;
- (_Bool)slotSupportsCurvedText:(NSString *)arg1;
- (void)curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(NSString *)arg6;
- (UIImage *)pickerMaskForSlot:(NSString *)arg1;
- (long long)complicationPickerStyleForSlot:(NSString *)arg1;
@end
