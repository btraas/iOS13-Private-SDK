//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

#import <iWorkImport/TSDTextSelection-Protocol.h>

@class NSString, TSTCellRegion, TSTCellUIDRegion, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTCellSelection : TSKSelection <TSDTextSelection>
{
    BOOL _beginImplicitEditing;
    long long _selectionType;
    TSTTableInfo *_tableInfo;
    TSTCellUIDRegion *_cellUIDRegion;
    TSTCellUIDRegion *_baseCellUIDRegion;
    TSTCellRegion *_cachedCellRegion;
    NSUInteger _cachedCellRegionVersionCounter;
    TSTCellRegion *_cachedBaseRegion;
    NSUInteger _cachedBaseRegionVersionCounter;
    _NSRange _searchReferenceRange;
    struct TSTCellUID _anchorCellUID;
    struct TSTCellUID _cursorCellUID;
}

+ (Class)archivedSelectionClass;
+ (id)selectionWithTableInfo:(id)arg1 columnIndices:(id)arg2;
+ (id)selectionWithTableInfo:(id)arg1 rowIndices:(id)arg2;
+ (id)selectionWithTableInfo:(id)arg1 cellRegion:(id)arg2;
+ (id)selectionWithTableInfo:(id)arg1 cellUID:(const struct TSTCellUID )arg2;
+ (id)selectionWithTableInfo:(id)arg1 cellID:(struct TSUCellCoord)arg2;
@property(nonatomic) NSUInteger cachedBaseRegionVersionCounter; // @synthesize cachedBaseRegionVersionCounter=_cachedBaseRegionVersionCounter;
@property(retain, nonatomic) TSTCellRegion *cachedBaseRegion; // @synthesize cachedBaseRegion=_cachedBaseRegion;
@property(nonatomic) NSUInteger cachedCellRegionVersionCounter; // @synthesize cachedCellRegionVersionCounter=_cachedCellRegionVersionCounter;
@property(retain, nonatomic) TSTCellRegion *cachedCellRegion; // @synthesize cachedCellRegion=_cachedCellRegion;
@property(retain, nonatomic) TSTCellUIDRegion *baseCellUIDRegion; // @synthesize baseCellUIDRegion=_baseCellUIDRegion;
@property(nonatomic) struct TSTCellUID cursorCellUID; // @synthesize cursorCellUID=_cursorCellUID;
@property(nonatomic) struct TSTCellUID anchorCellUID; // @synthesize anchorCellUID=_anchorCellUID;
@property(retain, nonatomic) TSTCellUIDRegion *cellUIDRegion; // @synthesize cellUIDRegion=_cellUIDRegion;
@property(nonatomic) __weak TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(nonatomic) _NSRange searchReferenceRange; // @synthesize searchReferenceRange=_searchReferenceRange;
@property(readonly, nonatomic) BOOL beginImplicitEditing; // @synthesize beginImplicitEditing=_beginImplicitEditing;
@property(readonly, nonatomic) long long selectionType; // @synthesize selectionType=_selectionType;
- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isAtEndOfLine;
@property(readonly, nonatomic) _NSRange range;
- (BOOL)getAggregateType:(out unsigned char )arg1;
- (BOOL)intersectsPartialMergeRangeInTable:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)canEditWithStockCellSubselectionInTable:(id)arg1;
- (BOOL)canEditWithControlCellSubselectionInTable:(id)arg1;
- (BOOL)canEditWithCellSubselectionInTable:(id)arg1;
@property(readonly, nonatomic) BOOL containsOnlyGroupValueCells;
@property(readonly, nonatomic) BOOL containsOnlyCellsInCategoryColumnsAndRows;
@property(readonly, nonatomic) BOOL containsOnlyCellsInSummaryAndLabelRows;
@property(readonly, nonatomic) BOOL containsOnlyCellsInSummaryRow;
@property(readonly, nonatomic) BOOL containsOnlyCellsInCategoryColumn;
@property(readonly, nonatomic) BOOL containsGroupValueCells;
@property(readonly, nonatomic) BOOL containsCellsInCategoryGroupingColumn;
@property(readonly, nonatomic) BOOL containsCellsInCategoryColumnsOrRows;
@property(readonly, nonatomic) BOOL containsCellsInSummaryOrLabelRows;
@property(readonly, nonatomic) BOOL containsCellsInLabelRow;
@property(readonly, nonatomic) BOOL containsCellsInSummaryRow;
@property(readonly, nonatomic) BOOL containsCellsInCategoryColumn;
@property(readonly, nonatomic) BOOL containsFooterRows;
@property(readonly, nonatomic) BOOL containsBodyRows;
@property(readonly, nonatomic) BOOL containsHeaderRows;
@property(readonly, nonatomic) BOOL containsHeaderColumns;
- (BOOL)selectsSingleControlCellWithInteractionUIInTable:(id)arg1;
- (BOOL)containsSingleCellOrMergeInTable:(id)arg1;
- (BOOL)containsCell:(struct TSUCellCoord)arg1;
- (BOOL)containsSelection:(id)arg1;
- (BOOL)areCellsInTheSameRegionInTable:(id)arg1;
- (BOOL)isEqualToSelection:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)remove:(long long)arg1 atIndex:(unsigned int)arg2 count:(unsigned int)arg3;
- (void)insert:(long long)arg1 atIndex:(unsigned int)arg2 count:(unsigned int)arg3;
- (id)selectionExpandedToCoverCollapsedRows;
- (id)selectionToBeginImplicitEditingInTableInfo:(id)arg1;
- (void)setCellRange:(struct TSUCellRect)arg1;
- (id)selectionAdjustedForGeometryInTableInfo:(id)arg1;
- (id)selectionAdjustedForColumnVisibilityInTableInfo:(id)arg1;
- (id)selectionAdjustedForRowVisibilityInTableInfo:(id)arg1;
- (id)selectionByRemovingCellRange:(struct TSUCellRect)arg1 inTable:(id)arg2 withAnchor:(struct TSUCellCoord)arg3 cursor:(struct TSUCellCoord)arg4 selectionType:(long long)arg5;
- (id)selectionByAddingCellRange:(struct TSUCellRect)arg1 inTable:(id)arg2 withAnchor:(struct TSUCellCoord)arg3 cursor:(struct TSUCellCoord)arg4 selectionType:(long long)arg5;
- (id)selectionByExtendingWithCellRange:(struct TSUCellRect)arg1 inTable:(id)arg2 selectionType:(long long)arg3 cursorCell:(struct TSUCellCoord)arg4;
- (id)initWithRdar39989167Archive:(const struct DeathhawkRdar39989167CellSelectionArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct SelectionArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct SelectionArchive )arg1 unarchiver:(id)arg2;
- (struct TSUCellCoord)logicalCellIDInTable:(id)arg1;
@property(readonly, nonatomic) NSUInteger cellCount;
@property(readonly, nonatomic) struct TSUCellCoord cursorCellID;
@property(readonly, nonatomic) TSTCellRegion *baseRegion;
@property(readonly, nonatomic) struct TSUCellCoord anchorCellID;
@property(readonly, nonatomic) TSTCellRegion *cellRegion;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)initWithTableInfo:(id)arg1 columnIndices:(id)arg2;
- (id)initWithTableInfo:(id)arg1 rowIndices:(id)arg2;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2;
- (id)initWithTableInfo:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(struct TSUColumnRowOffset)arg3;
- (id)initWithTableInfo:(id)arg1 rowOrColumn:(long long)arg2 index:(unsigned int)arg3 count:(unsigned int)arg4;
- (id)initWithTableInfo:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned int)arg3;
- (id)initWithTableInfo:(id)arg1 startingRowIndex:(unsigned int)arg2 numberOfRows:(unsigned int)arg3;
- (id)initWithTableInfo:(id)arg1 andCellID:(struct TSUCellCoord)arg2;
- (id)initWithTableInfo:(id)arg1 cellID:(struct TSUCellCoord)arg2 selectionType:(long long)arg3;
- (id)initWithTableInfo:(id)arg1 andCellRange:(struct TSUCellRect)arg2;
- (id)initWithTableInfo:(id)arg1 selectionType:(long long)arg2;
- (id)initWithTableInfo:(id)arg1 cellRange:(struct TSUCellRect)arg2 type:(long long)arg3 anchorCellID:(struct TSUCellCoord)arg4 cursorCellID:(struct TSUCellCoord)arg5;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4 selectionType:(long long)arg5;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4 baseRegion:(id)arg5;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4 baseRegion:(id)arg5 selectionType:(long long)arg6;
- (id)initForUpgradeWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4 baseRegion:(id)arg5 selectionType:(long long)arg6;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4 baseRegion:(id)arg5 selectionType:(long long)arg6 searchReferenceRange:(_NSRange)arg7 beginImplicitEditing:(BOOL)arg8;
- (id)initWithTableInfo:(id)arg1 cellUIDRegion:(id)arg2 anchorCellUID:(struct TSTCellUID )arg3 cursorCellUID:(struct TSTCellUID )arg4 baseCellUIDRegion:(id)arg5 selectionType:(long long)arg6 searchReferenceRange:(_NSRange)arg7 beginImplicitEditing:(BOOL)arg8;

@end

