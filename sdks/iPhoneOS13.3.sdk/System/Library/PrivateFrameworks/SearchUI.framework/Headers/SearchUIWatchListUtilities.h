//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SearchUIWatchListUtilities : NSObject
{
    BOOL _isWatchListed;
    NSString *_watchListIdentifier;
}

+ (void)generateWatchListReponseForWatchListIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property(nonatomic) BOOL isWatchListed; // @synthesize isWatchListed=_isWatchListed;
// - (void).cxx_destruct;
- (void)toggleWatchListWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithIdentifier:(id)arg1 watchListed:(BOOL)arg2;
- (id)initWithResponse:(id)arg1;

@end

