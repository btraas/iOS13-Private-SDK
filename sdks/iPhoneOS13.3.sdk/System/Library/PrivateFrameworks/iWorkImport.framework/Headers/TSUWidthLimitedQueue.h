//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUWidthLimitedQueue : NSObject
{
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
//     struct os_unfair_lock_s mUnfairLock;
}

// - (void).cxx_destruct;
- (void)performSync:(id /* CDUnknownBlockType */)arg1;
- (void)performAsync:(id /* CDUnknownBlockType */)arg1;
- (id)initWithLimit:(NSUInteger)arg1 name:(id)arg2;
- (id)initWithLimit:(NSUInteger)arg1;
- (id)init;

@end

