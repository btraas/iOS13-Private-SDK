//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject
{
    struct vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short>>> _vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type _vectorInlineStorage;
}

// - (void).cxx_destruct;
- (void)_dictEnumerateValuesAndCountsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_vectorEnumerateValuesAndCountsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateValuesAndCountsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)uniqueValueCount;
- (unsigned short)countForValue:(unsigned short)arg1;
- (void)addValue:(unsigned short)arg1;
- (void)_convertToDictionaryRepresentation;
- (void)dealloc;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;

@end

