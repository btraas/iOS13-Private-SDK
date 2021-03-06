//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBarsController.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class PXActionPerformer, PXAssetActionManager, PXBarAppearance, PXCuratedLibraryViewModel, UILabel;

@interface PXCuratedLibraryBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate>
{
    PXAssetActionManager *_assetActionManager;
    UILabel *_selectModeCaptionLabel;
    PXCuratedLibraryViewModel *_viewModel;
    PXActionPerformer *_activeActionPerformer;
    PXActionPerformer *_lastActionPerformer;
}

@property(retain, nonatomic) PXActionPerformer *lastActionPerformer; // @synthesize lastActionPerformer=_lastActionPerformer;
@property(retain, nonatomic) PXActionPerformer *activeActionPerformer; // @synthesize activeActionPerformer=_activeActionPerformer;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
// - (void).cxx_destruct;
- (id)_defaultToolbarItemIdentifiers;
- (void)_invalidateToolbarItems;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(NSObject )arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(NSObject )arg2;
- (void)actionPerformer:(id)arg1 didChangeState:(NSUInteger)arg2;
- (void)handleCancelBarButtonItem:(id)arg1;
- (void)handleSelectBarButtonItem:(id)arg1;
- (void)_applyZoomLevel:(long long)arg1;
- (void)updateBars;
- (id)_identifierForActionType:(id)arg1;
- (id)barButtonItemForIdentifier:(id)arg1;
- (id)toolbarItemIdentifiers;
- (id)leftBarButtonItemIdentifiers;
- (id)rightBarButtonItemIdentifiers;
- (id)curatedLibraryViewController;
- (void)_updateSelectModeCaptionLabel;
@property(readonly, nonatomic) UILabel *selectModeCaptionLabel; // @synthesize selectModeCaptionLabel=_selectModeCaptionLabel;
@property(readonly, nonatomic) PXAssetActionManager *assetActionManager; // @synthesize assetActionManager=_assetActionManager;
@property(readonly, nonatomic) PXBarAppearance *barAppearance;
- (id)createAssetActionManagerForAssetReference:(id)arg1;
- (id)initWithCuratedLibraryViewController:(id)arg1 viewModel:(id)arg2;
- (id)init;

@end

