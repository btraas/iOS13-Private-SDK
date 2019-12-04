//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

@class NSIndexSet, NSMutableIndexSet, TSTTableTileGroup;

__attribute__((visibility("hidden")))
@interface TSTTableTileStorage : TSPContainedObject
{
    NSMutableIndexSet *_tileIDSet;
    TSTTableTileGroup *_tileGroups[16];
    _Bool _upgradeRepairedTiles;
}

+ (id)_sharedQueue;
+ (unsigned int)tileSize;
@property(readonly, nonatomic) _Bool upgradeRepairedTiles; // @synthesize upgradeRepairedTiles=_upgradeRepairedTiles;
- (void)prepareToApplyConcurrentCellMap:(id)arg1;
- (multimap_0345fd13)makeStorageMap;
- (void)reset;
- (_Bool)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1 withDataStore:(id)arg2 result:(id *)arg3;
- (_Bool)auditRowInfoCellCountsReturningResult:(id *)arg1;
@property(readonly, nonatomic) _Bool needToUpgradeCellStorage;
- (void)pruneTileForRowIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int lastPopulatedRowIndex;
@property(readonly, nonatomic) NSIndexSet *populatedRows;
@property(readonly, nonatomic) NSIndexSet *populatedTiles;
- (void)moveColumnIndexRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (void)removeColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (void)insertColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (id)columnCellCountsOfRowsInRange:(struct _NSRange)arg1;
- (void)moveRowIndexRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (void)removeRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)insertRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (id)tileStartingAtOrAfterRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (id)tileStartingAtOrBeforeRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (id)tileForWritingAtRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (id)rowInfoAtIndex:(unsigned int)arg1;
- (void)enumerateRowByRowInRange:(struct _NSRange)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateRowsInRange:(struct _NSRange)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateRowsWithBlock:(id /* block */)arg1;
- (void)enumerateTilesConcurrentlyUsingBlock:(id /* block */)arg1;
- (void)_spliceRows:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_yankRowsFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 count:(unsigned int)arg3;
- (id)_yankRowRange:(struct _NSRange)arg1;
- (id)_yankRowAtIndex:(unsigned int)arg1;
- (void)_removeRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_insertRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_shiftRowsDownAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_shiftRowsUpAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_clearContentAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_enumerateTiles:(id /* block */)arg1;
- (void)_enumerateGroups:(id /* block */)arg1;
- (void)_removeTileForID:(unsigned long long)arg1;
- (id)_createTileWithID:(unsigned long long)arg1;
- (void)_setTile:(id)arg1 forID:(unsigned long long)arg2;
- (id)_tileForID:(unsigned long long)arg1 createIfMissing:(_Bool)arg2;
- (id)_groupForTileID:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long nextTileID;
-     // Error parsing type: v40@0:8^{TileStorage=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::TileStorage_Tile>=^{Arena}ii^{Rep}}I}16^{TableRBTree=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::TableRBTree_Node>=^{Arena}ii^{Rep}}}24@32, name: saveToStorageArchive:treeArchive:archiver:
- (void)_upgradeFromTileIDMap:(vector_ceceab0b *)arg1 referenceMap:(unordered_map_52392278 *)arg2;
-     // Error parsing type: @56@0:8r^{TileStorage=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::TileStorage_Tile>=^{Arena}ii^{Rep}}I}16r^{TableRBTree=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::TableRBTree_Node>=^{Arena}ii^{Rep}}}24Q32@40@48, name: initWithStorageArchive:treeArchive:nextTileID:unarchiver:owner:
- (id)initWithOwner:(id)arg1;

@end
