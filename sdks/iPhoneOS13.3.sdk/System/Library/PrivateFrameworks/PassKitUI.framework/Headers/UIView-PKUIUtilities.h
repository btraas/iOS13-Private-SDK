//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (PKUIUtilities)
+ (void)pkui_animateUsingFactory:(id)arg1 withDelay:(double)arg2 options:(NSUInteger)arg3 animations:(id /* CDUnknownBlockType */)arg4 completion:(id /* CDUnknownBlockType */)arg5;
+ (void)pkui_animateUsingOptions:(NSUInteger)arg1 delay:(double)arg2 velocity:(double)arg3 animations:(id /* CDUnknownBlockType */)arg4 completion:(id /* CDUnknownBlockType */)arg5;
+ (void)pkui_animateUsingOptions:(NSUInteger)arg1 delay:(double)arg2 animations:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
+ (void)pkui_animateUsingOptions:(NSUInteger)arg1 animations:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)pkui_setExcludedFromScreenCapture:(BOOL)arg1;
- (CGRect)pkui_readableContentBoundsWithMargins:(UIEdgeInsets)arg1;
- (id)pkui_viewControllerFromResponderChain;
- (id)pkui_translationAnimation;
- (void)addTransformSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;
- (void)addDefaultTransformSpringWithStartTime:(double)arg1;
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 velocity:(double)arg5 timing:(id)arg6;
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;
- (void)addDefaultTranslationSpringWithVelocity:(double)arg1 startTime:(double)arg2;
- (BOOL)pkui_setBounds:(CGRect)arg1 position:(CGPoint)arg2 animated:(BOOL)arg3;
- (BOOL)pkui_setFrame:(CGRect)arg1 animated:(BOOL)arg2;
- (void)pkui_smallShakeWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)pkui_shakeWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)pkui_setMaskType:(NSUInteger)arg1;
@end

