//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet
{
    NSMutableSet *_mutableKeys;
}

@property(retain, nonatomic) NSMutableSet *mutableKeys; // @synthesize mutableKeys=_mutableKeys;
// - (void).cxx_destruct;
- (void)unionBagKeySet:(id)arg1;
- (void)addBagKey:(id)arg1 valueType:(NSUInteger)arg2 defaultValue:(id)arg3;
- (void)addBagKey:(id)arg1 valueType:(NSUInteger)arg2;
- (id)keys;
- (id)init;

@end

