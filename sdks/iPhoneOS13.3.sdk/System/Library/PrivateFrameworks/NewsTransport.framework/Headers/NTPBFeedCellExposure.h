//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

@interface NTPBFeedCellExposure : PBCodable <NSCopying>
{
    int _displayRankInSection;
    NSData *_feedCellHostExposureId;
    int _feedCellHostType;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSString *_viewFrameInScreen;
    BOOL _isUserSubscribedToFeed;
    struct {
        unsigned int displayRankInSection:1;
        unsigned int feedCellHostType:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property(retain, nonatomic) NSData *feedCellHostExposureId; // @synthesize feedCellHostExposureId=_feedCellHostExposureId;
@property(retain, nonatomic) NSString *viewFrameInScreen; // @synthesize viewFrameInScreen=_viewFrameInScreen;
@property(nonatomic) int displayRankInSection; // @synthesize displayRankInSection=_displayRankInSection;
@property(nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasFeedCellHostExposureId;
- (int)StringAsFeedCellHostType:(id)arg1;
- (id)feedCellHostTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedCellHostType;
@property(nonatomic) int feedCellHostType; // @synthesize feedCellHostType=_feedCellHostType;
@property(readonly, nonatomic) BOOL hasViewFrameInScreen;
@property(nonatomic) BOOL hasDisplayRankInSection;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedCellSection;
@property(nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property(nonatomic) BOOL hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) BOOL hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;

@end
