//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSLock, NSMutableArray, NSString, _HKDelayedOperation;
@protocol OS_dispatch_queue, OS_os_log;

@interface HDDatabaseCoalescedWritePool : NSObject
{
    NSString *_name;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_writeQueue;
    _HKDelayedOperation *_pendingWriteOperation;
    NSLock *_pendingWriteLock;
    NSMutableArray *_pendingWriteQueue;
    HDProfile *_profile;
}

@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (_Bool)_queue_performPendingWriteOperationsWithError:(id *)arg1;
- (_Bool)_performPendingWriteRecords:(id)arg1 transaction:(id)arg2 accessibilityError:(id)arg3 error:(id *)arg4;
- (void)flushPendingWriteQueueWithCompletion:(id /* block */)arg1;
- (void)performWriteWithMaximumLatency:(double)arg1 block:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_queue_performDelayedOperation;
- (id)initWithProfile:(id)arg1 name:(id)arg2 loggingCategory:(id)arg3;
- (id)init;

@end
