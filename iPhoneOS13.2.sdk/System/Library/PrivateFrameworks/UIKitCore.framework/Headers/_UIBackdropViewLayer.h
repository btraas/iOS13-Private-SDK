//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class _UIBackdropView;

__attribute__((visibility("hidden")))
@interface _UIBackdropViewLayer : CALayer
{
    _UIBackdropView *_backdropView;
}

@property(nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (void)dealloc;
- (void)renderInContext:(CGContextRef )arg1;

@end
