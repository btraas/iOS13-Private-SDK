//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface ETPDoodle : PBCodable <NSCopying>
{
    NSData *_colorData;
    unsigned int _doodleCount;
    NSData *_doodleData;
    NSData *_pointTimeDeltaData;
    struct {
        unsigned int doodleCount:1;
    } _has;
}

@property(retain, nonatomic) NSData *pointTimeDeltaData; // @synthesize pointTimeDeltaData=_pointTimeDeltaData;
@property(retain, nonatomic) NSData *colorData; // @synthesize colorData=_colorData;
@property(retain, nonatomic) NSData *doodleData; // @synthesize doodleData=_doodleData;
@property(nonatomic) unsigned int doodleCount; // @synthesize doodleCount=_doodleCount;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPointTimeDeltaData;
@property(readonly, nonatomic) BOOL hasColorData;
@property(readonly, nonatomic) BOOL hasDoodleData;
@property(nonatomic) BOOL hasDoodleCount;

@end
