//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface ICIAMSerialCheckResponse : PBCodable <NSCopying>
{
    long long _commandSerialNumber;
    struct {
        unsigned int commandSerialNumber:1;
    } _has;
}

@property(nonatomic) long long commandSerialNumber; // @synthesize commandSerialNumber=_commandSerialNumber;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCommandSerialNumber;

@end

