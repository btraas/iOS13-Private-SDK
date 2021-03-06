//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NPKProtoHash;

@interface NPKProtoNewLibraryHashRequest : PBRequest <NSCopying>
{
    unsigned int _lastKnownResyncID;
    NPKProtoHash *_libraryHash;
    unsigned int _resyncID;
    unsigned int _syncID;
    CDStruct_02c44088 _has;
}

@property(nonatomic) unsigned int syncID; // @synthesize syncID=_syncID;
@property(nonatomic) unsigned int lastKnownResyncID; // @synthesize lastKnownResyncID=_lastKnownResyncID;
@property(nonatomic) unsigned int resyncID; // @synthesize resyncID=_resyncID;
@property(retain, nonatomic) NPKProtoHash *libraryHash; // @synthesize libraryHash=_libraryHash;
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
@property(nonatomic) BOOL hasSyncID;
@property(nonatomic) BOOL hasLastKnownResyncID;
@property(nonatomic) BOOL hasResyncID;

@end

