//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface KeyPitch : NSObject
{
    double _frequency;
    double _timeOffsetMS;
}

@property(nonatomic) double timeOffsetMS; // @synthesize timeOffsetMS=_timeOffsetMS;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
- (id)description;
- (id)initWithFrequency:(double)arg1 timeOffset:(double)arg2;

@end

