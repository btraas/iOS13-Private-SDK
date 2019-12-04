//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//


#import <SPOwner/SPLocalBeaconManagerXPCProtocol-Protocol.h>

@class NSDateInterval, NSString, NSUUID;

@protocol SPBeaconManagerXPCProtocol <NSObject, SPLocalBeaconManagerXPCProtocol>
- (oneway void)setServiceState:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)primaryAccountModified;
- (oneway void)removeLocalAccountDataWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)beaconingKeysForUUID:(NSUUID *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (oneway void)unacceptedBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)allBeaconsOfType:(unsigned long long)arg1 completion:(void (^)(NSSet *))arg2;
- (oneway void)allBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)notificationBeaconForSubscriptionId:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
- (oneway void)beaconForUUID:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
@end
