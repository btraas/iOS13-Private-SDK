//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBLocalZoneQueryResult.h>

@class NSData, NSMutableSet;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultRecordIDSequence : HMBLocalZoneQueryResult
{
    NSData *_currentSequenceAsData;
    NSData *_lastReturnedSequence;
    NSMutableSet *_returnedIDs;
}

@property(retain, nonatomic) NSMutableSet *returnedIDs; // @synthesize returnedIDs=_returnedIDs;
@property(retain, nonatomic) NSData *lastReturnedSequence; // @synthesize lastReturnedSequence=_lastReturnedSequence;
@property(retain, nonatomic) NSData *currentSequenceAsData; // @synthesize currentSequenceAsData=_currentSequenceAsData;
// - (void).cxx_destruct;
- (id)fetchRow:(id)arg1 error:(id )arg2;
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 sequenceBindOffset:(NSUInteger)arg4 arguments:(id)arg5 maximumRowsPerSelect:(NSUInteger)arg6;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt )arg1 currentSequence:(id)arg2 error:(id )arg3;
- (id)fetchRowFromStatement:(struct sqlite3_stmt )arg1 skip:(BOOL )arg2 updatedSequenceColumn:(id )arg3 error:(id )arg4;
- (id)nextObject;

@end

