//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EDSearchableIndex, EDSearchableIndexVerifier, NSDictionary, NSString;

@protocol EDSearchableIndexVerifierDataSource <NSObject>
- (EDSearchableIndex *)searchableIndexForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1;
- (NSDictionary *)dataSamplesForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1 searchableIndex:(EDSearchableIndex *)arg2 count:(NSUInteger)arg3;
- (NSString *)bundleIdentifierForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1;
@end

