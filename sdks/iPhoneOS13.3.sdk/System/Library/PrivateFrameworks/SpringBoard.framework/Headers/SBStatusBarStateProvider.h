//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBStatusBarStateAggregatorPosting-Protocol.h>

@class NSHashTable, NSMutableArray, SBStatusBarStateAggregator;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider>
{
    SBStatusBarStateAggregator *_stateAggregator;
    NSHashTable *_stateObservers;
    CDStruct_0942cde0 _aggregatorData;
    int _aggregatorActions;
    CDStruct_0942cde0 _lastPost;
    NSUInteger _coalescentBlockDepth;
    BOOL _itemNeedsPost[42];
    BOOL _anyItemNeedsPost;
    BOOL _nonItemDataNeedsPost;
    BOOL _posting;
    NSMutableArray *_stylesWithDetailUpdates;
}

// - (void).cxx_destruct;
- (void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const CDStruct_0942cde0 )arg2 actions:(int)arg3;
- (void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const CDStruct_0942cde0 )arg2;
- (void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const CDStruct_0942cde0 )arg4;
- (void)statusBarStateAggregatorDidStartPost:(id)arg1;
- (void)_didFinishPost;
- (void)_composePostActionsFromAggregatorActions:(int )arg1;
- (void)_composePostDataFromAggregatorData:(CDStruct_0942cde0 )arg1;
- (BOOL)_shouldPostForUpdatesToNonItemData:(const CDStruct_0942cde0 )arg1;
- (BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const CDStruct_0942cde0 )arg3 lastPost:(const CDStruct_0942cde0 )arg4;
- (void)_didChangeDoubleHeightStatusStringForStyle:(long long)arg1;
- (void)updateStatusBarItem:(int)arg1;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (void)getStatusBarData:(CDStruct_0942cde0 )arg1;
- (void)removeStatusBarStateObserver:(id)arg1;
- (void)addStatusBarStateObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

