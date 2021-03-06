//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/ML3AccountInformationProviding-Protocol.h>
#import <MusicLibrary/ML3DatabaseConnectionDelegate-Protocol.h>
#import <MusicLibrary/ML3DatabaseConnectionPoolDelegate-Protocol.h>

@class ML3AccountCacheDatabase, ML3Container, ML3DatabaseConnectionPool, ML3DatabaseMetadata, ML3LibraryNotificationManager, ML3MusicLibraryResourcesManager, NSArray, NSDate, NSLock, NSMutableDictionary, NSNumber, NSString;
@protocol ML3MusicLibraryDelegate, OS_dispatch_queue;

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate, NSSecureCoding, ML3AccountInformationProviding>
{
    NSString *_libraryUID;
    NSLock *_libraryUIDLock;
    NSString *_syncLibraryUID;
    ML3AccountCacheDatabase *_accountCacheDatabase;
    NSMutableDictionary *_optimizedLibraryEntityFilterPredicatesByEntityClass;
    NSMutableDictionary *_optimizedLibraryContainerFilterPredicatesByContainerClass;
    NSMutableDictionary *_optimizedLibraryPublicEntityFilterPredicatesByEntityClass;
    NSMutableDictionary *_optimizedLibraryPublicContainerFilterPredicatesByContainerClass;
    BOOL _isHomeSharingLibraryLoaded;
    BOOL _isHomeSharingLibrary;
    BOOL _usingSharedLibraryPath;
    BOOL _readOnly;
    ML3DatabaseConnectionPool *_connectionPool;
    NSString *_databasePath;
    struct iPhoneSortKeyBuilder _sortKeyBuilder;
    ML3MusicLibraryResourcesManager *_resourcesManager;
    ML3LibraryNotificationManager *_notificationManager;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_accountDSID;
    id <ML3MusicLibraryDelegate> _delegate;
    NSArray *_libraryEntityFilterPredicates;
    NSArray *_libraryContainerFilterPredicates;
    NSArray *_libraryPublicEntityFilterPredicates;
    NSArray *_libraryPublicContainerFilterPredicates;
}

