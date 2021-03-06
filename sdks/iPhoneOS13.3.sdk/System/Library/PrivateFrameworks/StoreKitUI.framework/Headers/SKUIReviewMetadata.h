//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL;

@interface SKUIReviewMetadata : NSObject <NSCopying>
{
    NSString *_body;
    NSUInteger _bodyMaxLength;
    NSString *_nickname;
    NSUInteger _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    NSUInteger _titleMaxLength;
}

@property(readonly, nonatomic) NSUInteger titleMaxLength; // @synthesize titleMaxLength=_titleMaxLength;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *submitURL; // @synthesize submitURL=_submitURL;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(readonly, nonatomic) NSUInteger nicknameMaxLength; // @synthesize nicknameMaxLength=_nicknameMaxLength;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) NSUInteger bodyMaxLength; // @synthesize bodyMaxLength=_bodyMaxLength;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithReviewDictionary:(id)arg1;

@end

