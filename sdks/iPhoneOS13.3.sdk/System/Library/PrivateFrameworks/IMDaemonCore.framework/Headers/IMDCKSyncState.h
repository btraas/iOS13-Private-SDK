//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMKeyValueCollectionDelegate-Protocol.h>

@class IMKeyValueCollection, NSArray, NSDate, NSDictionary, NSString;
@protocol IMDCKSyncStateDelegate;

@interface IMDCKSyncState : NSObject <IMKeyValueCollectionDelegate>
{
    IMKeyValueCollection *_storage;
    id <IMDCKSyncStateDelegate> _delegate;
}

+ (void)removeBuildObjectsFromDict:(id)arg1;
+ (id)logHandle;
@property(nonatomic) __weak id <IMDCKSyncStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IMKeyValueCollection *keyValueCollection; // @synthesize keyValueCollection=_storage;
// - (void).cxx_destruct;
- (void)setErrorToKeyRollingError;
- (void)setErrorToAccountNeedsRepair;
- (void)broadcastSyncState;
- (id)serializedRepresentation;
- (void)keyValueCollection:(id)arg1 didUpdateValues:(id)arg2;
- (void)keyValueCollection:(id)arg1 willUpdateValues:(id)arg2;
- (void)setSyncControllerSyncState:(NSUInteger)arg1 withRecordType:(long long)arg2;
- (void)setStartingInitialSyncWithRecordType:(long long)arg1;
- (void)setStartingPeriodicSyncWithRecordType:(long long)arg1;
- (void)_setStartingSync;
- (void)clearLocalCloudKitSyncState;
- (void)setSyncingFinished;
@property(readonly, copy) NSString *description;
- (id)syncReportDictionaryForAttempt:(NSUInteger)arg1 withSuccess:(BOOL)arg2;
- (id)syncReportDictionary;
- (id)syncUserType;
- (BOOL)_shouldReportNewUserIfCreatedChatZones:(BOOL)arg1 deletedZones:(BOOL)arg2;
- (id)_describeErrors:(id)arg1;
- (id)describeErrors;
- (id)getAnalyticSyncDatesObjectForKey:(id)arg1;
- (void)setAnalyticSyncDatesDictionaryObject:(id)arg1 forKey:(id)arg2 shouldOverrideIfExists:(BOOL)arg3;
- (void)removeObjectFromAnalyticSyncDatesDictionaryForKey:(id)arg1;
- (void)_removeObjectForKey:(id)arg1 forDictionary:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2 forDictionary:(id)arg3 shouldSetBuild:(BOOL)arg4;
- (void)_finishBatchChange;
- (void)_startBatchChange;
- (void)addSyncError:(id)arg1;
- (void)clearSyncErrors;
@property(readonly, nonatomic) NSArray *syncErrors;
@property(nonatomic) long long accountStatus; // @dynamic accountStatus;
@property(nonatomic) long long syncControllerRecordType; // @dynamic syncControllerRecordType;
@property(nonatomic) long long syncControllerSyncType; // @dynamic syncControllerSyncType;
@property(nonatomic) NSUInteger syncControllerSyncState; // @dynamic syncControllerSyncState;
@property(copy, nonatomic) NSDictionary *analyticSyncDatesDictionary; // @dynamic analyticSyncDatesDictionary;
@property(copy, nonatomic) NSDate *lastSyncDate; // @dynamic lastSyncDate;
@property(copy, nonatomic) NSDate *exitDate; // @dynamic exitDate;
@property(nonatomic, getter=isStartingInitialSyncSetByCloudKitHooks) BOOL startingInitialSyncSetByCloudKitHooks; // @dynamic startingInitialSyncSetByCloudKitHooks;
@property(nonatomic, getter=isStartingPeriodicSyncSetByCloudKitHooks) BOOL startingPeriodicSyncSetByCloudKitHooks; // @dynamic startingPeriodicSyncSetByCloudKitHooks;
@property(nonatomic, getter=isStartingEnabledSettingChange) BOOL startingEnabledSettingChange; // @dynamic startingEnabledSettingChange;
@property(nonatomic, getter=isDisablingDevices) BOOL disablingDevices; // @dynamic disablingDevices;
@property(nonatomic, getter=isSyncingPaused) BOOL syncingPaused; // @dynamic syncingPaused;
@property(nonatomic, getter=isInExitState) BOOL inExitState; // @dynamic inExitState;
@property(nonatomic, getter=isRemovedFromBackup) BOOL removedFromBackup; // @dynamic removedFromBackup;
@property(nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled; // @dynamic syncingEnabled;
@property(nonatomic, getter=isEligibleForTruthZone) BOOL eligibleForTruthZone; // @dynamic eligibleForTruthZone;
@property(nonatomic, getter=isSyncing) BOOL syncing; // @dynamic syncing;
@property(nonatomic, getter=isFeatureEnabled) BOOL featureEnabled; // @dynamic featureEnabled;
@property(nonatomic) BOOL deletedZones; // @dynamic deletedZones;
@property(nonatomic) BOOL createdChatZone; // @dynamic createdChatZone;
- (id)logHandle;
- (id)init;
- (id)initWithKeyValueCollection:(id)arg1;

@end
