//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUIFoundation/PKMotionManagerClientProtocol-Protocol.h>

@class NSCache, NSMutableArray, NSString, PKMotionManager, SCNMaterial;
@protocol OS_dispatch_queue;

@interface PKPeerPayment3DStore : NSObject <PKMotionManagerClientProtocol>
{
    NSCache *_cache;
    SCNMaterial *_textMaterial;
    NSObject<OS_dispatch_queue> *_scenesQueue;
    NSObject<OS_dispatch_queue> *_sceneLoadingQueue;
    NSMutableArray *_activeScenes;
    // Error parsing type: {?="columns"[4]}, name: _rotationMatrix
    // Error parsing type: , name: _skew
    // Error parsing type: , name: _lastRollPitch
    // Error parsing type: {?="columns"[4]}, name: _staticRotationMatrix
    // Error parsing type: , name: _staticSkew
    PKMotionManager *_motionManager;
}

+ (id)sharedInstance;
- (id)nodeForCharacter:(id)arg1;
- (void)charactersForText:(id)arg1 completion:(id /* block */)arg2 synchronously:(_Bool)arg3;
- (id)material;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;
- (void)setRollPitch: /* Error: Ran out of types for this method. */;
- (void)sceneDidBecomeInactive:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)relinquishScene:(id)arg1;
- (void)newSceneWithCompletion:(id /* block */)arg1 synchronously:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
