//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookLegacy/ABPredicate.h>

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate
{
    void _group;
    void _store;
    NSString *_accountIdentifier;
}

@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)description;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement )arg1 withBindingOffset:(int )arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (BOOL)isValid;
@property(nonatomic) void store;
@property(nonatomic) void group;
- (void)dealloc;

@end

