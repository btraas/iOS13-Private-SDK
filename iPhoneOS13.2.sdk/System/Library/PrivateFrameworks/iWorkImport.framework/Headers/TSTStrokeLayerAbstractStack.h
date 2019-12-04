//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTStrokeLayerAbstractStack : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
}

- (void)unlock;
- (void)lockForWrite;
- (void)lockForRead;
- (id)portalledStrokeLayer;
- (void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateStrokesAndCapsFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateStrokesFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (id)lookupStrokeAtIndex:(long long)arg1;
- (unsigned long long)count;
- (id)p_strokeLayerEnumeration;
- (void)dealloc;
- (id)init;

@end
