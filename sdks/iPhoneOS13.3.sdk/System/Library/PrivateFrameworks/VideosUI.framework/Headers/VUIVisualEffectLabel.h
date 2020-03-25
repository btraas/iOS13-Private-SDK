//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIVisualEffectLabel : UIView
{
    UIVisualEffectView *_visualEffectView;
    VUILabel *_label;
}

+ (id)vibrantLabelWithLabel:(id)arg1;
@property(retain, nonatomic) VUILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateContentWithNewLabel:(id)arg1 oldLabel:(id)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithEffect:(id)arg1;

@end
