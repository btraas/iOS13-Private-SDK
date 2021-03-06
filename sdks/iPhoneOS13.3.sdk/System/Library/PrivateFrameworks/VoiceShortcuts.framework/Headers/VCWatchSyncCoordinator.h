//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/PSYSyncCoordinatorDelegate-Protocol.h>
#import <VoiceShortcuts/VCCompanionSyncServiceDelegate-Protocol.h>

@class NSMutableSet, PSYSyncCoordinator, VCCompanionSyncService, VCDaemonXPCEventHandler;
@protocol OS_dispatch_queue, VCSyncDataEndpoint;

@interface VCWatchSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, VCCompanionSyncServiceDelegate>
{
    PSYSyncCoordinator *_pairedSyncCoordinator;
    NSMutableSet *_startedSessions;
    id <VCSyncDataEndpoint> _syncDataEndpoint;
    VCDaemonXPCEventHandler *_eventHandler;
    NSObject<OS_dispatch_queue> *_queue;
    VCCompanionSyncService *_service;
}

@property(readonly, nonatomic) VCCompanionSyncService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) id <VCSyncDataEndpoint> syncDataEndpoint; // @synthesize syncDataEndpoint=_syncDataEndpoint;
@property(readonly, nonatomic) NSMutableSet *startedSessions; // @synthesize startedSessions=_startedSessions;
@property(readonly, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator; // @synthesize pairedSyncCoordinator=_pairedSyncCoordinator;
// - (void).cxx_destruct;
- (void)handleDidUnpairNotification:(id)arg1;
- (void)handleDeviceDidChangeVersionNotification;
- (void)stopObservingWatchChangeNotifications;
- (void)startObservingWatchChangeNotifications;
- (void)companionSyncService:(id)arg1 outgoingSyncSession:(id)arg2 didUpdateProgress:(double)arg3;
- (void)companionSyncService:(id)arg1 outgoingSyncSessionDidFinishSendingChanges:(id)arg2;
- (void)companionSyncService:(id)arg1 didRejectSessionWithError:(id)arg2;
- (void)companionSyncService:(id)arg1 didFinishSyncSession:(id)arg2 withError:(id)arg3;
- (long long)companionSyncService:(id)arg1 typeForSession:(id)arg2;
- (BOOL)companionSyncServiceShouldStartSession:(id)arg1;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)requestSyncIfUnrestricted;
- (void)dealloc;
- (id)initWithSyncDataEndpoint:(id)arg1 eventHandler:(id)arg2;

@end

