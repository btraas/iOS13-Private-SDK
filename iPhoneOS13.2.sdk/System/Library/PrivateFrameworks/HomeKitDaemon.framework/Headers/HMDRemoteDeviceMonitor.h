//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDAccountRegistry, HMFNetMonitor, HMFTimer, IDSService, NSArray, NSMapTable, NSObject, NSOperationQueue, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, IDSServiceDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSMapTable *_devices;
    _Bool _reachable;
    _Bool _started;
    HMDAccountRegistry *_accountRegistry;
    IDSService *_service;
    HMFNetMonitor *_netMonitor;
    HMFTimer *_deviceHealthTimer;
}

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3;
@property(readonly, nonatomic) HMFTimer *deviceHealthTimer; // @synthesize deviceHealthTimer=_deviceHealthTimer;
@property(readonly, nonatomic) HMFNetMonitor *netMonitor; // @synthesize netMonitor=_netMonitor;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)handleAccountRemoved:(id)arg1;
- (void)handleDeviceRemovedFromAccount:(id)arg1;
- (void)handleCurrentDeviceUpdate:(id)arg1;
- (void)_stopActivelyMonitoringDevice:(id)arg1;
- (void)_startActivelyMonitoringDevice:(id)arg1;
- (void)_sendPingToDevice:(id)arg1;
- (void)confirmDevice:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)notifyDeviceReachabilityChange:(_Bool)arg1 forDevice:(id)arg2;
- (void)_handleGlobalReachabilityChange;
- (void)handleRemovedDeviceInformation:(id)arg1;
- (void)stopMonitoringDevice:(id)arg1;
- (void)handleAddedDeviceInformation:(id)arg1;
- (id)_startMonitoringDevice:(id)arg1;
- (void)startMonitoringDevice:(id)arg1;
- (id)_deviceInformationForDevice:(id)arg1;
@property(readonly) NSArray *unreachableDevices;
- (id)devices;
- (void)setReachable:(_Bool)arg1;
@property(readonly, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
- (void)start;
- (void)setStarted:(_Bool)arg1;
@property(readonly, getter=isStarted) _Bool started; // @synthesize started=_started;
- (void)dealloc;
- (id)dumpState;
- (id)initWithAccountRegistry:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
