//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface _PKStrokeClipPlane : NSObject <NSCopying>
{
    struct CGPoint _origin;
    struct CGPoint _normal;
}

@property(readonly, nonatomic) struct CGPoint normal; // @synthesize normal=_normal;
@property(readonly, nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
- (_Bool)isEqualToClipPlane:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (double)distanceToPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOrigin:(struct CGPoint)arg1 normal:(struct CGPoint)arg2;

@end
