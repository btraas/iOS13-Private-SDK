//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKMotionManagerClientProtocol-Protocol.h>
#import <PassKitUIFoundation/SCNSceneRendererDelegate-Protocol.h>

@class MISSING_TYPE, SCNMaterial, SCNView;
@protocol PK3DLiveCardViewDelegate;

@interface PK3DCardView : UIView <PKMotionManagerClientProtocol, SCNSceneRendererDelegate>
{
    SCNView *_sceneView;
    SCNMaterial *_cardMaterial;
    int _design;
    MISSING_TYPE *_lastRollPitch;
    BOOL _renderedOnce;
    BOOL _motionEnabled;
    BOOL _invalidated;
    id <PK3DLiveCardViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PK3DLiveCardViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)didMoveToWindow;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;
- 
- (void)setMotionEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (void)renderSceneWithTextures:(id)arg1 shaders:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

