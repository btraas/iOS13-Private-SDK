//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerProtobuf, _MROriginProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying>
{
    _MRNowPlayingClientProtobuf *_client;
    _MROriginProtobuf *_origin;
    _MRNowPlayingPlayerProtobuf *_player;
}

+ (void)initialize;
@property(retain, nonatomic) _MRNowPlayingPlayerProtobuf *player; // @synthesize player=_player;
@property(retain, nonatomic) _MRNowPlayingClientProtobuf *client; // @synthesize client=_client;
@property(retain, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
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
@property(readonly, nonatomic) BOOL hasPlayer;
@property(readonly, nonatomic) BOOL hasClient;
@property(readonly, nonatomic) BOOL hasOrigin;
- (id)customDescription;
- (id)customDictionaryRepresentation;
@property(readonly, nonatomic) BOOL isResolved;
@property(readonly, nonatomic) BOOL isLocal;

@end

