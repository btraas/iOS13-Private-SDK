//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface HDSQLiteOrderingTerm : NSObject <NSCopying>
{
    _Bool _ascending;
    NSString *_expression;
}

+ (id)orderingTermWithProperty:(id)arg1 entityClass:(Class)arg2 ascending:(_Bool)arg3;
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
@property(readonly, copy, nonatomic) NSString *expression; // @synthesize expression=_expression;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)SQL;
- (id)initWithExpression:(id)arg1 ascending:(_Bool)arg2;
- (id)init;

@end
