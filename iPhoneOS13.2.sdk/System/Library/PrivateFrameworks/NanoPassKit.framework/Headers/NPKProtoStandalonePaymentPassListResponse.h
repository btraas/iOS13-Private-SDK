//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NPKProtoStandaloneResponseHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentPassListResponse : PBCodable <NSCopying>
{
    NSMutableArray *_paymentPasses;
    NPKProtoStandaloneResponseHeader *_responseHeader;
}

+ (Class)paymentPassesType;
@property(retain, nonatomic) NSMutableArray *paymentPasses; // @synthesize paymentPasses=_paymentPasses;
@property(retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // @synthesize responseHeader=_responseHeader;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)paymentPassesAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentPassesCount;
- (void)addPaymentPasses:(id)arg1;
- (void)clearPaymentPasses;

@end
