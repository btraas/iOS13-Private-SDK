//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSCache, NSRecursiveLock;
@protocol EFLazyCacheDelegate;

@interface EFLazyCache : NSObject <NSCacheDelegate>
{
    NSRecursiveLock *_lock;
    NSCache *_storage;
    struct {
        unsigned int delegateRespondsToLazyCacheWillEvictObject:1;
    } _flags;
    id <EFLazyCacheDelegate> _delegate;
}

@property(nonatomic) __weak id <EFLazyCacheDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)cachedObjectForKey:(id)arg1;
- (id)storedObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 generator:(id /* CDUnknownBlockType */)arg2;
- (void)_exchangeOriginalObject:(id)arg1 forKey:(id)arg2 withObject:(id)arg3;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)dealloc;
- (id)initWithCountLimit:(NSUInteger)arg1;
- (id)init;
- (long long)waiterCountForKey:(id)arg1;

@end

