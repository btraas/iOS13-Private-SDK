//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable, NSMutableDictionary;

@interface PKAsyncCache : NSObject
{
    struct os_unfair_lock_s _lock;
    NSCache *_itemByKey;
    NSMapTable *_weakItemByKey;
    NSMutableDictionary *_outstandingRetrievals;
}

- (void)_executeRetrievalBlock:(id /* block */)arg1 forKey:(id)arg2;
- (void)retrieveItemForKey:(id)arg1 synchronous:(_Bool)arg2 retrievalBlock:(id /* block */)arg3 deliveryBlock:(id /* block */)arg4;
- (id)initWithCache:(id)arg1;
- (id)init;

@end
