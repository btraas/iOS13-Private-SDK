//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UISegmentedControlCacheKey : NSObject <NSCopying>
{
    double _size;
    NSUInteger _state;
    CGColor _primaryColor;
}

- (void)dealloc;
- (BOOL)isEqualToCacheKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCornerRadius:(double)arg1 state:(NSUInteger)arg2 primaryColor:(CGColor )arg3;
- (id)initWithSize:(int)arg1 primaryColor:(CGColor )arg2 background:(BOOL)arg3;

@end
