//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ICHTMLConverterClient : NSObject
{
    NSXPCConnection *_connectionToService;
    NSObject<OS_dispatch_queue> *_requestCountQueue;
    NSUInteger _requestCount;
}

+ (id)sharedClient;
@property(nonatomic) NSUInteger requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue; // @synthesize requestCountQueue=_requestCountQueue;
// - (void).cxx_destruct;
- (void)suspendConnectionIfNeeded;
- (void)resumeConnectionIfNeeded;
- (id)attributedStringFromHTMLString:(id)arg1;
- (void)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 timeoutDate:(id)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (void)dealloc;
- (id)init;

@end
