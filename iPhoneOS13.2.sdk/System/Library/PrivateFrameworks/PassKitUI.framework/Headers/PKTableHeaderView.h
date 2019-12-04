//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKCheckGlyphLayer, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PKTableHeaderView : UIView
{
    struct CGSize _originalImageViewSize;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    PKCheckGlyphLayer *_checkmarkLayer;
    _Bool _shouldResizeImageToFit;
    _Bool _accessoryViewsDisabled;
    unsigned long long _style;
    double _topPadding;
    double _bottomPadding;
    double _minimumHeight;
}

@property(readonly, nonatomic) PKCheckGlyphLayer *checkmarkLayer; // @synthesize checkmarkLayer=_checkmarkLayer;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool accessoryViewsDisabled; // @synthesize accessoryViewsDisabled=_accessoryViewsDisabled;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) _Bool shouldResizeImageToFit; // @synthesize shouldResizeImageToFit=_shouldResizeImageToFit;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)_updateCheckmarkColor;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)_updateAccessoryViews;
- (void)_updateFonts;
- (_Bool)_hasAccessibilityLargeText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)_sizeThatFitsExcludingImage:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIButton *actionButton;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)_updateImageView;
- (void)setImageViewImage:(id)arg1 withSize:(struct CGSize)arg2 animated:(_Bool)arg3;
- (void)setPassSnapshotUsingDefaultSize:(id)arg1 animated:(_Bool)arg2 needsCorners:(_Bool)arg3;
- (void)dealloc;

@end
