//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUMetadataCacheDataProviderDelegate-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface TUMetadataCache : NSObject <TUMetadataCacheDataProviderDelegate>
{
    NSArray *_providers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)classIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSArray *providers; // @synthesize providers=_providers;
// - (void).cxx_destruct;
- (void)dataProvider:(id)arg1 requestedRefreshWithDestinationIDs:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (void)_updateCacheWithDestinationIDs:(id)arg1 onlyEmptyProviders:(BOOL)arg2;
- (void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg1;
- (void)updateCacheWithDestinationIDs:(id)arg1;
- (id)metadataForDestinationID:(id)arg1;
- (id)initWithQueue:(id)arg1 dataProviders:(id)arg2;
- (id)initWithDataProviders:(id)arg1;
- (id)init;

@end
