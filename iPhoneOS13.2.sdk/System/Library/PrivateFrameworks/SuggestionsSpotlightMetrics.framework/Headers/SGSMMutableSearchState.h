//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SGMContactOpportunityInSpotlight, SGMContactResultInSpotlight, SGMContactResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight;

@interface SGSMMutableSearchState : NSObject
{
    SGMContactOpportunityInSpotlight *_contactOpportunity;
    SGMContactResultInSpotlight *_contactResult;
    SGMContactResultSelectedInSpotlight *_contactSelected;
    SGMNoResultSelectedInSpotlight *_noneSelected;
    SGMOtherResultSelectedInSpotlight *_otherSelected;
    unsigned short _contactResultCount;
    unsigned short _contactOpportunityCount;
    unsigned char _contactConversionCount;
    unsigned char _contactLossCount;
    unsigned short _curatedOrPseudoContactOpportunityCount;
    unsigned char _otherSelectedCount;
    unsigned char _nonOpportunityCount;
    _Bool _justEngaged;
    NSMutableSet *_resultsSeen;
}

- (id)description;
- (void)commit;
- (_Bool)justEngaged;
- (void)resetJustEngaged;
- (void)setJustEngaged;
- (void)scoreAsContactLoss;
- (void)scoreAsContactConversion;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactResult;
- (void)scoreAsOtherConversion;
- (void)scoreAsNonOpportunity;
- (void)resetCounts;
- (void)resetConversionCounts;
- (_Bool)isFirstTimeSeeingResult:(id)arg1;
- (id)init;

@end
