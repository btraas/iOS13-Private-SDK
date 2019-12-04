//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView;

@interface NTKChronoButton : UIControl
{
    UIImageView *_ringView;
    UIImageView *_fillView;
    struct CGPoint _originalCenter;
    UIColor *_color;
    UIColor *_swapColor;
    UIColor *_highlightColor;
    UIColor *_ringColor;
    UIColor *_ringSwapColor;
    struct UIEdgeInsets _touchEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
@property(retain, nonatomic) UIColor *ringSwapColor; // @synthesize ringSwapColor=_ringSwapColor;
@property(retain, nonatomic) UIColor *ringColor; // @synthesize ringColor=_ringColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *swapColor; // @synthesize swapColor=_swapColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateColors;
- (void)_performTouchAnimationThroughColor:(id)arg1 toColor:(id)arg2 toRingColor:(id)arg3;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
