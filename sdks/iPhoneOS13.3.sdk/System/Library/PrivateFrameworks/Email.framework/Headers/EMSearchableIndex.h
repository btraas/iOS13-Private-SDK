//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMRemoteConnection;

@interface EMSearchableIndex : NSObject <EFLoggable>
{
    EMRemoteConnection *_connection;
}

+ (id)remoteInterface;
+ (id)log;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* CDUnknownBlockType */)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithRemoteConnection:(id)arg1;

@end

