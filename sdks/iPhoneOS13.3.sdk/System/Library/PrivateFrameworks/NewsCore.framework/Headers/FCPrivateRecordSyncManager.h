//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataSyncManager-Protocol.h>

@class CKRecordID, NSArray, NTPBPrivateRecordSyncState;
@protocol FCPrivateRecordSyncManagerDelegate;

@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager>
{
    CKRecordID *_recordID;
    id <FCPrivateRecordSyncManagerDelegate> _delegate;
    NSArray *_desiredKeys;
    NTPBPrivateRecordSyncState *_currentState;
}

@property(readonly, copy, nonatomic) NTPBPrivateRecordSyncState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) __weak id <FCPrivateRecordSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
// - (void).cxx_destruct;
- (void)_stateDidChange;
- (void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)isAwaitingFirstSync;
- (void)notifyObservers;
- (void)markAsDirty;
- (BOOL)isDirty;
- (id)init;
- (id)initWithRecordID:(id)arg1 desiredKeys:(id)arg2 currentState:(id)arg3;

@end

