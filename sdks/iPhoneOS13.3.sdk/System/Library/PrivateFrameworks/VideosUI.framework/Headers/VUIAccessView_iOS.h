//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/TVCarouselViewDataSource-Protocol.h>

@class NSArray, UIButton, UILabel, UILayoutGuide, UIScrollView, UIStackView, _TVCarouselView;

__attribute__((visibility("hidden")))
@interface VUIAccessView_iOS : UIView <TVCarouselViewDataSource>
{
    NSArray *_apps;
    UILayoutGuide *_titlePlacementGuide;
    UIStackView *_scrollStack;
    UILabel *_titleLabel;
    UIScrollView *_bodyScroll;
    UILabel *_bodyLabel;
    UIStackView *_logoStack;
    UIStackView *_bottomStack;
    UIButton *_allowButton;
    UIButton *_disallowButton;
    UIButton *_nackButton;
    UILabel *_privacyLabel;
    UIButton *_seeAllButton;
    _TVCarouselView *_carouselView;
    BOOL _didLayout;
    UIView *_privacyView;
}

+ (CGSize)iconSize;
@property(retain, nonatomic) UIView *privacyView; // @synthesize privacyView=_privacyView;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (id)_imageViewForIndex:(NSUInteger)arg1;
- (id)_buildLogoStack;
- (id)_buildCarousel;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(NSUInteger)arg2;
- (NSUInteger)numberOfItemsInCarouselView:(id)arg1;
- (void)layoutSubviews;
- (void)showNackScreen;
- (void)setFooter:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)bodyScroll;
- (id)nackButton;
- (id)seeAllButton;
- (id)disallowButton;
- (id)allowButton;
- (void)dealloc;
- (id)initWithApps:(id)arg1;

@end

