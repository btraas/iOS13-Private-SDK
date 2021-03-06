//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

@interface HDCodableFHIRResource : PBCodable <NSCopying>
{
    long long _extractionHints;
    long long _originVersionMajor;
    long long _originVersionMinor;
    long long _originVersionPatch;
    double _receivedDate;
    NSString *_accountIdentifier;
    NSString *_fhirVersion;
    NSString *_gatewayExternalID;
    NSString *_originVersionBuild;
    NSData *_rawContent;
    NSString *_receivedDateTimeZoneName;
    NSString *_resourceID;
    NSString *_resourceType;
    NSString *_sourceURL;
    struct {
        unsigned int extractionHints:1;
        unsigned int originVersionMajor:1;
        unsigned int originVersionMinor:1;
        unsigned int originVersionPatch:1;
        unsigned int receivedDate:1;
    } _has;
}

@property(retain, nonatomic) NSString *originVersionBuild; // @synthesize originVersionBuild=_originVersionBuild;
@property(nonatomic) long long originVersionPatch; // @synthesize originVersionPatch=_originVersionPatch;
@property(nonatomic) long long originVersionMinor; // @synthesize originVersionMinor=_originVersionMinor;
@property(nonatomic) long long originVersionMajor; // @synthesize originVersionMajor=_originVersionMajor;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) long long extractionHints; // @synthesize extractionHints=_extractionHints;
@property(retain, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSString *receivedDateTimeZoneName; // @synthesize receivedDateTimeZoneName=_receivedDateTimeZoneName;
@property(retain, nonatomic) NSString *fhirVersion; // @synthesize fhirVersion=_fhirVersion;
@property(retain, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) double receivedDate; // @synthesize receivedDate=_receivedDate;
@property(retain, nonatomic) NSData *rawContent; // @synthesize rawContent=_rawContent;
@property(retain, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
@property(retain, nonatomic) NSString *gatewayExternalID; // @synthesize gatewayExternalID=_gatewayExternalID;
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
@property(readonly, nonatomic) BOOL hasOriginVersionBuild;
@property(nonatomic) BOOL hasOriginVersionPatch;
@property(nonatomic) BOOL hasOriginVersionMinor;
@property(nonatomic) BOOL hasOriginVersionMajor;
@property(readonly, nonatomic) BOOL hasAccountIdentifier;
@property(nonatomic) BOOL hasExtractionHints;
@property(readonly, nonatomic) BOOL hasSourceURL;
@property(readonly, nonatomic) BOOL hasReceivedDateTimeZoneName;
@property(readonly, nonatomic) BOOL hasFhirVersion;
@property(readonly, nonatomic) BOOL hasResourceType;
@property(nonatomic) BOOL hasReceivedDate;
@property(readonly, nonatomic) BOOL hasRawContent;
@property(readonly, nonatomic) BOOL hasResourceID;
@property(readonly, nonatomic) BOOL hasGatewayExternalID;

@end

