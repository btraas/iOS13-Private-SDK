//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, HMDBackingStoreCacheGroup, HMDCloudCache, HMDCloudRecord, HMDCloudZone, NSMutableDictionary, NSString, NSUUID;

@interface HMDCloudGroup : HMFObject
{
    HMDCloudCache *_cache;
    HMDCloudZone *_cloudZone;
    NSUUID *_ownerID;
    NSUUID *_identifier;
    HMDBackingStoreCacheGroup *_backingStoreGroup;
    NSMutableDictionary *_objectIDToRecordNameMap;
}

+ (id)shortDescription;
+ (void)createGroupWithRootRecordName:(id)arg1 owner:(id)arg2 subscriptionName:(id)arg3 cloudZone:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
@property(readonly, nonatomic) NSMutableDictionary *objectIDToRecordNameMap; // @synthesize objectIDToRecordNameMap=_objectIDToRecordNameMap;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *backingStoreGroup; // @synthesize backingStoreGroup=_backingStoreGroup;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUUID *ownerID; // @synthesize ownerID=_ownerID;
@property(nonatomic) __weak HMDCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(nonatomic) __weak HMDCloudCache *cache; // @synthesize cache=_cache;
// - (void).cxx_destruct;
- (void)deleteCloudRecord:(id)arg1;
- (void)deleteCloudRecordNames:(id)arg1;
- (void)updateCloudRecord:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updateCloudRecord:(id)arg1;
- (void)addCloudRecord:(id)arg1;
- (id)__cloudRecordWithObjectID:(id)arg1;
- (id)cloudRecordWithObjectID:(id)arg1;
- (id)cloudRecordWithName:(id)arg1;
@property(readonly, nonatomic) HMDCloudRecord *rootRecord;
- (void)rootRecordCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cloudRecordsForParentID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_cloudRecordsForParentIDs:(id)arg1 recursive:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)cloudRecordWithObjectID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cloudRecordWithName:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cloudRecordWithNames:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchCloudRecordMap:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isRootRecord:(id)arg1;
- (BOOL)isRootRecordName:(id)arg1;
@property(readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
- (id)rootRecordModelObject;
@property(readonly, nonatomic) NSUUID *rootRecordObjectID;
@property(readonly, nonatomic) NSUUID *parentIdentifier;
@property(readonly, nonatomic) NSString *rootRecordName;
- (id)description;
- (id)shortDescription;
- (id)initWithBackingStoreCacheGroup:(id)arg1 cloudZone:(id)arg2;
- (id)init;

@end