+ (id)distributedToLocalNotificationMapping;
+ (id)assistantSyncDataChangedNotificationName;
+ (id)widthLimitedSetValuesQueue;
+ (BOOL)updateTrackIntegrityOnConnection:(id)arg1;
+ (void)removeOrphanedTracks;
+ (void)enumerateSortMapTablesUsingBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)sectionIndexTitleForSectionHeader:(id)arg1;
+ (id)sectionIndexTitles;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)arg1;
+ (id)localizedSectionHeaderForSectionHeader:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)deviceSupportsMultipleLibraries;
+ (void)enableAutomaticDatabaseValidation;
+ (void)disableAutomaticDatabaseValidation;
+ (void)disableSharedLibrary;
+ (void)setSharedLibraryDatabasePath:(id)arg1;
+ (id)sharedLibraryDatabasePath;
+ (id)sharedLibrary;
+ (id)musicLibraryPerUserDSID;
+ (void)setAutoupdatingSharedLibraryPath:(id)arg1;
+ (id)autoupdatingSharedLibraryPath;
+ (id)autoupdatingSharedLibrary;
+ (id)allLibraries;
+ (id)registeredLibraries;
+ (id)musicLibraryForUserAccount:(id)arg1;
+ (id)globalSerialQueue;
+ (long long)artworkSourceTypeForTrackSource:(int)arg1;
+ (id)artworkTokenForChapterWithItemPID:(long long)arg1 retrievalTime:(double)arg2;
+ (id)artworkTokenForArtistHeroURL:(id)arg1;
+ (id)artworkRelativePathFromToken:(id)arg1;
+ (long long)devicePreferredImageFormat;
+ (BOOL)deviceSupportsASTC;
+ (BOOL)dropIndexesUsingConnection:(id)arg1 tableNames:(const char )arg2;
+ (BOOL)orderingLanguageMatchesSystemUsingConnection:(id)arg1;
+ (BOOL)userVersionMatchesSystemUsingConnection:(id)arg1;
+ (int)userVersionUsingConnection:(id)arg1;
+ (id)itemIndexSchemaSQL;
+ (id)indexSchemaSQL;
+ (id)allTables;
+ (id)allTriggersSQL;
+ (id)allPragmaSQL;
+ (id)allSchemaSQL;
+ (id)itemNewSchemaSQL;
+ (id)itemSchemaSQL;
+ (id)sortMapNewSchemaSQL;
+ (id)sortMapSchemaSQL;
+ (id)storeLinkSchemaSQL;
+ (id)pathForBaseLocationPath:(long long)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
+ (id)pathForResourceFileOrFolder:(int)arg1;
+ (id)libraryContainerRelativePath:(id)arg1;
+ (id)libraryContainerPathByAppendingPathComponent:(id)arg1;
+ (id)libraryContainerPath;
+ (id)libraryPathForContainerPath:(id)arg1;
+ (id)allLibraryContainerPaths;
+ (id)mediaFolderPathByAppendingPathComponent:(id)arg1;
+ (id)mediaFolderPath;
+ (id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3;
+ (id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2;
+ (id)jaliscoGetSortedMediaKinds:(id)arg1;
@property(nonatomic, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic, getter=isUsingSharedLibraryPath) BOOL usingSharedLibraryPath; // @synthesize usingSharedLibraryPath=_usingSharedLibraryPath;
@property(retain, nonatomic) NSArray *libraryPublicContainerFilterPredicates; // @synthesize libraryPublicContainerFilterPredicates=_libraryPublicContainerFilterPredicates;
@property(retain, nonatomic) NSArray *libraryPublicEntityFilterPredicates; // @synthesize libraryPublicEntityFilterPredicates=_libraryPublicEntityFilterPredicates;
@property(retain, nonatomic) NSArray *libraryContainerFilterPredicates; // @synthesize libraryContainerFilterPredicates=_libraryContainerFilterPredicates;
@property(retain, nonatomic) NSArray *libraryEntityFilterPredicates; // @synthesize libraryEntityFilterPredicates=_libraryEntityFilterPredicates;
@property(nonatomic) __weak id <ML3MusicLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) ML3LibraryNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
// - (void).cxx_destruct;
- (void)_onQueue_updateDatabaseConnectionsProfilingLevel;
- (void)_postClientNotificationWithDistributedName:(id)arg1 localName:(id)arg2;
- (void)_tearDownNotificationManager;
- (void)_setupNotificationManager;
- (void)_closeAndLockCurrentDatabaseConnections;
- (BOOL)_shouldProcessAccountChanges;
- (void)_completeAccountChangeWithPath:(id)arg1;
- (BOOL)_prepareForAccountChange:(id )arg1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)emergencyDisconnectWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_libraryPathDidChangeNotification:(id)arg1;
- (void)_loggingSettingsDidChangeNotification:(id)arg1;
- (void)_effectiveSettingsDidChangeNotification:(id)arg1;
- (BOOL)_clearAllRowsFromTables:(id)arg1;
- (void)_teardownMediaLibraryDatabaseConnection:(id)arg1;
- (void)_configureMediaLibraryDatabaseConnection:(id)arg1;
- (BOOL)_canConfigureMediaLibraryDatabaseConnection:(id)arg1;
- (id)_newGeniusDBConnectionAtPath:(id)arg1;
- (void)_autogenerateArtworkForRelativePath:(id)arg1 artworkType:(long long)arg2 mediaType:(unsigned int)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_convertOriginalArtworkToDevicePreferredFormatFromSourceURL:(id)arg1 toDestinationURL:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_removeInvalidAvailableArtworkTokensUsingConnection:(id)arg1;
- (BOOL)_removeOrphanedArtworkAssetsUsingConnection:(id)arg1;
- (BOOL)_removeOrphanedArtworkMetadataUsingConnection:(id)arg1;
- (BOOL)_removeOrphanedArtworkTokensUsingConnection:(id)arg1;
- (void)_deleteAllArtworkVariantsAtRelativePaths:(id)arg1;
- (id)_allArtworkVariantDirectories;
- (BOOL)_determineAndUpdateBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(BOOL)arg5 usingConnection:(id)arg6;
- (BOOL)_updateBestArtworkTokensForArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 preserveExistingAvailableToken:(BOOL)arg4 usingConnection:(id)arg5;
- (BOOL)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4 usingConnection:(id)arg5;
- (BOOL)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4;
- (void)updateTrackIntegrity;
- (void)deletePresignedValidity;
- (BOOL)verifyPresignedValidity;
- (BOOL)hasPresignedValidity;
- (void)migratePresignedValidity;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (void)removeItemsWithFamilyAccountID:(NSUInteger)arg1 purchaserAccountID:(NSUInteger)arg2 downloaderAccountID:(NSUInteger)arg3;
- (void)removeOrphanedTracksOnlyInCaches:(BOOL)arg1;
- (void)removeTombstonesForDeletedItems;
- (BOOL)cleanupArtworkWithOptions:(NSUInteger)arg1 usingConnection:(id)arg2;
- (BOOL)cleanupArtworkWithOptions:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL hasUserPlaylistsContainingAppleMusicContent;
@property(readonly, nonatomic) BOOL hasAddedToLibraryAppleMusicContent;
@property(readonly, nonatomic) BOOL hasUserPlaylists;
- (BOOL)recordPlayEventForContainerPersistentID:(long long)arg1;
- (BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (void)enumerateArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (void)retrieveBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (BOOL)isArtworkTokenAvailable:(id)arg1;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(BOOL)arg5 usingConnection:(id)arg6;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 usingConnection:(id)arg5;
- (void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 usingConnection:(id)arg5;
- (void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4;
- (void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 usingConnection:(id)arg6;
- (void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (void)migrateExistingArtworkToken:(id)arg1 newArtworkToken:(id)arg2 newSourceType:(long long)arg3;
- (BOOL)deleteArtworkToken:(id)arg1;
- (BOOL)removeArtworkAssetWithToken:(id)arg1;
- (BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned int)arg5;
- (BOOL)importOriginalArtworkFromFileURL:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned int)arg5;
- (BOOL)importExistingOriginalArtworkWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 mediaType:(unsigned int)arg4;
- (void)autogenerateSupportedSizesForAllOriginalArtworkWithConnection:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(NSUInteger)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(NSUInteger)arg2 respectSongMattress:(BOOL)arg3;
- (long long)autoFilledTracksTotalSizeWithUrgency:(NSUInteger)arg1;
@property(readonly, nonatomic) long long autoFilledTracksTotalSize;
- (void)removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)removeSource:(int)arg1 usingConnection:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)removeSource:(int)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)countOfChangedPersistentIdsAfterRevision:(long long)arg1 revisionTrackingCode:(NSUInteger)arg2 maximumRevisionType:(int)arg3;
- (BOOL)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(long long)arg3;
- (void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(NSUInteger)arg2 maximumRevisionType:(int)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(NSUInteger)arg2 maximumRevisionType:(int)arg3 forMediaTypes:(id)arg4 inUsersLibrary:(BOOL)arg5 usingBlock:(id /* CDUnknownBlockType */)arg6;
- (BOOL)updateSortMap;
- (BOOL)requiresNonSchemaUpdatesOnConnection:(id)arg1;
- (BOOL)requiresSchemaOnlyUpdatesOnConnection:(id)arg1;
- (void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)savePlaylists;
- (void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)saveTrackMetadata;
- (void)notifyKeepLocalStateDidChange;
- (void)notifyLibraryImportDidFinish;
- (void)notifyCloudLibraryAvailabilityDidChange;
- (void)notifySectionsDidChange;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)notifyInvisiblePropertyDidChange;
- (void)notifyNonContentsPropertyDidChange;
- (void)notifyEntitiesAddedOrRemoved;
- (void)notifyContentsDidChange;
- (NSUInteger)unknownSectionIndex;
- (NSUInteger)sectionIndexTitleIndexForSectionIndex:(NSUInteger)arg1;
- (id)localizedSectionHeaderForSectionIndex:(NSUInteger)arg1;
- (id)groupingKeysForStrings:(id)arg1;
- (id)groupingKeyForString:(id)arg1;
- (void)accessSortKeyBuilder:(id /* CDUnknownBlockType */)arg1;
- (id)accountCacheDatabase;
- (BOOL)clearAllCloudKVSData;
- (BOOL)clearAllGeniusData;
- (BOOL)emptyAllTables;
- (BOOL)createIndexes;
- (int)currentDatabaseVersion;
- (BOOL)validateDatabase;
- (BOOL)automaticDatabaseValidationDisabled;
- (BOOL)isCurrentThreadInTransaction;
- (void)performAsyncDatabaseWriteTransactionWithBlock:(id /* CDUnknownBlockType */)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)performReadOnlyDatabaseTransactionWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)performDatabaseTransactionWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)databaseConnectionAllowingWrites:(BOOL)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)reconnectToDatabase;
- (void)checkInDatabaseConnection:(id)arg1;
- (id)checkoutWriterConnection;
- (id)checkoutReaderConnection;
- (void)connectionPool:(id)arg1 createdNewConnection:(id)arg2;
- (void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(BOOL)arg2;
- (void)connectionDidBeginDatabaseTransaction:(id)arg1;
- (void)connectionWillCloseDatabase:(id)arg1;
- (void)connectionDidOpenDatabase:(id)arg1;
- (void)connectionWillOpenDatabase:(id)arg1;
- (id)libraryEntityFilterPredicatesForContainerClass:(Class)arg1;
- (id)libraryEntityFilterPredicatesForEntityClass:(Class)arg1;
@property(readonly, nonatomic) BOOL mediaRestrictionEnabled;
@property(readonly, nonatomic) NSArray *preferredSubtitleTracks;
@property(readonly, nonatomic) NSArray *preferredAudioTracks;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property(readonly, nonatomic) ML3DatabaseMetadata *databaseInfo;
@property(readonly, nonatomic) ML3Container *currentDevicePlaybackHistoryPlaylist;
@property(readonly, nonatomic) ML3Container *currentDevicePurchasesPlaylist;
@property(readonly, nonatomic, getter=isLibraryEmpty) BOOL libraryEmpty;
@property(readonly, nonatomic) NSString *libraryUID;
@property(nonatomic) NSString *syncLibraryID;
@property(nonatomic) long long syncGenerationID;
@property(readonly, nonatomic) long long currentContentRevision;
@property(readonly, nonatomic) long long currentRevision;
@property(nonatomic) BOOL downloadOnAddToLibrary;
@property(nonatomic) BOOL isHomeSharingLibrary;
@property(readonly, nonatomic) struct iPhoneSortKeyBuilder sortKeyBuilder; // @synthesize sortKeyBuilder=_sortKeyBuilder;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) ML3DatabaseConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(readonly, nonatomic) ML3MusicLibraryResourcesManager *resourcesManager; // @synthesize resourcesManager=_resourcesManager;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 populateUnitTestTablesBlock:(id /* CDUnknownBlockType */)arg3;
- (id)initWithPath:(id)arg1;
- (id)initWithResourcesManager:(id)arg1;
- (id)artistForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2;
- (BOOL)repairAlbumArtistRelationshipsWithConnection:(id)arg1;
- (id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(BOOL)arg5;
- (BOOL)_validateDatabaseUsingConnection:(id)arg1 error:(id )arg2;
- (BOOL)coerceValidDatabaseWithError:(id )arg1;
- (BOOL)_coalesceMismatchedCollectionClass:(Class)arg1 usingConnection:(id)arg2;
- (BOOL)coalesceMismatchedCollectionsUsingConnection:(id)arg1;
- (id)_systemUnicodeVersionData;
- (long long)insertStringIntoSortMapNoTransaction:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(BOOL )arg2;
- (CDStruct_912cb5d2)nameOrderForString:(id)arg1;
- (BOOL)validateSortMapUnicodeVersionOnConnection:(id)arg1;
- (BOOL)inTransactionUpdateSearchMapOnConnection:(id)arg1;
- (BOOL)inTransactionUpdateSortMapOnConnection:(id)arg1 forceRebuild:(BOOL)arg2 forceUpdateOriginals:(BOOL)arg3;
- (BOOL)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2;
- (BOOL)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2;
- (BOOL)updateSortMapOnConnection:(id)arg1;
- (id)genreForGenre:(id)arg1;
- (id)composerForComposerName:(id)arg1;
- (id)albumArtistForEffectiveAlbumArtistName:(id)arg1;
- (void)updateOrderingLanguagesForCurrentLanguage;
- (BOOL)updateSystemPlaylistNamesForCurrentLanguage;
- (long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(NSUInteger)arg2 includeCloudAssets:(BOOL)arg3 includeAutoFilledTracks:(BOOL)arg4;
- (long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(NSUInteger)arg2 includeAutoFilledTracks:(BOOL)arg3;
- (long long)_clearOrphanedAssetsOfAmount:(long long)arg1 withUrgency:(NSUInteger)arg2;
- (long long)_clearAllCloudAssets;
- (long long)_clearDatabaseFileFreeSpace;
- (id)_notInKeepLocalCollectionPredicate;
- (id)_allKeepLocalPlaylistTracks;
- (id)_purgeableTrackPredicateWithUrgency:(NSUInteger)arg1 includeAutoFilledTracks:(BOOL)arg2 includeCloudAssets:(BOOL)arg3;
- (void)_enumeratePurgeableTracksForUrgency:(NSUInteger)arg1 includeAutoFilledTracks:(BOOL)arg2 includeCloudAssets:(BOOL)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (long long)_purgeableTracksTotalSizeWithUrgency:(NSUInteger)arg1 includeAutoFilledTracks:(BOOL)arg2;
- (void)_enumeratePurgeablePodcastEpisodesForUrgency:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_enumeratePurgeableAlbumTracksForUrgency:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_enumeratePurgeableStreamedTracksForUrgency:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)_totalSizeForAllNonCacheTracks;
- (id)_purgeableAlbumsQuerySQLWithUrgency:(NSUInteger)arg1;
- (id)_nonPurgeableAlbumsQuerySQLWithUrgency:(NSUInteger)arg1;
- (id)_purgeableItemsPredicateSQLWithUrgency:(NSUInteger)arg1;
- (NSUInteger)_managedClearPurgeableTracksOfAmount:(NSUInteger)arg1 urgency:(NSUInteger)arg2;
- (NSUInteger)_managedPurgeableTracksTotalSizeWithUrgency:(NSUInteger)arg1;
- (long long)_clearPurgeableArtworkOfAmount:(long long)arg1 withUrgency:(NSUInteger)arg2;
- (long long)_purgeableArtworkTotalSizeWithUrgency:(NSUInteger)arg1;
- (long long)_artworkTotalSize;
- (long long)_cloudAssetsTotalSize;
- (long long)_databaseFileFreeSpace;
- (BOOL)_shouldPurgeKeepLocalTracksForUrgency:(NSUInteger)arg1;
- (long long)minimumPurgeableStorage;
- (void)setMinimumPurgeableStorage:(long long)arg1;
- (BOOL)shouldOptimizeStorage;
- (void)setShouldOptimizeStorage:(BOOL)arg1;
- (BOOL)autoFilledTracksArePurgeable;
- (void)setAutoFilledTracksArePurgeable:(BOOL)arg1;
- (long long)clearAllRemovedTracks;
- (long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(NSUInteger)arg2 includeAutoFilledTracks:(BOOL)arg3;
- (long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(NSUInteger)arg2;
- (long long)purgeableStorageSizeWithUrgency:(NSUInteger)arg1 includeAutoFilledTracks:(BOOL)arg2;
- (long long)purgeableStorageSizeWithUrgency:(NSUInteger)arg1;
- (BOOL)isArtworkFetchableForPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4;
- (BOOL)hasOriginalArtworkForRelativePath:(id)arg1;
- (id)artworkCacheDirectoryForEffect:(id)arg1;
- (id)artworkCacheDirectoryForSize:(CGSize)arg1;
@property(readonly, copy, nonatomic) NSString *rootArtworkCacheDirectory;
@property(readonly, copy, nonatomic) NSString *originalArtworkDirectory;
@property(readonly, copy, nonatomic) NSString *artworkDirectory;
- (void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
- (void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
- (id)uppService;
@property(readonly, nonatomic) BOOL supportsUbiquitousPlaybackPositions;
- (id)pathForBaseLocationPath:(long long)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
- (id)pathForResourceFileOrFolder:(int)arg1;
- (id)libraryContainerRelativePath:(id)arg1;
- (id)libraryContainerPathByAppendingPathComponent:(id)arg1;
- (id)libraryContainerPath;
- (void)clearSagaCloudAddToPlaylistBehavior;
- (void)clearSagaPrefersToMergeWithCloudLibrary;
- (void)clearSagaCloudLibraryTroveID;
- (void)clearSagaCloudLibraryCUID;
- (void)clearSagaLastPlaylistPlayDataUploadDate;
- (void)clearSagaLastItemPlayDataUploadDate;
- (void)clearSagaLastGeniusUpdateDate;
- (void)clearSagaCloudAccountID;
@property(nonatomic) long long preferredVideoQuality;
@property(copy, nonatomic) NSDate *sagaLastSubscribedContainersUpdateTime;
@property(copy, nonatomic) NSDate *sagaLastLibraryUpdateTime;
@property(nonatomic) long long sagaOnDiskDatabaseRevision;
@property(copy, nonatomic) NSString *storefrontIdentifier;
@property(nonatomic) BOOL sagaPrefersToMergeWithCloudLibrary;
@property(nonatomic) BOOL sagaNeedsFullUpdateAfterNextUpdate;
@property(nonatomic) long long sagaCloudAddToPlaylistBehavior;
@property(nonatomic) long long sagaDatabaseUserVersion;
@property(copy, nonatomic) NSString *sagaCloudLibraryTroveID;
@property(copy, nonatomic) NSString *sagaCloudLibraryCUID;
@property(copy, nonatomic) NSDate *sagaLastPlaylistPlayDataUploadDate;
@property(copy, nonatomic) NSDate *sagaLastItemPlayDataUploadDate;
@property(copy, nonatomic) NSDate *sagaLastGeniusUpdateDate;
@property(copy, nonatomic) NSNumber *sagaLastKnownActiveLockerAccountDSID;
@property(copy, nonatomic) NSNumber *sagaAccountID;
- (long long)syncIdFromMultiverseId:(id)arg1;
- (BOOL)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id )arg2;
- (void)updateJaliscoExcludedMediaKindsWith:(id)arg1 excludingMediaKindsInSet:(BOOL)arg2;
- (void)sortJaliscoLastSupportedMediaKinds;
- (void)clearJaliscoLastExcludedMediaKinds;
- (void)clearJaliscoLastGeniusUpdateDate;
- (void)clearJaliscoAccountID;
@property(copy, nonatomic) NSDate *jaliscoLastLibraryUpdateTime;
@property(nonatomic) long long jaliscoOnDiskDatabaseRevision;
@property(nonatomic) BOOL jaliscoNeedsUpdateForTokens;
@property(nonatomic) BOOL jaliscoIsMusicGeniusUserEnabled;
@property(nonatomic) BOOL jaliscoHasCloudGeniusData;
@property(readonly, nonatomic) NSArray *jaliscoLastExcludedMediaKinds;
@property(copy, nonatomic) NSString *jaliscoLastSupportedMediaKinds;
@property(copy, nonatomic) NSDate *jaliscoLastGeniusUpdateDate;
@property(copy, nonatomic) NSNumber *jaliscoAccountID;

@end

