//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/RTIInputSystemPayloadDelegate-Protocol.h>

@class RTIInputSystemSourceSession;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPTextInputSession : NSObject <RTIInputSystemPayloadDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _started;
    id <RPMessageable> _messenger;
    RTIInputSystemSourceSession *_rtiSession;
    id /* CDUnknownBlockType */ _rtiUpdatedHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ rtiUpdatedHandler; // @synthesize rtiUpdatedHandler=_rtiUpdatedHandler;
@property(readonly, nonatomic) RTIInputSystemSourceSession *rtiSession; // @synthesize rtiSession=_rtiSession;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
// - (void).cxx_destruct;
- (void)handleTextActionPayload:(id)arg1;
- (void)_handleTextInputChange:(id)arg1 started:(BOOL)arg2;
- (void)_handleTextInputStopped:(id)arg1;
- (void)_handleTextInputStarted:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

