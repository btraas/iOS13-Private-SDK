//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpointInjector, NSMutableArray;
@protocol BSServiceConnectionHost, SASPresentationServerDelegate;

@interface SASPresentationServer : NSObject
{
    _Bool _invalidated;
    BSServiceConnectionEndpointInjector *_workspaceServiceInjector;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    NSMutableArray *_waitForConnectBlocks;
    id <SASPresentationServerDelegate> _weak_delegate;
    long long _presentationIdentifier;
}

+ (id)serviceQuality;
+ (id)interface;
+ (void)_unregisterConnection:(id)arg1;
+ (id)serverForConnection:(id)arg1;
@property(nonatomic) long long presentationIdentifier; // @synthesize presentationIdentifier=_presentationIdentifier;
@property(nonatomic) __weak id <SASPresentationServerDelegate> weak_delegate; // @synthesize weak_delegate=_weak_delegate;
@property(retain, nonatomic) NSMutableArray *waitForConnectBlocks; // @synthesize waitForConnectBlocks=_waitForConnectBlocks;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector; // @synthesize workspaceServiceInjector=_workspaceServiceInjector;
- (oneway void)handleMarkBulletinWithIdentifier:(id)arg1 asRead:(id)arg2;
- (id)bulletinForIdentifier:(id)arg1;
- (id)bulletinsOnLockScreen;
- (id)allBulletins;
- (oneway void)speechRequestCancelledFromSiriOrb;
- (oneway void)speechRequestStartedFromSiriOrb;
- (oneway void)failedToPresentSiriWithError:(id)arg1;
- (oneway void)didPresentSiri;
- (oneway void)didDismiss;
- (oneway void)willDismiss;
- (oneway void)unregisterPresentationIdentifier:(id)arg1;
- (oneway void)registerPresentationIdentifier:(id)arg1;
- (void)_setConnection:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
