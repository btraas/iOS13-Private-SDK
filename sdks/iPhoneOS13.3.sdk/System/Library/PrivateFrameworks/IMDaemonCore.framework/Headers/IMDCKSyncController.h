//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

#import <IMDaemonCore/IMDCKAbstractSyncControllerDelegate-Protocol.h>
#import <IMDaemonCore/IMDXPCEventStreamHandlerDelegate-Protocol.h>
#import <IMDaemonCore/IMSystemMonitorListener-Protocol.h>

@class IMTimer, NSDate, NSTimer;

@interface IMDCKSyncController : IMDCKAbstractSyncController <IMDXPCEventStreamHandlerDelegate, IMSystemMonitorListener, IMDCKAbstractSyncControllerDelegate>
{
    BOOL _shouldReloadConversations;
    NSDate *_syncStartDate;
    NSTimer *_longRunningSyncTimer;
    IMTimer *_nightlySyncTimer;
    long long _initialSyncAttempts;
    NSDate *_lastLogDumpDate;
    NSDate *_lastRestoreFailureLogDumpDate;
    NSTimer *_reloadTimer;
}

+ (id)sharedInstance;
@property(retain) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property BOOL shouldReloadConversations; // @synthesize shouldReloadConversations=_shouldReloadConversations;
@property(retain, nonatomic) NSDate *lastRestoreFailureLogDumpDate; // @synthesize lastRestoreFailureLogDumpDate=_lastRestoreFailureLogDumpDate;
@property(retain, nonatomic) NSDate *lastLogDumpDate; // @synthesize lastLogDumpDate=_lastLogDumpDate;
@property(nonatomic) long long initialSyncAttempts; // @synthesize initialSyncAttempts=_initialSyncAttempts;
@property(retain, nonatomic) IMTimer *nightlySyncTimer; // @synthesize nightlySyncTimer=_nightlySyncTimer;
@property(retain, nonatomic) NSTimer *longRunningSyncTimer; // @synthesize longRunningSyncTimer=_longRunningSyncTimer;
@property(retain, nonatomic) NSDate *syncStartDate; // @synthesize syncStartDate=_syncStartDate;
// - (void).cxx_destruct;
- (BOOL)logCloudKitAnalytics;
- (void)_submitCloudKitAnalyticWithOperationGroupName:(id)arg1 analyticDictionary:(id)arg2;
- (BOOL)_serverDeniesDailySyncStateAnalytics;
- (BOOL)_serverDeniesPeriodicSyncAnalytics;
- (id)_periodicSyncStateDictionary;
- (BOOL)_completedPeriodicSyncSinceFirstFullSyncForLastSyncDate:(id)arg1 firstFullSyncCompletedDate:(id)arg2;
- (id)_dailySyncStateDictionary;
- (void)_addDatesDefaultsIfNeededToDictionary:(id)arg1;
- (void)_addDatesDefaultsIfNeededToDictionary:(id)arg1 keys:(id)arg2;
- (void)clearAnalyticDefaultsAndLocalSyncState;
- (void)performOneTimeAccountUpgradeCheckIfNeeded;
- (BOOL)enforceAccountsMatchForMocAndShowDialogIfNeeded;
- (void)handleAKUserInfoChangedNotification:(id)arg1;
- (void)updateSecurityLevelDowngradedIfNeeded:(id /* CDUnknownBlockType */)arg1;
- (void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3;
- (id)syncStateDebuggingInfo:(id)arg1;
- (BOOL)isSyncing;
- (void)_noteMeticsForSyncEndedWithSuccces:(BOOL)arg1;
- (void)syncChatsWithMessageContext:(id)arg1;
- (void)_writeDownSyncDateUseManatee:(BOOL)arg1;
- (long long)_manualSyncAttemptCount;
- (long long)_periodicSyncAttemptCount;
- (void)_noteSyncEnded;
- (void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2;
- (void)_noteDownSyncStartedWithIsPeriodicSync:(BOOL)arg1;
- (void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2;
- (void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1 useNonHSA2ManateeDatabase:(BOOL)arg2;
- (void)_ifCloudKitAbleToSyncIsFullSync:(BOOL)arg1 activity:(id)arg2 callBlock:(id /* CDUnknownBlockType */)arg3;
- (void)_callSyncWithCompletion:(id /* CDUnknownBlockType */)arg1 activity:(id)arg2;
- (void)_syncChatsWithActivity:(id)arg1;
- (id)_sharedDatabaseManager;
- (void)syncDeletesToCloudKitWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(NSUInteger)arg2 attemptCount:(NSUInteger)arg3 useStingRay:(BOOL)arg4 syncChatsCompletionBlock:(id /* CDUnknownBlockType */)arg5;
- (void)syncAttachmentMetadataFirstSyncWithActivity:(id)arg1 deviceConditionsToCheck:(NSUInteger)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(NSUInteger)arg2 attemptCount:(NSUInteger)arg3;
- (id)_recordManager;
- (void)_reloadChatRegistryOnMainThread;
- (void)_nukeCKData;
- (void)_dealWithEncryptionKeyLostErrorIfApplicable:(id)arg1;
- (BOOL)_errorIndicatesDeviceNotGoodForSync:(id)arg1;
- (void)beginInitialSyncAttemptCount:(NSUInteger)arg1;
- (id)_retryError;
- (void)collectLogsIfNeeded;
- (void)sendRestoreFailuresLogDumpsIfNeeded;
- (void)sendRestoreFailuresLogDumps;
- (void)_deleteRestoreFailuresDirectory;
- (BOOL)_withinAnHourOfLogDumpHour;
- (NSUInteger)_currentHour;
- (BOOL)_hasDumpedRestoreFailureLogsInPastHour;
- (BOOL)_hasDumpedLogsInPastHour;
- (void)recordMetricIsCloudKitEnabled;
- (void)_performLastCompleteSyncedDBDateMetricForSuccessfulSync;
- (void)_performLastSyncDateMetricForSuccessfulSync;
- (void)performMetricForSuccessfulSync;
- (void)systemDidUnlock;
- (void)_refreshUIWhileSyncing;
- (void)refreshUIIfApplicableWithBatchCount:(NSUInteger)arg1;
- (double)reloadTimeInterval;
- (BOOL)_serverAllowsUIRefreshTimerWhileSyncing;
- (BOOL)_serverAllowsUIRefreshWhileSyncing;
- (void)syncController:(id)arg1 syncBatchCompleted:(NSUInteger)arg2;
- (void)clearLocalCloudKitSyncState;
- (void)clearCKRelatedDefaults;
- (void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
- (void)beginComingBackOnlineSync;
- (void)_syncDeletesOrClearTombstones;
- (BOOL)_accountHasMultipleDevices;
- (BOOL)_serverDoesNotSingleDeviceLimitation;
- (BOOL)_chatSyncedRecently;
- (double)_minimumChatComingOnlineSyncInterval;
- (BOOL)_serverDoesNotAllowComingBackOnlineChatSync;
- (void)beginFullSyncPeriodic:(BOOL)arg1 deviceConditionsToCheck:(NSUInteger)arg2 activity:(id)arg3;
- (void)beginChatSyncPeriodic:(BOOL)arg1 activity:(id)arg2;
- (void)beginInitialSync;
- (void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
- (void)dealloc;
- (id)init;
- (void)kickOffEagerSyncIfApplicable;
- (void)_nightlySyncTimerFired;
- (void)_kickOffNightlyPeriodicSyncIfApplicable;
- (void)_logIMAutomaticHistorySyncDidNotOccurMetricsUnderFirstUnlock:(BOOL)arg1 isSyncing:(BOOL)arg2 deviceConditionsAllowSync:(BOOL)arg3 syncNotCompletedRecently:(BOOL)arg4;
- (BOOL)_syncNotCompletedRecently;
- (double)_IMAHDAgentFallbackIntervalInSeconds;
- (void)_dispatchNotification:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(BOOL )arg3;
- (void)registerForAccountNotifications;
- (void)_accountDidChange:(id)arg1;
- (void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
- (NSUInteger)_maxTimeToDeferInSeconds;
- (long long)syncControllerRecordType;
- (id)statsCollector;
- (id)rampManager;
- (id)initialAttachmentSyncController;
- (id)attachmentSyncController;
- (id)exitManager;
- (id)chatSyncController;
- (id)initialMessageSyncController;
- (id)messageSyncController;

@end

