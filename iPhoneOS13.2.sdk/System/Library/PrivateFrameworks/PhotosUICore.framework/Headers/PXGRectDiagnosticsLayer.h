//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray, PXGLayout;

@interface PXGRectDiagnosticsLayer : CALayer
{
    PXGLayout *_layout;
    NSArray *_rectDiagnosticsProviders;
}

+ (id)defaultRectDiagnosticsProviders;
@property(copy, nonatomic) NSArray *rectDiagnosticsProviders; // @synthesize rectDiagnosticsProviders=_rectDiagnosticsProviders;
@property(retain, nonatomic) PXGLayout *layout; // @synthesize layout=_layout;
- (void)update;

@end
