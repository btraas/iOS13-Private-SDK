//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNScheduler : NSObject
{
}

+ (id)synchronousSerialDispatchQueueWithName:(id)arg1;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)inlineScheduler;
+ (id)offMainThreadSchedulerWithBackgroundScheduler:(id)arg1;
+ (id)offMainThreadScheduler;
+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;

@end

