//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TVRatingBadgeLayout;

@interface TVRatingBadgeView : UIView
{
    TVRatingBadgeLayout *_ratingBadgeLayout;
    double _ratingValue;
}

+ (id)ratingBadgeViewWithValue:(double)arg1 layout:(id)arg2 existingBadgeView:(id)arg3;
@property(nonatomic) double ratingValue; // @synthesize ratingValue=_ratingValue;
@property(retain, nonatomic) TVRatingBadgeLayout *ratingBadgeLayout; // @synthesize ratingBadgeLayout=_ratingBadgeLayout;
- (double)_circleRadius;
- (id)_halfStarImage;
- (id)_starImage;
- (double)_starHeight;
- (struct CGSize)_starSize;
- (id)_ratingStyle;
- (double)_interitemSpacing;
- (id)_tintColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;

@end
