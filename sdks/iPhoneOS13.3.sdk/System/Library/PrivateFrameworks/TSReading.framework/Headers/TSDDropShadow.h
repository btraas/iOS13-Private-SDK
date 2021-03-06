//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDShadow.h>

@interface TSDDropShadow : TSDShadow
{
}

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (CGImage )newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (CGRect)boundsForRep:(id)arg1;
- (CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (id)newShadowClampedForSwatches;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)shadowType;
- (id)initWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(CGColor )arg5 enabled:(BOOL)arg6;

@end

