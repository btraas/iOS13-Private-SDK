//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator
{
    NSUInteger _type;
    NSSet *_personNodes;
}

@property(readonly, nonatomic) NSSet *personNodes; // @synthesize personNodes=_personNodes;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (BOOL)_useSplitTimeTitlesIfNeeded;
- (id)_timeTitleForPeople;
- (id)_birthdayTitleForPeople;
- (BOOL)_person:(id)arg1 isPresentInAnyMomentOfMoments:(id)arg2;
- (id)_timeTitleForEarlyMoments;
- (id)_titleForEarlyMoments;
- (id)_titleForSocialGroup;
- (id)_titleForPeople;
- (void)_generateTitleAndSubtitleWithResult:(id /* CDUnknownBlockType */)arg1;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 type:(NSUInteger)arg3;

@end
