//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAnchorConstraints-Protocol.h>

@class NSArray, NSMutableArray;

@interface PXGAnchorConstraintsBuilder : NSObject <PXGAnchorConstraints>
{
    NSMutableArray *_constraints;
}

// - (void).cxx_destruct;
- (void)_keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(NSUInteger)arg3 inequality:(long long)arg4 visibleEdge:(unsigned int)arg5 offset:(double)arg6;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(NSUInteger)arg3 greaterThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(NSUInteger)arg3 lessThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepVisiblePortionOfSpriteWithReference:(id)arg1 referencingOptions:(NSUInteger)arg2 padding:(UIEdgeInsets)arg3 visuallyStableForAttribute:(long long)arg4;
- (void)keepSpriteWithReference:(id)arg1 referencingOptions:(NSUInteger)arg2 visuallyStableForAttribute:(long long)arg3;
@property(readonly, copy, nonatomic) NSArray *constraints;
- (id)init;

@end

