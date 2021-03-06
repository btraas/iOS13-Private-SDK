//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSMutableArray, NSString, NSTimer, PHAsset, PHAssetCollection, PHFetchResult, UIImage;
@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;

@interface PXPlacesSnapshotFactory : NSObject <PHPhotoLibraryChangeObserver>
{
    NSString *_cachedFilePathLight;
    NSString *_cachedFilePathDark;
    UIImage *_cachedSnapshotImageLight;
    UIImage *_cachedSnapshotImageDark;
    NSString *_cachedSnapshotImageIdentifier;
    UIImage *_placeholderImage;
    long long _cachedCount;
    NSMutableArray *_requestedCompletionBlocks;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_concurentQueue;
    BOOL _isRegisteredForPhotoLibraryChanges;
    BOOL _countCacheInvalidated;
    long long _currentUserInterfaceStyle;
    id <PXPlacesSnapshotFactoryDelegate> _delegate;
    PHAssetCollection *_placesCollection;
    PHAsset *_snapshottedAsset;
    PHFetchResult *_placesAssetsFetchResult;
    PHFetchResult *_assetCountFetchResult;
    NSTimer *_assetCountChangedTimer;
    NSMutableArray *_localSearches;
}

@property(retain, nonatomic) NSMutableArray *localSearches; // @synthesize localSearches=_localSearches;
@property(retain, nonatomic) NSTimer *assetCountChangedTimer; // @synthesize assetCountChangedTimer=_assetCountChangedTimer;
@property(retain, nonatomic) PHFetchResult *assetCountFetchResult; // @synthesize assetCountFetchResult=_assetCountFetchResult;
@property(nonatomic) BOOL countCacheInvalidated; // @synthesize countCacheInvalidated=_countCacheInvalidated;
@property(retain, nonatomic) PHFetchResult *placesAssetsFetchResult; // @synthesize placesAssetsFetchResult=_placesAssetsFetchResult;
@property(retain, nonatomic) PHAsset *snapshottedAsset; // @synthesize snapshottedAsset=_snapshottedAsset;
@property(nonatomic) BOOL isRegisteredForPhotoLibraryChanges; // @synthesize isRegisteredForPhotoLibraryChanges=_isRegisteredForPhotoLibraryChanges;
@property(retain, nonatomic) PHAssetCollection *placesCollection; // @synthesize placesCollection=_placesCollection;
@property(nonatomic) __weak id <PXPlacesSnapshotFactoryDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)tickAssetCountChangedTimer:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (BOOL)_imageExistsWithLocalIdentifier:(id)arg1;
- (void)_saveImage:(id)arg1 ofAsset:(id)arg2 atPath:(id)arg3;
- (void)removePreviousCachedImages;
- (id)_latestAssetWithLocation;
- (id)_placeHolderImageForExtendedTraitCollection:(id)arg1;
- (void)requestAssetCountWithForcedRefresh:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (long long)assetCountWithForcedRefresh:(BOOL)arg1;
- (void)_requestPlacesSnapshotWithSnapshotOptions:(id)arg1 visibleRegion:(CDStruct_26e8d939)arg2 andCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)requestMapSnapshotForQuery:(id)arg1 snapshotOptions:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_removeLocalSearch:(id)arg1;
- (void)_addLocalSearch:(id)arg1;
- (void)requestPlacesImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)_fetchImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)_handleAsyncPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)requestPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)requestPlacesSnapshotWithSnapshotOptions:(id)arg1 assets:(id)arg2 andCompletion:(id /* CDUnknownBlockType */)arg3;
@property(nonatomic) long long currentUserInterfaceStyle; // @synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle;
- (void)dealloc;
- (id)init;

@end

