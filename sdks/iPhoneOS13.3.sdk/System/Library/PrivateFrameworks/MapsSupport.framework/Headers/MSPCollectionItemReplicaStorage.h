//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBUnknownFields;

@interface MSPCollectionItemReplicaStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_clientIdentifier;
    NSMutableArray *_records;
}

+ (Class)recordsType;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)recordsAtIndex:(NSUInteger)arg1;
- (NSUInteger)recordsCount;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
@property(readonly, nonatomic) BOOL hasClientIdentifier;

@end
