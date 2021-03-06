//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView;

@interface TSDCheckableTableViewCell : UITableViewCell
{
    UIButton *mImageButton;
    UIImageView *mCheckmarkImageView;
    BOOL mChecked;
    BOOL mShowsCheckboxOnRight;
}

@property(nonatomic) BOOL checked; // @synthesize checked=mChecked;
@property(readonly, nonatomic) BOOL showsCheckboxOnRight; // @synthesize showsCheckboxOnRight=mShowsCheckboxOnRight;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 forState:(NSUInteger)arg2;
- (id)imageForState:(NSUInteger)arg1;
- (void)setCheckmarkImage:(id)arg1 forState:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(BOOL)arg2 style:(long long)arg3;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(BOOL)arg2;

@end

