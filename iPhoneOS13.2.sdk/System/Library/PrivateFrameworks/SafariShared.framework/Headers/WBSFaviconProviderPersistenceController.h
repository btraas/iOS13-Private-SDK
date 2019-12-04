//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSDataCacheDelegate-Protocol.h>
#import <SafariShared/WBSSQLiteStoreDelegate-Protocol.h>

@class NSString, NSURL, WBSFaviconProviderDatabaseController, WBSFaviconProviderPrivateCache, WBSFaviconProviderRecordCache, WBSOnDiskDataCache;
@protocol OS_dispatch_queue;

@interface WBSFaviconProviderPersistenceController : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate>
{
    NSURL *_baseURL;
    WBSOnDiskDataCache *_faviconDiskCache;
    WBSFaviconProviderDatabaseController *_faviconDatabase;
    WBSFaviconProviderRecordCache *_recordsCache;
    WBSFaviconProviderPrivateCache *_privateCache;
    id /* block */ _setUpCompletionHandler;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _controllerState;
    struct CGSize _preferredIconSize;
    _Bool _isReadOnly;
    NSURL *_databaseURL;
    NSURL *_diskCacheURL;
}

@property(readonly, nonatomic) NSURL *diskCacheURL; // @synthesize diskCacheURL=_diskCacheURL;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (void)sqliteStoreDidFallBackToInMemoryStore:(id)arg1;
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dataCacheDidSetUp:(id)arg1;
- (void)pageURLStringsPrefixedWithVariantsOfDomainString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)firstIconForVariantsOfDomainString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)firstIconForVariantsOfPageURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)iconInfoForIconURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)iconInfoForPageURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_iconForIconUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)iconForIconURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)iconForPageURLString:(id)arg1 includingPrivateData:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)removeIconFilesNotReferencedInDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)removeIconsWithURLStringsNotFoundIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllIconsWithCompletionHandler:(id /* block */)arg1;
- (void)removeIconWithPageURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)linkPageURLString:(id)arg1 toIconURLString:(id)arg2 isPrivate:(_Bool)arg3 completionHandler:(id /* block */)arg4;
- (void)rejectedResourceInfoForPageURLString:(id)arg1 iconURLString:(id)arg2 includingPrivateData:(_Bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setIconIsRejectedResource:(_Bool)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 isPrivate:(_Bool)arg4 completionHandler:(id /* block */)arg5;
- (void)setIconData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(struct CGSize)arg4 hasGeneratedResolutions:(_Bool)arg5 isPrivate:(_Bool)arg6 completionHandler:(id /* block */)arg7;
- (id)_imageFromURL:(id)arg1;
- (long long)_faviconStatusFromWBSSQLStoreStatus:(long long)arg1;
- (void)_finishSetUpWithStatus:(long long)arg1;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(id /* block */)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)openAndCheckIntegrity:(_Bool)arg1 createIfNeeded:(_Bool)arg2 fallBackToMemoryStoreIfError:(_Bool)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithPersistenceBaseURL:(id)arg1 databaseName:(id)arg2 preferredIconSize:(struct CGSize)arg3 isReadOnly:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
