//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSSet;

@protocol SGDSuggestManagerURLsProtocol
- (void)urlsFoundBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 excludingBundleIdentifiers:(NSSet *)arg3 limit:(unsigned int)arg4 withCompletion:(void (^)(SGXPCResponse1 *))arg5;
- (void)recentURLsWithLimit:(unsigned int)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
@end

