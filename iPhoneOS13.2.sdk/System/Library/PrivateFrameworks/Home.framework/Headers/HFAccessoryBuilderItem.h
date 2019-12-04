//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFItemBuilderItem-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HFAccessoryBuilder, HMHome, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject, HFServiceLikeItem;

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem>
{
    HFAccessoryBuilder *_accessoryBuilder;
    HFItem<HFServiceLikeItem> *_accessoryItem;
}

@property(retain, nonatomic) HFItem<HFServiceLikeItem> *accessoryItem; // @synthesize accessoryItem=_accessoryItem;
@property(retain, nonatomic) HFAccessoryBuilder *accessoryBuilder; // @synthesize accessoryBuilder=_accessoryBuilder;
- (id)namingComponentForHomeKitObject;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)accessories;
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) HMHome *home;
@property(readonly) Class superclass;

@end
