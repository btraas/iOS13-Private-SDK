//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface REArrayDiff : NSObject
{
    NSArray *_allOperations;
}

+ (id)_createSetFromElementArray:(id)arg1 equalComparator:(id /* CDUnknownBlockType */)arg2 hashGenerator:(id /* CDUnknownBlockType */)arg3;
+ (id)_indexSetFromSet:(id)arg1;
+ (id)diffFromElements:(id)arg1 toElements:(id)arg2 equalComparator:(id /* CDUnknownBlockType */)arg3 hashGenerator:(id /* CDUnknownBlockType */)arg4 changeComparator:(id /* CDUnknownBlockType */)arg5;
+ (id)diffFromElements:(id)arg1 toElements:(id)arg2;
@property(readonly, nonatomic) NSArray *allOperations; // @synthesize allOperations=_allOperations;
// - (void).cxx_destruct;
- (void)enumerateOperationsUsingBlock:(id /* CDUnknownBlockType */)arg1;

@end

