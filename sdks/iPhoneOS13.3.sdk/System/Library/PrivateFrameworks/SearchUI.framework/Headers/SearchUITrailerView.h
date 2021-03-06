//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class SFPunchout, SearchUIButton, SearchUITrailersCardSectionView, TLKLabel, UIView;

@interface SearchUITrailerView : TLKStackView
{
    SearchUITrailersCardSectionView *_cardSectionView;
    SearchUIButton *_playButton;
    TLKLabel *_titleLabel;
    SFPunchout *_punchout;
    UIView *_centeredBoxView;
}

@property(retain, nonatomic) UIView *centeredBoxView; // @synthesize centeredBoxView=_centeredBoxView;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SearchUIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak SearchUITrailersCardSectionView *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
// - (void).cxx_destruct;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)playTrailer;
- (id)initWithMediaItem:(id)arg1 cardSectionView:(id)arg2;

@end

