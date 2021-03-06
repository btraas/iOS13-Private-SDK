//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class TSUDispatchData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> *_streamQueue;
    TSUDispatchData *_streamData;
    BOOL _isClosed;
}

// - (void).cxx_destruct;
- (id)serializedData;
- (void)_close;
- (void)close;
- (void)writeData:(id)arg1;
- (id)init;
- (id)initWithAlwaysDefragmentData:(BOOL)arg1;

@end

