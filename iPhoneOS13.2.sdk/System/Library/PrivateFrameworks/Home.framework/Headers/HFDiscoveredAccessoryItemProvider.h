//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFAccessoryBrowsingManager, NSMutableSet;

@interface HFDiscoveredAccessoryItemProvider : HFItemProvider
{
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;
    id /* block */ _filter;
    NSMutableSet *_discoveredAccessoryItems;
}

@property(retain, nonatomic) NSMutableSet *discoveredAccessoryItems; // @synthesize discoveredAccessoryItems=_discoveredAccessoryItems;
@property(copy, nonatomic) id /* block */ filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithAccessoryBrowsingManager:(id)arg1;
- (id)init;

@end
