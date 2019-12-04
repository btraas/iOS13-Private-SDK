//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SSChromePlaceholderView, UIColor;

@interface SSChromePlaceholderViewController : UIViewController
{
    SSChromePlaceholderView *_placeholderView;
}

@property(nonatomic) double contentAlpha;
@property(readonly, nonatomic) struct CGRect screenshotContentFrame;
@property(readonly, nonatomic) double cropsCornerLineWidth;
@property(readonly, nonatomic) double cropsCornerEdgeLength;
@property(readonly, nonatomic) double cropsCornerContentPadding;
@property(readonly, nonatomic) UIColor *cropsCornerColor;
@property(readonly, nonatomic) long long backgroundBlurEffectStyle;
- (int)_preferredStatusBarVisibility;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;

@end
