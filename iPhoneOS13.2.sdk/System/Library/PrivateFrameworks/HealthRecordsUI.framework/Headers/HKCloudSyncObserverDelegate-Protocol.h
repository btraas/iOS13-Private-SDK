//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HKCloudSyncObserver, HKCloudSyncObserverStatus, NSError, NSProgress;

@protocol HKCloudSyncObserverDelegate 
- (void)cloudSyncObserverStatusUpdated:(HKCloudSyncObserver *)arg1 status:(HKCloudSyncObserverStatus *)arg2;
- (void)cloudSyncObserverSyncCompleted:(HKCloudSyncObserver *)arg1;
- (void)cloudSyncObserver:(HKCloudSyncObserver *)arg1 syncFailedWithError:(NSError *)arg2;
- (void)cloudSyncObserver:(HKCloudSyncObserver *)arg1 syncDidStartWithProgress:(NSProgress *)arg2;
@end
