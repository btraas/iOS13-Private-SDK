//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/ISURLBagObserver-Protocol.h>

@class NSDictionary, SUScriptDictionary;
@protocol OS_dispatch_queue;

@interface SUScriptStoreBagLoader : NSObject <ISURLBagObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_bagDictionary;
    SUScriptDictionary *_scriptStoreBagDictionary;
}

// - (void).cxx_destruct;
- (void)_updateWithBagDictionary:(id)arg1 allowsPostingBagDidChangeNotification:(BOOL)arg2;
- (void)bagDidChange:(id)arg1;
- (id)scriptStoreBagDictionary;
- (void)dealloc;
- (id)init;

@end
