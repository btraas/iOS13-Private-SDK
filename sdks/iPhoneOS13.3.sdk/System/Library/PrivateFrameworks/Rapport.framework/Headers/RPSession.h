//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/RPAuthenticatable-Protocol.h>
#import <Rapport/RPCompanionLinkXPCClientInterface-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>

@class NSString, NSXPCConnection, RPConnection, RPEndpoint;
@protocol OS_dispatch_queue;

@interface RPSession : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    NSString *_password;
    id /* CDUnknownBlockType */ _authCompletionHandler;
    id /* CDUnknownBlockType */ _showPasswordHandler;
    id /* CDUnknownBlockType */ _hidePasswordHandler;
    id /* CDUnknownBlockType */ _promptForPasswordHandler;
    NSUInteger _controlFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSString *_label;
    RPEndpoint *_peerEndpoint;
    NSString *_serviceType;
    RPConnection *_cnx;
    NSString *_peerID;
    NSUInteger _sessionID;
    NSUInteger _startTicks;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger startTicks; // @synthesize startTicks=_startTicks;
@property(nonatomic) NSUInteger sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(retain, nonatomic) RPConnection *cnx; // @synthesize cnx=_cnx;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) RPEndpoint *peerEndpoint; // @synthesize peerEndpoint=_peerEndpoint;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) NSUInteger controlFlags; // @synthesize controlFlags=_controlFlags;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
@property(readonly, nonatomic) int passwordTypeActual; // @synthesize passwordTypeActual=_passwordTypeActual;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
// - (void).cxx_destruct;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* CDUnknownBlockType */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* CDUnknownBlockType */)arg4;
- (void)deregisterRequestID:(id)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)deregisterEventID:(id)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)tryPassword:(id)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1 reactivate:(BOOL)arg2;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

