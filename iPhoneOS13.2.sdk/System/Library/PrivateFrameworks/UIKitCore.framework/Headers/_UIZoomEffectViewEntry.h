//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

__attribute__((visibility("hidden")))
@interface _UIZoomEffectViewEntry : _UIVisualEffectViewEntry
{
    double _zoomAmount;
}

@property(nonatomic) double zoomAmount; // @synthesize zoomAmount=_zoomAmount;
- (id)description;
- (void)convertToIdentity;
- (_Bool)canTransitionToEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (_Bool)shouldAnimateProperty:(id)arg1;

@end
