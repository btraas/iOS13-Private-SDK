//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheCreateShareGroupOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheShareGroup *_record;
    id /* block */ _creationBlock;
}

@property(copy, nonatomic) id /* block */ creationBlock; // @synthesize creationBlock=_creationBlock;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *record; // @synthesize record=_record;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 targetOwner:(id)arg2 rootRecord:(id)arg3 creationBlock:(id /* block */)arg4;

@end
