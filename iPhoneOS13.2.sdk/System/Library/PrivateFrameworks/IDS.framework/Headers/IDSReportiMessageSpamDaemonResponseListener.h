//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSReportiMessageSpamDaemonResponseListener : NSObject <IDSDaemonListenerProtocol>
{
    IDSDaemonRequestTimer *_requestTimer;
}

- (void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg1 status:(long long)arg2 abusive:(_Bool)arg3 delay:(double)arg4 withError:(id)arg5;
- (id)initWithRequestTimer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
