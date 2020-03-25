//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSXPCServiceConnectionConfiguring-Protocol.h>
#import <BoardServices/BSXPCServiceConnectionEventHandling-Protocol.h>

@class BSServiceInterface, BSServiceQuality, BSXPCCoder, BSXPCServiceConnectionProxy, NSString;
@protocol BSServiceDispatchingQueue, OS_dispatch_queue;

@interface BSXPCServiceConnectionEventHandler : NSObject <BSXPCServiceConnectionConfiguring, BSXPCServiceConnectionEventHandling>
{
//     struct os_unfair_lock_s _lock;
    BOOL _nonLaunchingAware;
    BSXPCServiceConnectionProxy *_lock_remoteTarget;
    id _context;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id <BSServiceDispatchingQueue> _targetDispatchingQueue;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    id _interfaceTarget;
    BSXPCCoder *_initiatingContext;
    id /* CDUnknownBlockType */ _activationHandler;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    id /* CDUnknownBlockType */ _connectionHandler;
    id /* CDUnknownBlockType */ _noMoreChildrenHandler;
    id /* CDUnknownBlockType */ _messageHandler;
    id /* CDUnknownBlockType */ _errorHandler;
}

+ (id)eventHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ messageHandler; // @synthesize messageHandler=_messageHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ noMoreChildrenHandler; // @synthesize noMoreChildrenHandler=_noMoreChildrenHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ activationHandler; // @synthesize activationHandler=_activationHandler;
@property(retain, nonatomic) BSXPCCoder *initiatingContext; // @synthesize initiatingContext=_initiatingContext;
@property(retain, nonatomic) id interfaceTarget; // @synthesize interfaceTarget=_interfaceTarget;
@property(retain, nonatomic) BSServiceInterface *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) BSServiceQuality *serviceQuality; // @synthesize serviceQuality=_serviceQuality;
@property(retain, nonatomic) id <BSServiceDispatchingQueue> targetDispatchingQueue; // @synthesize targetDispatchingQueue=_targetDispatchingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)connectionDisconnected:(id)arg1;
- (void)connectionInitialized:(id)arg1 withActiveXPCConnection:(id)arg2 xpcConnectionTargetQueue:(id)arg3;
- (void)connectionInvalidated:(id)arg1;
- (void)connectionInterrupted:(id)arg1;
- (void)connectionActivated:(id)arg1;
- (void)connection:(id)arg1 handleError:(id)arg2;
- (void)connection:(id)arg1 handleMessage:(id)arg2;
- (void)connectionHandleNoMoreChildren:(id)arg1;
- (void)connection:(id)arg1 handleConnection:(id)arg2;
- (void)encodeInitiatingContext:(id /* CDUnknownBlockType */)arg1;
- (BOOL)hasErrorHandler;
- (BOOL)hasInvalidationHandler;
- (BOOL)hasInterruptionHandler;
- (BOOL)isNonLaunchingAware;
- (void)setNonLaunchingAware;
@property(readonly, nonatomic) BSXPCServiceConnectionProxy *remoteTarget;
- (id)init;

@end
