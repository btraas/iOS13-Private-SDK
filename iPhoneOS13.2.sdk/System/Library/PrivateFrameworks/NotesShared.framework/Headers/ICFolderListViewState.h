//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableSet, NSNumber, NSString;

@interface ICFolderListViewState : NSObject
{
    _Bool _overrideCollapsed;
    _Bool _showSharedFoldersOnly;
    _Bool _showFoldersThatCanMoveAddOrDeleteContentsOnly;
    NSMutableSet *_expandedFolderIdentifiers;
    NSMutableSet *_collapsedAccountIdentifiers;
    NSMutableSet *_collapsedLegacyAccountIdentifiers;
    NSString *_overrideCollapsedFolder;
    NSMutableArray *_accounts;
    NSCountedSet *_folderNamesCountedSet;
    NSNumber *_customFoldersExistValue;
}

@property(retain, nonatomic) NSNumber *customFoldersExistValue; // @synthesize customFoldersExistValue=_customFoldersExistValue;
@property(retain, nonatomic) NSCountedSet *folderNamesCountedSet; // @synthesize folderNamesCountedSet=_folderNamesCountedSet;
@property(retain, nonatomic) NSMutableArray *accounts; // @synthesize accounts=_accounts;
@property(nonatomic) _Bool showFoldersThatCanMoveAddOrDeleteContentsOnly; // @synthesize showFoldersThatCanMoveAddOrDeleteContentsOnly=_showFoldersThatCanMoveAddOrDeleteContentsOnly;
@property(nonatomic) _Bool showSharedFoldersOnly; // @synthesize showSharedFoldersOnly=_showSharedFoldersOnly;
@property(copy, nonatomic) NSString *overrideCollapsedFolder; // @synthesize overrideCollapsedFolder=_overrideCollapsedFolder;
@property(nonatomic) _Bool overrideCollapsed; // @synthesize overrideCollapsed=_overrideCollapsed;
@property(retain, nonatomic) NSMutableSet *collapsedLegacyAccountIdentifiers; // @synthesize collapsedLegacyAccountIdentifiers=_collapsedLegacyAccountIdentifiers;
@property(retain, nonatomic) NSMutableSet *collapsedAccountIdentifiers; // @synthesize collapsedAccountIdentifiers=_collapsedAccountIdentifiers;
@property(retain, nonatomic) NSMutableSet *expandedFolderIdentifiers; // @synthesize expandedFolderIdentifiers=_expandedFolderIdentifiers;
- (void)invalidateDerivedFolderState;
@property(readonly, nonatomic) _Bool customFoldersExist;
- (void)folderMovedFromOldFolder:(id)arg1 toNewFolder:(id)arg2;
- (id)indexPathOfNoteContainer:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)accountItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfItemsInAccountAtIndex:(unsigned long long)arg1;
- (void)removeLegacyAccounts;
- (void)removeICAccounts;
- (unsigned long long)countOfLegacyAccounts;
- (unsigned long long)indexOfICAccount:(id)arg1;
- (unsigned long long)countOfICAccounts;
- (unsigned long long)countOfAccounts;
- (id)indexesOfLegacyAccounts;
- (id)indexesOfICAccounts;
- (void)addLegacyAccount:(id)arg1 includeAllNotesFolder:(_Bool)arg2;
- (void)addICAccounts:(id)arg1 forMovingFolder:(id)arg2;
- (void)addFolderListItem:(id)arg1;
- (unsigned long long)getLegacyAccountFolderListType:(id)arg1;
- (unsigned long long)getModernAccountFolderListType:(id)arg1;
- (void)addICAccount:(id)arg1 includingTrash:(_Bool)arg2 alwaysIncludeAccountProxy:(_Bool)arg3;
- (id)description;
- (id)init;

@end
