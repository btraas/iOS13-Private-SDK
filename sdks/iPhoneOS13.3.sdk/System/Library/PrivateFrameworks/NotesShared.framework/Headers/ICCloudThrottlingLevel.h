//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICCloudThrottlingLevel : NSObject
{
    double _batchInterval;
    NSUInteger _numberOfBatches;
}

@property(nonatomic) NSUInteger numberOfBatches; // @synthesize numberOfBatches=_numberOfBatches;
@property(nonatomic) double batchInterval; // @synthesize batchInterval=_batchInterval;
- (id)debugDescription;
- (id)description;
- (id)initWithBatchInterval:(double)arg1 numberOfBatches:(NSUInteger)arg2;
- (id)init;

@end

