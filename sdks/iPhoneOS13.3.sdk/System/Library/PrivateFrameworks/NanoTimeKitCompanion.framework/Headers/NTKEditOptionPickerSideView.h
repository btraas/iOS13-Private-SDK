//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface NTKEditOptionPickerSideView : UIView
{
    double _contentAlpha;
    CGAffineTransform _contentTransform;
    UIView *_optionView;
}

@property(retain, nonatomic) UIView *optionView; // @synthesize optionView=_optionView;
// - (void).cxx_destruct;
- (void)_applyContentAlpha;
- (void)setRotationFromFront:(double)arg1;
- (void)applyContentTransform:(CGAffineTransform)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

