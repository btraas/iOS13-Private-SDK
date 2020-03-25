//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore-Protocol.h>
#import <AssetsLibraryServices/PLPhotoLibraryPathManagerDCIM-Protocol.h>
#import <AssetsLibraryServices/PLPhotoLibraryPathManagerModel-Protocol.h>

@class NSDictionary, NSSet, NSString, PLPhotoLibraryFileIdentifier;
@protocol PLClientAuthorization, PLPhotoLibraryPathManager;

@protocol PLPhotoLibraryPathManager <PLPhotoLibraryPathManagerCore, PLPhotoLibraryPathManagerModel, PLPhotoLibraryPathManagerDCIM>
+ (id <PLPhotoLibraryPathManager>)systemLibraryPathManager;
- (NSSet *)pathsForExternalWriters;
- (BOOL)createPathsForNewLibrariesWithError:(id )arg1;
- (NSSet *)pathsForPermissionCheck;
- (NSDictionary *)pathsForClientAccess:(id <PLClientAuthorization>)arg1;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1 mode:(unsigned char)arg2 toURLWithHandler:(void (^)(NSURL *, NSError *))arg3;
- (NSString *)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(NSString *)arg3 createIfNeeded:(BOOL)arg4 error:(id )arg5;
- (NSString *)externalDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id )arg3;
- (NSString *)externalDirectoryWithSubType:(unsigned char)arg1;
- (NSString *)privateCacheDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id )arg3;
- (NSString *)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (NSString *)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(NSString *)arg3 createIfNeeded:(BOOL)arg4 error:(id )arg5;
- (NSString *)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id )arg4;
- (NSString *)privateDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id )arg3;
- (NSString *)privateDirectoryWithSubType:(unsigned char)arg1;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(NSString *)arg3 createIfNeeded:(BOOL)arg4 error:(id )arg5;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id )arg4;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1 additionalPathComponents:(NSString *)arg2;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id )arg3;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1;
- (NSString *)photosAsideDatabasePath;
- (NSString *)photosCPLDatabasePath;
- (NSString *)photosDatabasePath;
@end
