//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Alarm, NSArray, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface MTLegacyManager : NSObject
{
    BOOL _loaded;
    BOOL _purged;
    NSArray *_alarms;
    Alarm *_sleepAlarm;
    double _defaultDuration;
    NSString *_defaultSound;
    NSObject<OS_dispatch_queue> *_serializer;
    UNUserNotificationCenter *_notificationCenter;
    NSArray *_scheduledNotifications;
}

+ (id)_numberFromString:(id)arg1;
+ (id)soundFromOldAlarm:(id)arg1;
+ (NSUInteger)repeatScheduleFromOldAlarm:(id)arg1;
+ (id)alarmFromOldAlarm:(id)arg1;
+ (id)_bundleIDForUNSchedule;
+ (id)sharedManager;
@property(nonatomic) BOOL purged; // @synthesize purged=_purged;
@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSArray *scheduledNotifications; // @synthesize scheduledNotifications=_scheduledNotifications;
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serializer; // @synthesize serializer=_serializer;
@property(copy, nonatomic) NSString *defaultSound; // @synthesize defaultSound=_defaultSound;
@property(nonatomic) double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property(retain, nonatomic) Alarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
// - (void).cxx_destruct;
- (void)_cancelNotifications;
- (void)cancelNotifications;
- (void)_purgeAlarmsAndTimers;
- (void)purgeLegacyData;
- (void)_loadTimerDefaults;
- (void)_reconcileAlarmsAndNotifications;
- (void)_loadAlarms;
- (id)_copyLegacySleepAlarmFromPreferences;
- (id)_copyLegacyAlarmsFromPreferences;
- (BOOL)_discardOldTimers;
- (BOOL)_discardOldAlarms;
- (BOOL)_discardOldVersion;
- (BOOL)_upgradeTimers;
- (BOOL)_upgradeAlarms;
- (BOOL)_upgrade;
- (BOOL)_upgradeIfNeverAttempted;
- (void)_upgradeFromSpringboardDefaults;
- (void)_loadScheduledNotifications;
- (void)_loadUserPreferences;
- (void)loadLegacyData;
- (id)init;

@end

