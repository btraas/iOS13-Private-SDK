//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface TKPickerTableViewCell : UITableViewCell
{
    _Bool _shouldTintTextLabel;
    UIColor *_textLabelColor;
}

@property(nonatomic) _Bool shouldTintTextLabel; // @synthesize shouldTintTextLabel=_shouldTintTextLabel;
@property(retain, nonatomic) UIColor *textLabelColor; // @synthesize textLabelColor=_textLabelColor;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (void)_updateTextLabelColor;
- (void)tintColorDidChange;

@end
