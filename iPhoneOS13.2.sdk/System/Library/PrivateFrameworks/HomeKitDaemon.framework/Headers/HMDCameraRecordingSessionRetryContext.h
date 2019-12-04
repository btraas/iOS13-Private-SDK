//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface HMDCameraRecordingSessionRetryContext : NSObject
{
    double _retryInterval;
    double _maxRetryInterval;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) double maxRetryInterval; // @synthesize maxRetryInterval=_maxRetryInterval;
- (void)computeNextRetryInterval;
@property double retryInterval; // @synthesize retryInterval=_retryInterval;
- (id)initWithWorkQueue:(id)arg1 preferences:(id)arg2;
- (id)initWithWorkQueue:(id)arg1;

@end
