//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PKPaymentTransactionInstallmentCollectionViewCell : PKDashboardCollectionViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_tertiaryLabel;
    UIImage *_icon;
    NSString *_title;
    NSString *_subtitle;
    NSString *_tertiaryText;
}

@property(copy, nonatomic) NSString *tertiaryText; // @synthesize tertiaryText=_tertiaryText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
// - (void).cxx_destruct;
- (double)_maxWidthForTransactionCellInWidth:(double)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

