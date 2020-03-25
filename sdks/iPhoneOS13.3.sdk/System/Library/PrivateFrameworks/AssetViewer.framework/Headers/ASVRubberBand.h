//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASVRubberBand : NSObject
{
    float _rubberBandFactor;
    float _minOffset;
    float _maxOffset;
    float _overshoot;
}

@property(nonatomic) float overshoot; // @synthesize overshoot=_overshoot;
@property(nonatomic) float maxOffset; // @synthesize maxOffset=_maxOffset;
@property(nonatomic) float minOffset; // @synthesize minOffset=_minOffset;
@property(nonatomic) float rubberBandFactor; // @synthesize rubberBandFactor=_rubberBandFactor;
- (BOOL)offsetIsWithinRubberBandedRange:(float)arg1;
- (float)offsetForRubberBandOffset:(float)arg1;
- (float)rubberBandOffsetForOffset:(float)arg1;
- (id)initWithRubberBandFactor:(float)arg1 minOffset:(float)arg2 maxOffset:(float)arg3 overshoot:(float)arg4;

@end
