//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutUpdateContainerOffsetResult-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutUpdateContainerOffsetResult : NSObject <_UICollectionLayoutUpdateContainerOffsetResult>
{
    NSMutableDictionary *_invalidatedSupplementaryIndexesDict;
}

- (void)addInvalidatedSupplementaryForKind:(id)arg1 indexPath:(id)arg2;
- (id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1;
@property(readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
