//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray *_adjustments;
    NSOrderedSet *_maskUUIDs;
    NSUInteger _formatVersion;
}

+ (BOOL)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (NSUInteger)count;
- (id)maskUUIDs;
- (id)adjustmentsWithIdentifier:(id)arg1;
- (id)firstAdjustmentWithIdentifier:(id)arg1;
- (id)adjustmentAtIndex:(NSUInteger)arg1;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAdjustments:(id)arg1;
- (id)init;
- (id)envelopeDictionary;
- (id)initWithEnvelopeDictionary:(id)arg1;

@end

