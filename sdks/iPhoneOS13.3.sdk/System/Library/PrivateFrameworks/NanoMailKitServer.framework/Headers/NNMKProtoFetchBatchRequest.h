//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSMutableArray;

@interface NNMKProtoFetchBatchRequest : PBRequest <NSCopying>
{
    NSMutableArray *_fetchRequests;
    unsigned int _fullSyncVersion;
    BOOL _wantsBatchedResponse;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int wantsBatchedResponse:1;
    } _has;
}

+ (Class)fetchRequestType;
@property(nonatomic) BOOL wantsBatchedResponse; // @synthesize wantsBatchedResponse=_wantsBatchedResponse;
@property(retain, nonatomic) NSMutableArray *fetchRequests; // @synthesize fetchRequests=_fetchRequests;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
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
@property(nonatomic) BOOL hasWantsBatchedResponse;
- (id)fetchRequestAtIndex:(NSUInteger)arg1;
- (NSUInteger)fetchRequestsCount;
- (void)addFetchRequest:(id)arg1;
- (void)clearFetchRequests;
@property(nonatomic) BOOL hasFullSyncVersion;

@end

