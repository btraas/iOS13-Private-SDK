//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/CDPUIDelegate-Protocol.h>

@class CDPContext, CDPStateController, NSString, SFSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationCDPSetup : NSObject <CDPUIDelegate>
{
    int _cdpApprovalServerState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    int _cdpSetupRequestState;
    _Bool _invalidateCalled;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricSeconds;
    id _presentingViewController;
    SFSession *_sfSession;
}

@property(retain, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;
@property(retain, nonatomic) id presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) double metricSeconds; // @synthesize metricSeconds=_metricSeconds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)uiController:(id)arg1 didPresentRootViewController:(id)arg2;
- (int)_runCDPSetupRequest;
- (int)_runCDPApprovalServerStart;
- (void)_run;
- (void)_complete:(id)arg1;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
