//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol HUQuickControlAuxiliaryView;

@interface HUQuickControlAuxiliaryHostView : UIView
{
    UIView<HUQuickControlAuxiliaryView> *_auxiliaryView;
}

@property(retain, nonatomic) UIView<HUQuickControlAuxiliaryView> *auxiliaryView; // @synthesize auxiliaryView=_auxiliaryView;
// - (void).cxx_destruct;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;

@end

