//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSKSelectionPath : NSObject
{
    NSArray *_currentSelection;
}

+ (id)selectionPathWithSelectionArray:(id)arg1;
// - (void).cxx_destruct;
- (void)saveToArchive:(struct SelectionPathArchive )arg1 archiver:(id)arg2 context:(id)arg3;
- (id)initWithArchive:(const struct SelectionPathArchive )arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *UUIDDescription;
- (id)description;
- (void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)leastSpecificSelectionOfClass:(Class)arg1;
- (id)mostSpecificSelectionConformingToProtocol:(id)arg1;
- (id)mostSpecificSelectionOfClass:(Class)arg1;
- (id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1;
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2;
- (id)selectionPathPoppingToSelection:(id)arg1;
- (id)selectionPathPoppingOffSelection:(id)arg1;
- (id)selectionPathWithAppendedSelections:(id)arg1;
- (id)selectionPathWithAppendedSelection:(id)arg1;
- (NSUInteger)indexForSelection:(id)arg1;
- (id)selectionAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *orderedSelections;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSelectionArray:(id)arg1;

@end

