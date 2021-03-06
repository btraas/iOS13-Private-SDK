//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTriggeredEventNotificationDataStorage-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CALNInMemoryTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage>
{
    NSMutableDictionary *_notificationDataMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableDictionary *notificationDataMap; // @synthesize notificationDataMap=_notificationDataMap;
// - (void).cxx_destruct;
- (void)removeNotificationData;
- (void)removeNotificationDataWithIdentifier:(id)arg1;
- (id)notificationDataWithIdentifier:(id)arg1;
- (void)addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (id)notificationData;
- (id)init;

@end

