//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDCloudShareTrustManager, HMDHome, HMDUser, NSString;

@protocol HMDCloudShareTrustManagerDataSource <NSObject>
- (BOOL)isOwnerCapableForTrustManager:(HMDCloudShareTrustManager *)arg1;
- (HMDHome *)homeForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (HMDUser *)ownerForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (NSString *)zoneNameForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (BOOL)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 shouldShareTrustWithUser:(HMDUser *)arg2;
@end

