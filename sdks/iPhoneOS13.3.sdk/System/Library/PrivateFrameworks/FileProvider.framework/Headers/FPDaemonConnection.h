//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol FPDDaemon, OS_dispatch_queue, OS_dispatch_source;

@interface FPDaemonConnection : NSObject
{
    NSXPCConnection<FPDDaemon> *_connectionQueueConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_getAttributeConnections;
    NSObject<OS_dispatch_source> *_getAttributeConnectionsIdleCleanupTimer;
    unsigned int _user;
    NSXPCConnection<FPDDaemon> *_connection;
}

+ (id)newXPCConnection;
+ (id)connectionForUser:(unsigned int)arg1;
+ (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
+ (id)remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
+ (id)sharedConnection;
@property(nonatomic) unsigned int user; // @synthesize user=_user;
// - (void).cxx_destruct;
- (void)restoreUserURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)backUpUserURL:(id)arg1 outputUserURL:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getURLForContainerWithItemID:(id)arg1 inDataScopeDomainWithIdentifier:(id)arg2 documentsScopeDomainIdentifier:(id)arg3 documentsFolderItemIdentifier:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)makeTopologicallySortedItemsOnDisk:(id)arg1 error:(id )arg2;
- (void)makeTopologicallySortedItemsOnDisk:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_test_callFileProviderManagerAPIs:(id /* CDUnknownBlockType */)arg1;
- (void)_test_retrieveItemWithName:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)listOfMonitoredAppsWithError:(id )arg1;
- (id)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 error:(id )arg3;
- (void)unobserveWithToken:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)documentURLFromBookmarkableString:(id)arg1 error:(id )arg2;
- (void)documentURLFromBookmarkableString:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)bookmarkableStringFromDocumentURL:(id)arg1 error:(id )arg2;
- (void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)createItemBasedOnTemplate:(id)arg1 fields:(NSUInteger)arg2 urlWrapper:(id)arg3 options:(NSUInteger)arg4 bounceOnCollision:(BOOL)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
- (void)forceIngestionForItemIDs:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)forceIngestionForItemID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updateLastUsedDateForFileURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)fetchDomainServicerForProviderDomainID:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)providersCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)providerDomainsCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)unpinItemWithID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)pinItemWithID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)evictItemWithID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(BOOL)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)wakeUpForURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSXPCConnection<FPDDaemon> *connection; // @synthesize connection=_connection;
- (id)initWithUser:(unsigned int)arg1;

@end

