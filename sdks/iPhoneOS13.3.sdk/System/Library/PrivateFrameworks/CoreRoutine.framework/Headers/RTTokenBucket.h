//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTTokenBucket : NSObject
{
    double _fillRate;
    double _capacity;
    double _operationCost;
    double _tokenBucket;
    double _lastArrivalTime;
    double _totalInterArrivalTime;
    double _wastedTokens;
    double _totalTokensGenerated;
    double _totalTokensConsumed;
    NSUInteger _totalOperations;
    NSUInteger _operationsAllowed;
    double _interArrivalTime;
    double _lastBucketFill;
}

@property(nonatomic) double lastBucketFill; // @synthesize lastBucketFill=_lastBucketFill;
@property(nonatomic) double interArrivalTime; // @synthesize interArrivalTime=_interArrivalTime;
- (id)dumpStatistics;
- (void)reset;
- (NSUInteger)countOfOperationsAllowedWithCost:(double)arg1;
- (NSUInteger)countOfOperationsAllowed;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)arg1;
- (double)timeIntervalUntilOperationAllowed;
- (BOOL)operationAllowed;
- (BOOL)operationAllowedWithCost:(double)arg1;
- (BOOL)_consumeTokens:(NSUInteger)arg1;
- (void)_replenishTokens;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2 initialAllocation:(double)arg3;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2;
- (id)init;

@end

