//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSMutableArray, NSString;

@interface PBBProtoSendLanguageAndLocale : PBCodable <NSCopying>
{
    NSMutableArray *_appleLanguages;
    NSString *_appleLocale;
    NSData *_archivedPreferences;
}

+ (Class)appleLanguagesType;
@property(retain, nonatomic) NSData *archivedPreferences; // @synthesize archivedPreferences=_archivedPreferences;
@property(retain, nonatomic) NSString *appleLocale; // @synthesize appleLocale=_appleLocale;
@property(retain, nonatomic) NSMutableArray *appleLanguages; // @synthesize appleLanguages=_appleLanguages;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasArchivedPreferences;
@property(readonly, nonatomic) _Bool hasAppleLocale;
- (id)appleLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appleLanguagesCount;
- (void)addAppleLanguages:(id)arg1;
- (void)clearAppleLanguages;

@end
