//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface AWDCoreCDPStateMachineEnableCDP : PBCodable <NSCopying>
{
    long long _errorCode;
    NSUInteger _timestamp;
    NSString *_errorDomain;
    BOOL _cloudDataProtectionEnabled;
    BOOL _shouldCompleteSignIn;
    CDStruct_a58e9fc9 _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) BOOL cloudDataProtectionEnabled; // @synthesize cloudDataProtectionEnabled=_cloudDataProtectionEnabled;
@property(nonatomic) BOOL shouldCompleteSignIn; // @synthesize shouldCompleteSignIn=_shouldCompleteSignIn;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(nonatomic) BOOL hasCloudDataProtectionEnabled;
@property(nonatomic) BOOL hasShouldCompleteSignIn;
@property(nonatomic) BOOL hasTimestamp;

@end

