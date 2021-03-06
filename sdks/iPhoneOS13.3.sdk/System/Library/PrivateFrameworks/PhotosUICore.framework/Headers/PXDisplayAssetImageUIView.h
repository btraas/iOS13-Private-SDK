//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDisplayAssetUIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class UIImageView;

@interface PXDisplayAssetImageUIView : PXDisplayAssetUIView <PXChangeObserver>
{
    UIImageView *_imageView;
}

// - (void).cxx_destruct;
- (void)_updateImageViewFilters;
- (void)isDisplayingFullQualityContentDidChange;
- (BOOL)isDisplayingFullQualityContent;
- (void)contentsRectDidChange;
- (void)placeholderImageFiltersDidChange;
- (double)loadingProgress;
- (void)imageProgressDidChange;
- (void)imageDidChange;
- (id)contentView;
- (long long)playbackStyle;

@end

