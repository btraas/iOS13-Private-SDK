//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface EDMessageQueryParserObject : NSObject
{
    NSUInteger _queryType;
    NSPredicate *_predicate;
}

@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSUInteger queryType; // @synthesize queryType=_queryType;
// - (void).cxx_destruct;
- (id)initWithQueryType:(NSUInteger)arg1 predicate:(id)arg2;

@end
