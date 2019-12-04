//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSHashTable;

__attribute__((visibility("hidden")))
@interface _UISelectorSet : NSObject <NSCopying>
{
    NSHashTable *_hash;
}

- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (_Bool)containsSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (void)enumerateSelectorsUsingBlock:(id /* block */)arg1;
- (void)removeSelector:(SEL)arg1;
- (void)addSelector:(SEL)arg1;
- (_Bool)containsSelector:(SEL)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSelectors:(SEL)arg1;
- (id)init;
- (id)initWithHash:(id)arg1;

@end
