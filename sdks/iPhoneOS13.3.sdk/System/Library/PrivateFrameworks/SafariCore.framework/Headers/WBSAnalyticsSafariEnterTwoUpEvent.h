//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface WBSAnalyticsSafariEnterTwoUpEvent : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _method;
    CDStruct_64f0786c _has;
}

@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMethod:(id)arg1;
- (id)methodAsString:(int)arg1;
@property(nonatomic) BOOL hasMethod;
@property(nonatomic) int method; // @synthesize method=_method;
@property(nonatomic) BOOL hasTimestamp;

@end
