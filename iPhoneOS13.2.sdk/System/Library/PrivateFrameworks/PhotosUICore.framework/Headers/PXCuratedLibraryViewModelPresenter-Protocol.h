//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PXAssetCollectionReference, PXCuratedLibraryViewModel;

@protocol PXCuratedLibraryViewModelPresenter 
- (PXAssetCollectionReference *)viewModel:(PXCuratedLibraryViewModel *)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;

@optional
- (long long)viewModel:(PXCuratedLibraryViewModel *)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)viewModel:(PXCuratedLibraryViewModel *)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)viewModel:(PXCuratedLibraryViewModel *)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
@end
