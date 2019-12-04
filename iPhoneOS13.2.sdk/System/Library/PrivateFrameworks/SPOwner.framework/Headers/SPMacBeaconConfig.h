//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSArray;

@interface SPMacBeaconConfig : NSObject <NSCopying, NSSecureCoding>
{
    double _initialNoBeaconDuration;
    double _fastRollAdvertisementDuration;
    double _fastRollAdvertisementInterval;
    double _slowRollAdvertisementDuration;
    double _slowRollNoAdvertisementDuration;
    double _noAdvertisementDurationDecayFactor;
    NSArray *_postInitialDayAdvertisementTimes;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *postInitialDayAdvertisementTimes; // @synthesize postInitialDayAdvertisementTimes=_postInitialDayAdvertisementTimes;
@property(nonatomic) double noAdvertisementDurationDecayFactor; // @synthesize noAdvertisementDurationDecayFactor=_noAdvertisementDurationDecayFactor;
@property(nonatomic) double slowRollNoAdvertisementDuration; // @synthesize slowRollNoAdvertisementDuration=_slowRollNoAdvertisementDuration;
@property(nonatomic) double slowRollAdvertisementDuration; // @synthesize slowRollAdvertisementDuration=_slowRollAdvertisementDuration;
@property(nonatomic) double fastRollAdvertisementInterval; // @synthesize fastRollAdvertisementInterval=_fastRollAdvertisementInterval;
@property(nonatomic) double fastRollAdvertisementDuration; // @synthesize fastRollAdvertisementDuration=_fastRollAdvertisementDuration;
@property(nonatomic) double initialNoBeaconDuration; // @synthesize initialNoBeaconDuration=_initialNoBeaconDuration;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)persistToPrefs;
- (id)initFromPrefs;
- (id)initWithInitialNoBeaconDuration:(double)arg1 fastRollAdvertisementDuration:(double)arg2 fastRollAdvertisementInterval:(double)arg3 slowRollAdvertisementDuration:(double)arg4 slowRollNoAdvertisementDuration:(double)arg5 noAdvertisementDurationDecayFactor:(double)arg6 postInitialDayAdvertisementTimes:(id)arg7;

@end
