//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HDCodableLocationDatum : PBCodable <NSCopying>
{
    double _altitude;
    double _course;
    double _horizontalAccuracy;
    double _latitude;
    double _longitude;
    double _speed;
    double _timestamp;
    double _verticalAccuracy;
    struct {
        unsigned int altitude:1;
        unsigned int course:1;
        unsigned int horizontalAccuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int speed:1;
        unsigned int timestamp:1;
        unsigned int verticalAccuracy:1;
    } _has;
}

@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasVerticalAccuracy;
@property(nonatomic) BOOL hasHorizontalAccuracy;
@property(nonatomic) BOOL hasCourse;
@property(nonatomic) BOOL hasSpeed;
@property(nonatomic) BOOL hasAltitude;
@property(nonatomic) BOOL hasLongitude;
@property(nonatomic) BOOL hasLatitude;
@property(nonatomic) BOOL hasTimestamp;

@end

