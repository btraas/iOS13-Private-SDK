//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNEventCanceledNotificationDataSource-Protocol.h>

@protocol CALNDataSourceEventRepresentationProvider, CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider, CALNRemoteMutator, EKEventStoreProvider;

@interface CALNEventCanceledNotificationEKDataSource : NSObject <CALNEventCanceledNotificationDataSource>
{
    id <EKEventStoreProvider> _eventStoreProvider;
    id <CALNInboxNotificationProvider> _inboxNotificationProvider;
    id <CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
    id <CALNRemoteMutator> _remoteMutator;
    id <CALNDataSourceEventRepresentationProvider> _dataSourceEventRepresentationProvider;
}

@property(readonly, nonatomic) id <CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider; // @synthesize dataSourceEventRepresentationProvider=_dataSourceEventRepresentationProvider;
@property(readonly, nonatomic) id <CALNRemoteMutator> remoteMutator; // @synthesize remoteMutator=_remoteMutator;
@property(readonly, nonatomic) id <CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider; // @synthesize notificationReferenceProvider=_notificationReferenceProvider;
@property(readonly, nonatomic) id <CALNInboxNotificationProvider> inboxNotificationProvider; // @synthesize inboxNotificationProvider=_inboxNotificationProvider;
@property(readonly, nonatomic) id <EKEventStoreProvider> eventStoreProvider; // @synthesize eventStoreProvider=_eventStoreProvider;
// - (void).cxx_destruct;
- (id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2;
- (void)deleteCanceledEventWithSourceClientIdentifier:(id)arg1;
- (void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchEventCanceledNotifications;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 remoteMutator:(id)arg4 dataSourceEventRepresentationProvider:(id)arg5;

@end
