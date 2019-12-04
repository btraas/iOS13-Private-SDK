//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBSSceneUpdater-Protocol.h>
#import <FrontBoard/FBSWorkspaceScenesSource-Protocol.h>
#import <FrontBoard/FBSceneClient-Protocol.h>
#import <FrontBoard/FBSceneClientProvider-Protocol.h>

@class FBSSceneClientSettingsDiffInspector, FBSceneClientProviderInvalidationAction, NSMutableArray, NSMutableDictionary, NSString;
@protocol NSCopying;

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSWorkspaceScenesSource, FBSceneClient, FBSSceneUpdater, FBSceneClientProvider>
{
    _Bool _workspaceInitialized;
    NSMutableArray *_pendingSceneCreatesBeforeFBSWorkspaceInitialization;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    NSMutableDictionary *_localSceneInfoByIdentifier;
    NSMutableDictionary *_hostsByIdentifier;
    FBSSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
}

+ (id)sharedInstance;
- (void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)arg1 transitionContext:(id)arg2;
- (void)_updateLevelForScene:(id)arg1;
- (id)sceneWithIdentifier:(id)arg1;
- (id)scenes;
@property(readonly, nonatomic) NSObject<NSCopying> *identifier;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (id)endpoint;
- (id)hostProcess;
- (id)callOutQueue;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (void)unregisterHost:(id)arg1;
- (id)registerHost:(id)arg1 withInitialParameters:(id)arg2;
- (void)registerInvalidationAction:(id)arg1;
- (id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3;
- (id)fbsSceneWithIdentifier:(id)arg1;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
