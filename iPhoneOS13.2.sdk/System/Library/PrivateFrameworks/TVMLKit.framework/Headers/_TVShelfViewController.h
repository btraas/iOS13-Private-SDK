//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVMLCollectionViewController.h>

#import <TVMLKit/TVShelfViewLayoutDelegate-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSIndexPath, NSString;
@protocol __TVShelfViewControllerDelegate;

@interface _TVShelfViewController : _TVMLCollectionViewController <TVShelfViewLayoutDelegate, UICollectionViewDelegateFlowLayout>
{
    NSIndexPath *_pendingPreviewedIndexPath;
    NSIndexPath *_lastPreviewedIndexPath;
    double _lastPreviewDelay;
    unsigned long long _autohighlightScrollPosition;
    _Bool _configureForListTemplate;
    long long _listTemplateAlignment;
    struct {
        _Bool hasUpdateRelatedView;
        _Bool hasDidSelectItemAtIndexPath;
        _Bool hasDidPlayItemAtIndexPath;
        _Bool hasDidSettleOnItemAtIndexPath;
        _Bool hasDidSnapToItemAtIndexPath;
        _Bool hasFocusDependentMethods;
    } _delegateFlags;
    _Bool _centered;
    id <__TVShelfViewControllerDelegate> _delegate;
    unsigned long long _speedBumpEdges;
    long long _prominentSectionIndex;
}

+ (void)_contentForCell:(id)arg1 shouldHide:(_Bool)arg2;
@property(nonatomic) long long prominentSectionIndex; // @synthesize prominentSectionIndex=_prominentSectionIndex;
@property(nonatomic, getter=isCentered) _Bool centered; // @synthesize centered=_centered;
@property(nonatomic) unsigned long long speedBumpEdges; // @synthesize speedBumpEdges=_speedBumpEdges;
@property(nonatomic) __weak id <__TVShelfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWithViewElement:(id)arg1;
- (void)_didSettleOnItemAtIndexPath:(id)arg1;
- (void)_delayedUpdatePreview;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
@property(nonatomic) _Bool hideHeader;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)updateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;
- (struct CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)preferredScrollPosition;
- (_Bool)contentFlowsVertically;
- (id)makeCollectionViewWithFrame:(struct CGRect)arg1;
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;
- (void)didMoveToParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
