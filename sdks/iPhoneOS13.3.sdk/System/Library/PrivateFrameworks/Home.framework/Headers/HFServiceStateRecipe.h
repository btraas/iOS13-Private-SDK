//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSSet, NSString;
@protocol HFServiceTreeMatching;

@interface HFServiceStateRecipe : NSObject <NAIdentifiable, NSCopying>
{
    id <HFServiceTreeMatching> _predicate;
    NSSet *_characteristicRecipes;
}

+ (id)na_identity;
@property(readonly, nonatomic) NSSet *characteristicRecipes; // @synthesize characteristicRecipes=_characteristicRecipes;
@property(readonly, nonatomic) id <HFServiceTreeMatching> predicate; // @synthesize predicate=_predicate;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)matchResultForServices:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPredicate:(id)arg1 characteristicRecipes:(id)arg2;

@end

