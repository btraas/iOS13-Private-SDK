//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSCyclerBookmarkRepresentation.h>


@class NSMutableArray;

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation <NSFastEnumeration>
{
    NSMutableArray *_children;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (BOOL)_tryToDeleteDescendant:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)randomListDescendant;
- (id)randomDescendant;
- (id)allDescendantsPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)randomDescendantPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)descendantWithUniqueIdentifier:(id)arg1;
- (id)childAtIndex:(NSUInteger)arg1;
- (BOOL)containsDescendant:(id)arg1;
- (BOOL)containsChild:(id)arg1;
- (void)deleteAllChildren;
- (void)deleteDescendant:(id)arg1;
- (void)deleteChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addChild:(id)arg1;
@property(readonly, nonatomic) NSUInteger numberOfChildren;
- (id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;

@end

