//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class CLPMeta, NSData, NSMutableArray;

@interface CLPAppCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_appLocations;
    CLPMeta *_meta;
    NSData *_signature;
}

+ (Class)appLocationType;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSMutableArray *appLocations; // @synthesize appLocations=_appLocations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSignature;
- (id)appLocationAtIndex:(NSUInteger)arg1;
- (NSUInteger)appLocationsCount;
- (void)addAppLocation:(id)arg1;
- (void)clearAppLocations;

@end
