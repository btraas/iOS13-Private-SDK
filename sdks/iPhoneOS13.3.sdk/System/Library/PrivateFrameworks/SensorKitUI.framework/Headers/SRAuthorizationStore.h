//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKitUI/SRAuthorizationStore-Protocol.h>

@class NSDictionary, NSHashTable;
@protocol OS_dispatch_queue;

@interface SRAuthorizationStore : NSObject <SRAuthorizationStore>
{
    int _notifyToken;
    NSDictionary *_authorizationValues;
    NSDictionary *_lastModifiedAuthorizationTimes;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSHashTable *_delegates;
}

+ (id)defaultStore;
+ (void)initialize;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(copy) NSDictionary *lastModifiedAuthorizationTimes; // @synthesize lastModifiedAuthorizationTimes=_lastModifiedAuthorizationTimes;
@property(copy) NSDictionary *authorizationValues; // @synthesize authorizationValues=_authorizationValues;
- (BOOL)serviceAuthorized:(id)arg1 forBundleId:(id)arg2;
- (BOOL)serviceAuthorized:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)updateLastModifiedTimes;
- (void)updateAuthorizations;
- (void)startUpdatingAuthorizations;
- (void)dealloc;
- (id)init;

@end

