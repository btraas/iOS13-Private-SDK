//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOPDDeparturePredicate, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitSchedule : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    NSMutableArray *_departureSequences;
    struct GEOPDTimeRange _operatingHoursRange;
    unsigned long long _ttlSeconds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_operatingHoursRange:1;
        unsigned int has_ttlSeconds:1;
        unsigned int read_unknownFields:1;
        unsigned int read_departurePredicateCountdown:1;
        unsigned int read_departurePredicateStamp:1;
        unsigned int read_departureSequences:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_departurePredicateCountdown:1;
        unsigned int wrote_departurePredicateStamp:1;
        unsigned int wrote_departureSequences:1;
        unsigned int wrote_operatingHoursRange:1;
        unsigned int wrote_ttlSeconds:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)departureSequenceType;
+ (id)transitScheduleForPlaceData:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTtlSeconds;
@property(nonatomic) unsigned long long ttlSeconds;
@property(nonatomic) _Bool hasOperatingHoursRange;
@property(nonatomic) struct GEOPDTimeRange operatingHoursRange;
@property(retain, nonatomic) GEOPDDeparturePredicate *departurePredicateStamp;
@property(readonly, nonatomic) _Bool hasDeparturePredicateStamp;
- (void)_readDeparturePredicateStamp;
@property(retain, nonatomic) GEOPDDeparturePredicate *departurePredicateCountdown;
@property(readonly, nonatomic) _Bool hasDeparturePredicateCountdown;
- (void)_readDeparturePredicateCountdown;
- (id)departureSequenceAtIndex:(unsigned long long)arg1;
- (unsigned long long)departureSequencesCount;
- (void)_addNoFlagsDepartureSequence:(id)arg1;
- (void)addDepartureSequence:(id)arg1;
- (void)clearDepartureSequences;
@property(retain, nonatomic) NSMutableArray *departureSequences;
- (void)_readDepartureSequences;
- (id)initWithData:(id)arg1;
- (id)init;

@end
