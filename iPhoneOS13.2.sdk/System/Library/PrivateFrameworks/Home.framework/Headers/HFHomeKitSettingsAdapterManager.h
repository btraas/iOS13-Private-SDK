//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol HFHomeKitSettingsVendor;

@interface HFHomeKitSettingsAdapterManager : NSObject
{
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    NSMutableDictionary *_adaptersByID;
}

@property(readonly, nonatomic) NSMutableDictionary *adaptersByID; // @synthesize adaptersByID=_adaptersByID;
@property(readonly, nonatomic) __weak id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
- (id)_createAdapterForIdentifier:(id)arg1;
- (id)adapterForIdentifier:(id)arg1;
- (id)init;
- (id)initWithHomeKitSettingsVendor:(id)arg1;

@end
