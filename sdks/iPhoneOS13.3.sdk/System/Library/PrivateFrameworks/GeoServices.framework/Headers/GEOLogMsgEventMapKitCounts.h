//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying>
{
    NSMutableArray *_mapKitCounts;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)mapKitCountsType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)mapKitCountsAtIndex:(NSUInteger)arg1;
- (NSUInteger)mapKitCountsCount;
- (void)addMapKitCounts:(id)arg1;
- (void)clearMapKitCounts;
@property(retain, nonatomic) NSMutableArray *mapKitCounts;

@end
