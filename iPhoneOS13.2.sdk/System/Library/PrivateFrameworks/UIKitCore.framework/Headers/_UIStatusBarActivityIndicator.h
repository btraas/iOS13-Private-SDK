//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIActivityIndicatorView.h>

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSString, UIAccessibilityHUDItem;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityIndicator : UIActivityIndicatorView <_UIStatusBarDisplayable>
{
    struct UIEdgeInsets _alignmentRectInsets;
}

@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (void)applyStyleAttributes:(id)arg1;
@property(readonly, nonatomic) _Bool wantsCrossfade;

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
@property(readonly) Class superclass;

@end
