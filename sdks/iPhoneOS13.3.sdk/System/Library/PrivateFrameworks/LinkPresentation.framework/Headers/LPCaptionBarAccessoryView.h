//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface LPCaptionBarAccessoryView : LPComponentView
{
    long long _type;
    BOOL _shouldFlipHorizontally;
    UIColor *_color;
    UIImageView *_accessoryView;
}

// - (void).cxx_destruct;
- (id)_createImageViewWithImage:(id)arg1;
@property(readonly, nonatomic) CGSize size;
- (void)layoutComponentView;
- (id)ensureAccessoryView;
- (void)componentViewDidMoveToWindow;
- (id)initWithType:(long long)arg1 side:(long long)arg2;
- (id)init;

@end

