//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureRemoteObjectDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSXPCListener, PGPictureInPictureApplication, PGPictureInPictureRemoteObject;
@protocol OS_dispatch_queue, PGPictureInPictureControllerDelegate;

@interface PGPictureInPictureController : NSObject <NSXPCListenerDelegate, PGPictureInPictureRemoteObjectDelegate>
{
    NSMutableSet *_pictureInPictureRemoteObjects;
    NSMutableSet *_pictureInPictureRemoteObjectsSupportingActiveSessionCancellationOnStart;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    PGPictureInPictureRemoteObject *_activePictureInPictureRemoteObject;
    PGPictureInPictureRemoteObject *_suspendedPictureInPictureRemoteObject;
    id <PGPictureInPictureControllerDelegate> _delegate;
    struct {
        unsigned int pictureInPictureController_didCreatePictureInPictureViewController:1;
        unsigned int pictureInPictureController_willDestroyPictureInPictureViewController:1;
        unsigned int pictureInPictureController_willHidePictureInPictureViewController:1;
        unsigned int pictureInPictureController_didHidePictureInPictureViewController:1;
        unsigned int pictureInPictureController_shouldCancelPictureInPictureForApplication_whenStartingPictureInPictureForApplication:1;
        unsigned int pictureInPictureController_shouldDenyNewConnection:1;
    } _delegateRespondsTo;
    BOOL _pictureInPictureActive;
    NSSet *_pictureInPictureApplications;
    PGPictureInPictureApplication *_activePictureInPictureApplication;
}

+ (BOOL)isPictureInPictureSupported;
@property(readonly, nonatomic) PGPictureInPictureApplication *activePictureInPictureApplication; // @synthesize activePictureInPictureApplication=_activePictureInPictureApplication;
@property(readonly, nonatomic) NSSet *pictureInPictureApplications; // @synthesize pictureInPictureApplications=_pictureInPictureApplications;
@property(readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
// - (void).cxx_destruct;
- (void)pictureInPictureRemoteObject:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didShowPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willShowPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
- (BOOL)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(id)arg1;
- (BOOL)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(id)arg1;
- (BOOL)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (BOOL)_pictureInPictureRemoteObjectIsFaceTime:(id)arg1;
- (id)_remoteObjectThatCanCancelPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id )arg3;
- (id)_remoteObjectThatCanStopPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id )arg3;
- (id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id )arg3;
- (id)_remoteObjectForPictureInPictureApplication:(id)arg1 passingTest:(id /* CDUnknownBlockType */)arg2 error:(id )arg3;
- (id)_remoteObjectsForPictureInPictureApplication:(id)arg1;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureInterruptionBegan;
- (void)cancelPictureInPictureForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (void)stopPictureInPictureForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (CGSize)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (void)cancelPictureInPictureForApplication:(id)arg1;
- (void)stopPictureInPictureForApplication:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1;
- (CGSize)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
- (CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
@property(nonatomic) __weak id <PGPictureInPictureControllerDelegate> delegate;
@property(readonly, nonatomic) BOOL isStoppingPictureInPictureForAlert;
@property(readonly, nonatomic) BOOL isStartingStoppingOrCancellingPictureInPicture;
- (void)dealloc;
- (id)init;

@end

