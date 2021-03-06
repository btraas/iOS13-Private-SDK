//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_dictionary;
    NSMutableArray *_orderedKeys;
}

+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)orderedDictionary;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, copy) NSArray *allObjects;
@property(readonly, copy) NSArray *allKeys;
- (id)objectForKey:(id)arg1;
- (id)init;

@end

