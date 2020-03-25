//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GKGame, GKLeaderboard, GKPlayer, GKScore, UIImage;

@interface GKScoreSharingInfo : NSObject <NSCoding, NSSecureCoding>
{
    BOOL _complete;
    GKLeaderboard *_leaderboardCategory;
    GKPlayer *_player;
    GKGame *_game;
    UIImage *_badgeImage;
    UIImage *_iconImage;
    GKScore *_score;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKLeaderboard *leaderboardCategory; // @synthesize leaderboardCategory=_leaderboardCategory;
- (id)subjectForEmailActivity;
- (id)itemsForActivityType:(id)arg1;
- (id)thumbnailForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategoryID:(id)arg1 forGame:(id)arg2 player:(id)arg3;
- (void)dealloc;

@end
