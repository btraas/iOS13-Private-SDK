//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

__attribute__((visibility("hidden")))
@interface BFFSetupAssistantDeviceToDeviceMigrationSuccess : PBCodable <NSCopying>
{
    unsigned long long _numberOfFilesTransferred;
    unsigned long long _restoreDuration;
    unsigned long long _size;
    unsigned long long _timestamp;
    unsigned long long _transferDuration;
    int _connectionType;
    NSString *_sourceDeviceModel;
    NSString *_sourceDeviceProductVersion;
    NSString *_targetDeviceModel;
    NSString *_targetDeviceProductVersion;
    _Bool _inAppleStore;
    struct {
        unsigned int numberOfFilesTransferred:1;
        unsigned int restoreDuration:1;
        unsigned int size:1;
        unsigned int timestamp:1;
        unsigned int transferDuration:1;
        unsigned int connectionType:1;
        unsigned int inAppleStore:1;
    } _has;
}

@property(nonatomic) unsigned long long numberOfFilesTransferred; // @synthesize numberOfFilesTransferred=_numberOfFilesTransferred;
@property(nonatomic) _Bool inAppleStore; // @synthesize inAppleStore=_inAppleStore;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) NSString *targetDeviceProductVersion; // @synthesize targetDeviceProductVersion=_targetDeviceProductVersion;
@property(retain, nonatomic) NSString *targetDeviceModel; // @synthesize targetDeviceModel=_targetDeviceModel;
@property(retain, nonatomic) NSString *sourceDeviceProductVersion; // @synthesize sourceDeviceProductVersion=_sourceDeviceProductVersion;
@property(retain, nonatomic) NSString *sourceDeviceModel; // @synthesize sourceDeviceModel=_sourceDeviceModel;
@property(nonatomic) unsigned long long restoreDuration; // @synthesize restoreDuration=_restoreDuration;
@property(nonatomic) unsigned long long transferDuration; // @synthesize transferDuration=_transferDuration;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNumberOfFilesTransferred;
@property(nonatomic) _Bool hasInAppleStore;
@property(nonatomic) _Bool hasConnectionType;
@property(readonly, nonatomic) _Bool hasTargetDeviceProductVersion;
@property(readonly, nonatomic) _Bool hasTargetDeviceModel;
@property(readonly, nonatomic) _Bool hasSourceDeviceProductVersion;
@property(readonly, nonatomic) _Bool hasSourceDeviceModel;
@property(nonatomic) _Bool hasRestoreDuration;
@property(nonatomic) _Bool hasTransferDuration;
@property(nonatomic) _Bool hasSize;
@property(nonatomic) _Bool hasTimestamp;

@end
