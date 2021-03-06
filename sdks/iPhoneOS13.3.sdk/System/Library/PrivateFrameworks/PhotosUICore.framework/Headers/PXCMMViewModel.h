//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXCMMMutableViewModel-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, NSURL, PXPhotosGlobalFooterViewModel, PXRecipient, PXSectionedSelectionManager;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMViewModel : PXObservable <PXMediaTypeAggregating, PXChangeObserver, PXCMMMutableViewModel>
{
    BOOL _selecting;
    BOOL _selectionEnabled;
    BOOL _shouldShowPlaceholder;
    BOOL _containsUnverifiedPersons;
    BOOL _loadingPeopleSuggestions;
    NSString *_originalTitle;
    NSString *_title;
    NSString *_subtitle;
    PXSectionedSelectionManager *_selectionManager;
    NSArray *_recipients;
    NSURL *_shareURL;
    NSString *_shareUUID;
    PXRecipient *_originatorRecipient;
    NSUInteger _numberOfReceivedAssets;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _photosCount;
    long long _videosCount;
    long long _totalCount;
    long long _selectedPhotosCount;
    long long _selectedVideosCount;
    long long _selectedCount;
    NSSet *_disabledActionTypes;
    PXPhotosGlobalFooterViewModel *_footerViewModel;
}

@property(readonly, nonatomic, getter=isLoadingPeopleSuggestions) BOOL loadingPeopleSuggestions; // @synthesize loadingPeopleSuggestions=_loadingPeopleSuggestions;
@property(readonly, nonatomic) PXPhotosGlobalFooterViewModel *footerViewModel; // @synthesize footerViewModel=_footerViewModel;
@property(readonly, nonatomic) BOOL containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property(readonly, nonatomic) BOOL shouldShowPlaceholder; // @synthesize shouldShowPlaceholder=_shouldShowPlaceholder;
@property(readonly, nonatomic) NSSet *disabledActionTypes; // @synthesize disabledActionTypes=_disabledActionTypes;
@property(readonly, nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(readonly, nonatomic) long long selectedVideosCount; // @synthesize selectedVideosCount=_selectedVideosCount;
@property(readonly, nonatomic) long long selectedPhotosCount; // @synthesize selectedPhotosCount=_selectedPhotosCount;
@property(readonly, nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, nonatomic) long long videosCount; // @synthesize videosCount=_videosCount;
@property(readonly, nonatomic) long long photosCount; // @synthesize photosCount=_photosCount;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, nonatomic) NSUInteger numberOfReceivedAssets; // @synthesize numberOfReceivedAssets=_numberOfReceivedAssets;
@property(readonly, copy, nonatomic) PXRecipient *originatorRecipient; // @synthesize originatorRecipient=_originatorRecipient;
@property(readonly, nonatomic) BOOL selectionEnabled; // @synthesize selectionEnabled=_selectionEnabled;
@property(readonly, nonatomic, getter=isSelecting) BOOL selecting; // @synthesize selecting=_selecting;
@property(readonly, copy, nonatomic) NSString *shareUUID; // @synthesize shareUUID=_shareUUID;
@property(readonly, copy, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *originalTitle; // @synthesize originalTitle=_originalTitle;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)setPosterAsset:(id)arg1 posterMediaProvider:(id)arg2;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (id)mutableChangeObject;
@property(readonly, nonatomic) long long aggregateMediaTypeForSelection;
@property(readonly, nonatomic) long long aggregateMediaType;

@end

