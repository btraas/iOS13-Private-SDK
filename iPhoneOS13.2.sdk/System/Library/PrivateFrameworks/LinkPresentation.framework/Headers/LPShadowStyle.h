//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface LPShadowStyle : NSObject
{
    double _radius;
    double _opacity;
    UIColor *_color;
}

+ (id)cardHeadingIconShadow;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (id)init;

@end
