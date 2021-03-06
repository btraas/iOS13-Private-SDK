//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet;
@protocol PXLoadingStatusManagerDelegate;

@interface PXLoadingStatusManager : NSObject
{
    struct {
        BOOL respondsToDidUpdateLoadingStatusForItem;
    } _delegateFlags;
    BOOL __isUpdateScheduled;
    id <PXLoadingStatusManagerDelegate> _delegate;
    NSMutableSet *__invalidLoadingStatusItems;
    NSMapTable *__loadOperationTrackingIDsByItem;
    NSMapTable *__loadingStatusByItem;
    NSMutableDictionary *__itemByLoadOperationTrackingID;
    NSMutableDictionary *__loadingStatusByLoadOperationTrackingID;
}

@property(readonly, nonatomic) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID; // @synthesize _loadingStatusByLoadOperationTrackingID=__loadingStatusByLoadOperationTrackingID;
@property(readonly, nonatomic) NSMutableDictionary *_itemByLoadOperationTrackingID; // @synthesize _itemByLoadOperationTrackingID=__itemByLoadOperationTrackingID;
@property(readonly, nonatomic) NSMapTable *_loadingStatusByItem; // @synthesize _loadingStatusByItem=__loadingStatusByItem;
@property(readonly, nonatomic) NSMapTable *_loadOperationTrackingIDsByItem; // @synthesize _loadOperationTrackingIDsByItem=__loadOperationTrackingIDsByItem;
@property(readonly, nonatomic) NSMutableSet *_invalidLoadingStatusItems; // @synthesize _invalidLoadingStatusItems=__invalidLoadingStatusItems;
@property(nonatomic, setter=_setUpdateScheduled:) BOOL _isUpdateScheduled; // @synthesize _isUpdateScheduled=__isUpdateScheduled;
@property(nonatomic) __weak id <PXLoadingStatusManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateLoadingStatusForItem:(id)arg1;
- (void)_updateLoadingStatusForItemIfNeeded:(id)arg1;
- (void)_updateLoadingStatusForItemsIfNeeded;
- (void)_invalidateLoadingStatusForItem:(id)arg1;
- (void)_updateNowIfNeeded;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_resetLoadingStatusForItemIfAppropriate:(id)arg1;
- (void)_setLoadingStatus:(id)arg1 forItem:(id)arg2;
- (void)_setLoadingStatus:(id)arg1 forLoadOperationTrackingID:(NSString )arg2;
- (void)didCancelLoadOperationWithTrackingID:(NSString )arg1;
- (void)didCompleteLoadOperationWithTrackingID:(NSString )arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
- (void)didUpdateLoadOperationWithTrackingID:(NSString )arg1 withProgress:(double)arg2;
- (NSString )willBeginLoadOperationWithItem:(id)arg1;
- (id)loadingStatusForItem:(id)arg1;
- (id)init;

@end

