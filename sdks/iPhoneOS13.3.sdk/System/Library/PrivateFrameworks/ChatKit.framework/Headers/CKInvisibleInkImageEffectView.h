//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKInvisibleInkEffectView.h>


@class CAEmitterLayer, CALayer;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkImageEffectView : CKInvisibleInkEffectView <CAAnimationDelegate>
{
    CALayer *_blurredImageLayer;
    CALayer *_blurredImageContainerLayer;
    CALayer *_drawEmitterContainerLayer;
    CAEmitterLayer *_drawEmitterLayer;
    CALayer *_dustEmitterContainerLayer;
    CAEmitterLayer *_dustEmitterLayer;
}

@property(retain, nonatomic) CAEmitterLayer *dustEmitterLayer; // @synthesize dustEmitterLayer=_dustEmitterLayer;
@property(retain, nonatomic) CALayer *dustEmitterContainerLayer; // @synthesize dustEmitterContainerLayer=_dustEmitterContainerLayer;
@property(retain, nonatomic) CAEmitterLayer *drawEmitterLayer; // @synthesize drawEmitterLayer=_drawEmitterLayer;
@property(retain, nonatomic) CALayer *drawEmitterContainerLayer; // @synthesize drawEmitterContainerLayer=_drawEmitterContainerLayer;
@property(retain, nonatomic) CALayer *blurredImageContainerLayer; // @synthesize blurredImageContainerLayer=_blurredImageContainerLayer;
@property(retain, nonatomic) CALayer *blurredImageLayer; // @synthesize blurredImageLayer=_blurredImageLayer;
// - (void).cxx_destruct;
- (void)setPaused:(BOOL)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)endDustEmitterFingerEffects;
- (void)setRandomAttractorsEnabled:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)endDrawEmitterEffects;
- (void)disableBlending;
- (void)enableBlending;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)addDustRandomEmitterAnimationsWithSize:(CGSize)arg1;
- (void)setupDustEmitter;
- (void)setupDrawEmitter;
- (id)initWithFrame:(CGRect)arg1;

@end

