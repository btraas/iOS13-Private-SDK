//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <CoreParsec/_CPSafariUsagePropensity-Protocol.h>

@class NSData, NSString;

@interface _CPSafariUsagePropensity : PBCodable <_CPSafariUsagePropensity, NSSecureCoding>
{
    float _localGoto;
    float _localTap;
    float _parsecGoto;
    float _parsecTap;
    float _thirdPartyGoto;
    float _thirdPartyTap;
    float _thirdPartyCompletionOrRecentSearch;
    float _goToSite;
    float _other;
    int _totalEngagements;
}

@property(nonatomic) int totalEngagements; // @synthesize totalEngagements=_totalEngagements;
@property(nonatomic) float other; // @synthesize other=_other;
@property(nonatomic) float goToSite; // @synthesize goToSite=_goToSite;
@property(nonatomic) float thirdPartyCompletionOrRecentSearch; // @synthesize thirdPartyCompletionOrRecentSearch=_thirdPartyCompletionOrRecentSearch;
@property(nonatomic) float thirdPartyTap; // @synthesize thirdPartyTap=_thirdPartyTap;
@property(nonatomic) float thirdPartyGoto; // @synthesize thirdPartyGoto=_thirdPartyGoto;
@property(nonatomic) float parsecTap; // @synthesize parsecTap=_parsecTap;
@property(nonatomic) float parsecGoto; // @synthesize parsecGoto=_parsecGoto;
@property(nonatomic) float localTap; // @synthesize localTap=_localTap;
@property(nonatomic) float localGoto; // @synthesize localGoto=_localGoto;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
