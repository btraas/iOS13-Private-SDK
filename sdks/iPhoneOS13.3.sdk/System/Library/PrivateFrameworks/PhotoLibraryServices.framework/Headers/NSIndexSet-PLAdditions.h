//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (PLAdditions)
- (_NSRange)pl_rangeCoveringIndexSet;
- (id)pl_indexSetAdjustedForInsertions:(id)arg1;
- (id)pl_indexSetAdjustedForDeletions:(id)arg1;
- (id)_pl_indexSetByUpdatingWithChangedIndexes:(id)arg1 asInserts:(BOOL)arg2;
- (id)pl_shortDescription;
@end
