//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDRestorableIterator-Protocol.h>
#import <HealthDaemon/HDSampleIterator-Protocol.h>

@class HDProfile, HDSortedSampleIterator, HKSample, HKSortedQueryAnchor, NSArray, NSMutableArray;

@interface HDMultiTypeSortedSampleIterator : NSObject <HDSampleIterator, HDRestorableIterator>
{
    NSArray *_sampleQueryDescriptions;
    NSArray *_sortDescriptors;
    long long _bufferSize;
    HDProfile *_profile;
    HKSortedQueryAnchor *_anchor;
    NSMutableArray *_iterators;
    HDSortedSampleIterator *_nextIterator;
    BOOL _isInitialized;
}

+ (id)_upstreamIteratorsWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 bufferSize:(long long)arg4 profile:(id)arg5;
// - (void).cxx_destruct;
- (id)iteratorStateData;
- (BOOL)restoreIteratorStateFromData:(id)arg1 error:(id )arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) long long objectID;
@property(readonly, nonatomic) HKSample *sample;
- (id)object;
- (BOOL)advanceWithError:(id )arg1;
- (BOOL)_prepareIteratorsWithError:(id )arg1;
- (id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 bufferSize:(long long)arg3 profile:(id)arg4;
- (id)initForCopying;
- (id)init;

@end

