//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface PPPBFeedbackMetadata : PBCodable <NSCopying>
{
    NSUInteger _unixTimestampSec;
    NSString *_clientBundleId;
    NSString *_clientIdentifier;
    NSString *_mappingId;
    BOOL _isMapped;
    struct {
        unsigned int unixTimestampSec:1;
        unsigned int isMapped:1;
    } _has;
}

@property(nonatomic) BOOL isMapped; // @synthesize isMapped=_isMapped;
@property(nonatomic) NSUInteger unixTimestampSec; // @synthesize unixTimestampSec=_unixTimestampSec;
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsMapped;
@property(nonatomic) BOOL hasUnixTimestampSec;
@property(readonly, nonatomic) BOOL hasMappingId;
@property(readonly, nonatomic) BOOL hasClientIdentifier;
@property(readonly, nonatomic) BOOL hasClientBundleId;

@end

