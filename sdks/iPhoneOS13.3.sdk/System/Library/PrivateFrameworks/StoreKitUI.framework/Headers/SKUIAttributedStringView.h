//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIReusableView-Protocol.h>

@class NSArray, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, SKUIAttributedStringLayout, UIColor;
@protocol SKUILinkHandler;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringView : UIView <SKUIReusableView>
{
    double _calculatedTopInset;
    long long _firstLineTopInset;
    SKUIAttributedStringLayout *_layout;
    NSLayoutManager *_layoutManager;
    NSArray *_requiredBadges;
    long long _stringTreatment;
    BOOL _touchInside;
    _NSRange _trackingRange;
    BOOL _trackingTouch;
    CGRect _textBounds;
    UIColor *_textColor;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    UIColor *_treatmentColor;
    BOOL _containsLinks;
    BOOL _textColorFollowsTintColor;
    id <SKUILinkHandler> _linkDelegate;
    long long _badgePlacement;
}

+ (CGSize)sizeWithLayout:(id)arg1 treatment:(long long)arg2;
@property(nonatomic) BOOL textColorFollowsTintColor; // @synthesize textColorFollowsTintColor=_textColorFollowsTintColor;
@property(nonatomic) long long badgePlacement; // @synthesize badgePlacement=_badgePlacement;
@property(nonatomic) long long firstLineTopInset; // @synthesize firstLineTopInset=_firstLineTopInset;
@property(retain, nonatomic) UIColor *treatmentColor; // @synthesize treatmentColor=_treatmentColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long stringTreatment; // @synthesize stringTreatment=_stringTreatment;
@property(copy, nonatomic) NSArray *requiredBadges; // @synthesize requiredBadges=_requiredBadges;
@property(nonatomic) __weak id <SKUILinkHandler> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(retain, nonatomic) SKUIAttributedStringLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) BOOL containsLinks; // @synthesize containsLinks=_containsLinks;
// - (void).cxx_destruct;
- (void)_setTouchInside:(BOOL)arg1;
- (void)_setTrackingTouch:(BOOL)arg1;
- (void)_reloadTopInset;
- (void)tintColorDidChange;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)_touchInsideLinkText:(CGPoint)arg1 linkTextRange:(_NSRange )arg2;
- (void)_setupTapLocatorContainer;
- (void)drawRect:(CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL usesTallCharacterSet;
@property(readonly, nonatomic) double firstBaselineOffset;
@property(readonly, nonatomic) double baselineOffset;
- (void)viewWasRecycled;
- (id)initWithFrame:(CGRect)arg1;

@end

