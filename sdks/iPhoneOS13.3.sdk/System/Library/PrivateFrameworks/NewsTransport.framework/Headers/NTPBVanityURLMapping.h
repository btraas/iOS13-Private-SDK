//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBVanityURLMapping : PBCodable <NSCopying>
{
    NSMutableArray *_paths;
}

+ (Class)pathsType;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)pathsAtIndex:(NSUInteger)arg1;
- (NSUInteger)pathsCount;
- (void)addPaths:(id)arg1;
- (void)clearPaths;

@end
