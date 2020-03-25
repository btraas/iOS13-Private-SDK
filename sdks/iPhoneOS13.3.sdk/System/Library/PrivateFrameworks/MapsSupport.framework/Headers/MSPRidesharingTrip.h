//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOComposedWaypoint, PBUnknownFields;

@interface MSPRidesharingTrip : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOComposedWaypoint *_endWaypoint;
    GEOComposedWaypoint *_startWaypoint;
}

@property(retain, nonatomic) GEOComposedWaypoint *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property(retain, nonatomic) GEOComposedWaypoint *startWaypoint; // @synthesize startWaypoint=_startWaypoint;
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
@property(readonly, nonatomic) BOOL hasEndWaypoint;
@property(readonly, nonatomic) BOOL hasStartWaypoint;

@end
