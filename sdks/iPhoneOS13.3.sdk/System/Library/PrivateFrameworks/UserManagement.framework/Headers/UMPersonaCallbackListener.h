//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableSet, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface UMPersonaCallbackListener : NSObject <NSXPCListenerDelegate>
{
    NSString *_machServiceName;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    id /* CDUnknownBlockType */ _personaUpdateCallbackHandler;
}

+ (id)sharedServer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ personaUpdateCallbackHandler; // @synthesize personaUpdateCallbackHandler=_personaUpdateCallbackHandler;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSMutableSet *xpcConnections; // @synthesize xpcConnections=_xpcConnections;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
// - (void).cxx_destruct;
- (void)_tearDownConnectionToUMServerWithConnection:(id)arg1;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)personaListDidUpdateCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)bubbleDidPop;
- (void)uploadContentWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)deviceLoginSessionStateDidUpdate;
- (void)userSwitchTaskListDidUpdate;
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)willSwitchToUser:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)setupPersonaCallbackMachService:(id)arg1 callbackHandler:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

