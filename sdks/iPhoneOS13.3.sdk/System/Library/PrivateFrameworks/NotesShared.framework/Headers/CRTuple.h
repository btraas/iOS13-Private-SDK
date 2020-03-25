//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>

@class NSArray, NSString;

@interface CRTuple : NSObject <CRDataType, CRCoding>
{
    NSArray *_contents;
}

+ (id)tupleWithArray:(id)arg1;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger count;
- (id)objectAtIndexedSubscript:(NSUInteger)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(id /* CDUnknownBlockType */)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)init;

@end
