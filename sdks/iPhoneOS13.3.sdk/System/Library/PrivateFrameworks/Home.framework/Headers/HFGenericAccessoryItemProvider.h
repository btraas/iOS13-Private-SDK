//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFGenericAccessoryItemProvider : HFItemProvider
{
    id /* CDUnknownBlockType */ _filter;
    HMHome *_home;
    NSMutableSet *_genericItems;
}

@property(retain, nonatomic) NSMutableSet *genericItems; // @synthesize genericItems=_genericItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (BOOL)_isAccessorySupported:(id)arg1;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

@end

