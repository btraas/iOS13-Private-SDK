//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCNMaterial, SCNNode;

@interface AVTMorpherDrivenMaterialDescriptor : NSObject
{
    _Bool _isTrigger;
    float _lastWeight;
    float _threshold;
    float _accel;
    float _decel;
    SCNNode *_readMorpherNode;
    long long _morphTargetIndex;
    SCNMaterial *_material;
    NSString *_propertyName;
}

@property(nonatomic) float decel; // @synthesize decel=_decel;
@property(nonatomic) float accel; // @synthesize accel=_accel;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(nonatomic) _Bool isTrigger; // @synthesize isTrigger=_isTrigger;
@property(nonatomic) float lastWeight; // @synthesize lastWeight=_lastWeight;
@property(copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(retain, nonatomic) SCNMaterial *material; // @synthesize material=_material;
@property(nonatomic) long long morphTargetIndex; // @synthesize morphTargetIndex=_morphTargetIndex;
@property(retain, nonatomic) SCNNode *readMorpherNode; // @synthesize readMorpherNode=_readMorpherNode;

@end
