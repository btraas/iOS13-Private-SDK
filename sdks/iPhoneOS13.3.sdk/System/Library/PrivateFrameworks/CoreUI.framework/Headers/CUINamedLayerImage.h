//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedImage.h>

@interface CUINamedLayerImage : CUINamedImage
{
    CGRect _frame;
    double _opacity;
    int _blendMode;
    BOOL _fixedFrame;
}

@property(nonatomic) BOOL fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) CGRect frame; // @synthesize frame=_frame;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(NSUInteger)arg3;

@end

