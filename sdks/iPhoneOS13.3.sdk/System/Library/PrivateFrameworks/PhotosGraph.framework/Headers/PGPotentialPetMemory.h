//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphNode;

@interface PGPotentialPetMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    NSArray *_petAssets;
    PGGraphNode *_owner;
    long long _year;
}

@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *owner; // @synthesize owner=_owner;
@property(retain) NSArray *petAssets; // @synthesize petAssets=_petAssets;
// - (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
- (id)initWithOwner:(id)arg1 year:(long long)arg2;

@end
