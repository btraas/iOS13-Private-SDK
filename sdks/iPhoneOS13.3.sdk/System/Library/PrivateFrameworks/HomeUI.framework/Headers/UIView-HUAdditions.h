//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HULayoutAnchorProviding-Protocol.h>

@interface UIView (HUAdditions) <HULayoutAnchorProviding>
+ (void)hu_enableAnimations:(BOOL)arg1 forBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)hu_isDescendantOfPickerView;
- (BOOL)hu_isHomeAffordancePresent;
- (void)hu_autoSizeByConstrainingWidth:(double)arg1;
- (void)hu_traverseViewHierarchy:(id /* CDUnknownBlockType */)arg1;
- (void)hu_setFramePreservingTransform:(CGRect)arg1;
- (CGRect)hu_frameInGlobalCoordinateSpace;
- (CGPoint)hu_centerInGlobalCoordinateSpace;
@end

