//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

#import <NanoTimeKitCompanion/NTKContainerViewLayoutDelegate-Protocol.h>

@class NTKContainerView;

@interface NTKUtilityCircularComplicationView : NTKUtilityComplicationView <NTKContainerViewLayoutDelegate>
{
    NTKContainerView *_contentView;
}

@property(readonly, nonatomic) NTKContainerView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (long long)layoutOverride;
- (void)_updateEditingRotationAngle;
- (void)setEditingRotationAngle:(double)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)_layoutContentView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutContainerView:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

