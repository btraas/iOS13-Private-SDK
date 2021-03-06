//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDevicePowerObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutDataAccumulatorObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionObserver-Protocol.h>

@class HDAlertSuppressor, HDAssertion, HDLocationManager, HDProfile, HDWatchAppStateMonitor, HDWorkoutLocationSmoother, HDWorkoutSessionServer, HKObserverSet, NSHashTable, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDWorkoutManager : NSObject <HDDevicePowerObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDWorkoutDataAccumulatorObserver, HDWorkoutSessionObserver>
{
    HDWorkoutSessionServer *_currentWorkout;
    HDAssertion *_currentWorkoutAssertion;
    HDWorkoutSessionServer *_nextWorkout;
    NSMutableDictionary *_sessionServers;
    NSMutableDictionary *_sessionCreationHandlers;
    NSHashTable *_observerTable;
    HKObserverSet *_sessionObservers;
    HDLocationManager *_locationManager;
    HDWatchAppStateMonitor *_appStateMonitor;
    BOOL _hasPerformedPostLaunchSessionRecovery;
    NSMutableArray *_postLaunchRecoveryBlocks;
    NSObject<OS_dispatch_queue> *_postLaunchRecoveryCallbackQueue;
    HKObserverSet *_currentWorkoutObservers;
    HDProfile *_profile;
    HDAlertSuppressor *_alertSuppressor;
    NSObject<OS_dispatch_queue> *_queue;
    HDWorkoutLocationSmoother *_locationSmoother;
}

@property(retain, nonatomic) HDWorkoutLocationSmoother *locationSmoother; // @synthesize locationSmoother=_locationSmoother;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HDLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) HDAlertSuppressor *alertSuppressor; // @synthesize alertSuppressor=_alertSuppressor;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (BOOL)isPowerSavingSupportedForCurrentActivity;
- (void)endHeartRateRecovery;
@property(readonly, nonatomic) BOOL isInHeartRateRecovery;
- (void)_queue_logWorkoutStateToPowerLog;
- (void)_queue_updateFakingDataInSimulator;
- (void)_postWorkoutUpdatedNotification;
- (id)_workoutSessionNotCurrentError:(id)arg1;
- (void)_queue_sessionFinished:(id)arg1;
- (void)_queue_setCurrentWorkout:(id)arg1;
- (void)workoutSession:(id)arg1 didUpdateDataAccumulator:(id)arg2;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (id)unitTest_currentWorkoutSession;
- (void)unitTest_finishAllDetachedWorkoutBuilders;
- (void)unitTest_smoothRoute:(id)arg1 withSmoother:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)hk_fakeStopEventWithDate:(id)arg1;
- (void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(long long)arg2;
- (void)removeWorkoutSessionObserver:(id)arg1;
- (void)addWorkoutSessionObserver:(id)arg1 queue:(id)arg2;
- (void)removeWorkoutEventObserver:(id)arg1;
- (void)addWorkoutEventObserver:(id)arg1;
- (void)devicePowerMonitor:(id)arg1 primaryPowerSourceIsCharging:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (id)diagnosticDescription;
- (void)pauseActiveWorkoutsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)unregisterCurrentWorkoutObserver:(id)arg1;
- (void)registerCurrentWorkoutObserver:(id)arg1;
- (void)getCurrentWorkoutSnapshotWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)performWhenPostLaunchSessionRecoveryHasCompleted:(id /* CDUnknownBlockType */)arg1;
- (void)_recoverCurrentWorkoutSessionAfterLaunch;
- (void)_notifyForPostLaunchSessionRecovery;
- (void)_finishAllWorkoutsWithExclusionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_recoverActiveWorkoutSessionServersIfNeeded;
- (void)_scheduleFinishForDetachedWorkoutBuilders;
- (void)generatePauseOrResumeRequestWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)currentWorkoutClient;
- (long long)_queue_currentWorkoutLocationType;
- (long long)currentWorkoutLocationType;
- (NSUInteger)_queue_currentWorkoutActivityType;
- (NSUInteger)currentWorkoutActivityType;
- (BOOL)hasAnyActiveWorkouts;
- (void)_finishAllDetachedWorkoutBuilders;
- (void)_scheduleFinishAllDetachedWorkoutBuilders;
- (id)_activeSessionIdentifiers;
- (void)recoverWorkoutSessionForClient:(id)arg1 server:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)finishAllWorkoutsForClient:(id)arg1 error:(id )arg2;
- (id)_queue_sessionServerForRecoveryForClient:(id)arg1;
- (void)_sendStartWorkoutAppResponse:(id /* CDUnknownBlockType */)arg1 error:(id)arg2;
- (void)receivedStartWorkoutAppRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_queue_beginTransitionToWorkoutSession:(id)arg1;
- (id)sessionServerWithConfiguration:(id)arg1 sessionUUID:(id)arg2 taskServer:(id)arg3 error:(id )arg4;
- (void)sessionServerFromSessionIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)recoveredWorkoutSessionServerWithIdentifier:(id)arg1 error:(id )arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)_queue_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_receivedStartWorkoutAppRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;

@end

