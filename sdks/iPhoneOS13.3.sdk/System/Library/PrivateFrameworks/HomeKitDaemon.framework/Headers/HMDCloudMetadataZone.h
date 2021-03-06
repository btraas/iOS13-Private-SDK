//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZone.h>

@class HMDCloudRecord;

@interface HMDCloudMetadataZone : HMDCloudZone
{
    HMDCloudRecord *_metadataRecord;
}

+ (void)createMetadataZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
+ (id)zoneSubscriptionName:(id)arg1;
+ (id)zoneRootRecordName;
@property(retain, nonatomic) HMDCloudRecord *metadataRecord; // @synthesize metadataRecord=_metadataRecord;
// - (void).cxx_destruct;
- (void)setServerChangeToken:(id)arg1;

@end

