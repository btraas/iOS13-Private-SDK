//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator
{
    unsigned long long _type;
    NSSet *_personNodes;
}

@property(readonly, nonatomic) NSSet *personNodes; // @synthesize personNodes=_personNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)_useSplitTimeTitlesIfNeeded;
- (id)_timeTitleForPeople;
- (id)_birthdayTitleForPeople;
- (_Bool)_person:(id)arg1 isPresentInAnyMomentOfMoments:(id)arg2;
- (id)_timeTitleForEarlyMoments;
- (id)_titleForEarlyMoments;
- (id)_titleForSocialGroup;
- (id)_titleForPeople;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 type:(unsigned long long)arg3;

@end
