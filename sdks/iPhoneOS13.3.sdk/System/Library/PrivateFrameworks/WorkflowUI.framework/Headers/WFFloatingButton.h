//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class WFGradient;

@interface WFFloatingButton : UIButton
{
}

+ (Class)layerClass;
- (void)traitCollectionDidChange:(id)arg1;
- (CGSize)intrinsicContentSize;
- (void)applyConfiguration:(id)arg1;
@property(copy, nonatomic) WFGradient *gradient;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithConfiguration:(id)arg1 frame:(CGRect)arg2;

@end

