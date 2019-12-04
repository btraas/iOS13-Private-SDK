//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKGameInternal, GKPlayerInternal, NSDate, NSOrderedSet, NSString;

@interface GKChallengeInternal : GKInternalRepresentation
{
    NSString *_challengeID;
    NSString *_message;
    NSDate *_issueDate;
    NSDate *_completionDate;
    NSOrderedSet *_compatibleBundleIDs;
    GKGameInternal *_game;
    GKPlayerInternal *_issuingPlayer;
    GKPlayerInternal *_receivingPlayer;
    long long _state;
    NSString *_bundleID;
}

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSDate *issueDate; // @synthesize issueDate=_issueDate;
@property(retain, nonatomic) GKGameInternal *game; // @synthesize game=_game;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSOrderedSet *compatibleBundleIDs; // @synthesize compatibleBundleIDs=_compatibleBundleIDs;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property(retain, nonatomic) GKPlayerInternal *receivingPlayer; // @synthesize receivingPlayer=_receivingPlayer;
@property(retain, nonatomic) GKPlayerInternal *issuingPlayer; // @synthesize issuingPlayer=_issuingPlayer;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
- (id)descriptionSubstitutionMap;
@property(readonly, nonatomic) NSString *subtitleText;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) unsigned long long type;
- (id)findLocalGameBundleID;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (id)serverRepresentation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
