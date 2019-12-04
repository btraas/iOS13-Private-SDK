//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

__attribute__((visibility("hidden")))
@interface BCSVisibility : PBCodable <NSCopying>
{
    double _ratio;
    NSString *_country;
    NSString *_language;
    struct {
        unsigned int ratio:1;
    } _has;
}

@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRatio;
@property(readonly, nonatomic) _Bool hasCountry;
@property(readonly, nonatomic) _Bool hasLanguage;

@end
