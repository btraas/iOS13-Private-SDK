//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _DUIImageComponent, _DUIPreview;

@interface _DUIVisibleDroppedItem : NSObject <NSSecureCoding>
{
    BOOL _constrainSize;
    BOOL _flipped;
    BOOL _precisionMode;
    NSUInteger _itemIndex;
    _DUIImageComponent *_imageComponent;
    _DUIPreview *_preview;
    double _rotation;
    CGPoint _center;
    CGVector _velocity;
    CGVector _targetVelocity;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) BOOL precisionMode; // @synthesize precisionMode=_precisionMode;
@property(nonatomic) BOOL flipped; // @synthesize flipped=_flipped;
@property(nonatomic) BOOL constrainSize; // @synthesize constrainSize=_constrainSize;
@property(nonatomic) CGVector targetVelocity; // @synthesize targetVelocity=_targetVelocity;
@property(nonatomic) CGVector velocity; // @synthesize velocity=_velocity;
@property(nonatomic) CGPoint center; // @synthesize center=_center;
@property(copy, nonatomic) _DUIPreview *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) _DUIImageComponent *imageComponent; // @synthesize imageComponent=_imageComponent;
@property(nonatomic) NSUInteger itemIndex; // @synthesize itemIndex=_itemIndex;
// - (void).cxx_destruct;
- (id)createSnapshotView;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

