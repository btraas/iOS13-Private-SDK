//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TIPersistentQueue : NSObject
{
    NSURL *_presentedItemURL;
}

// - (void).cxx_destruct;
- (void)dequeueObjects:(id /* CDUnknownBlockType */)arg1;
- (void)enqueueObjects:(id /* CDUnknownBlockType */)arg1;
- (void)readObjects:(id /* CDUnknownBlockType */)arg1;
- (id)initWithURL:(id)arg1;

@end

