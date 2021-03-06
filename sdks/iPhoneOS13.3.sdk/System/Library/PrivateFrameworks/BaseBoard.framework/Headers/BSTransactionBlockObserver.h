//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSTransactionObserver-Protocol.h>

@class NSMutableArray;

@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver>
{
    NSMutableArray *_willBeginBlocks;
    NSMutableArray *_didBeginBlocks;
    NSMutableArray *_didFinishWorkBlocks;
    NSMutableArray *_didCompleteBlocks;
}

// - (void).cxx_destruct;
- (void)transactionDidComplete:(id)arg1;
- (void)transactionDidFinishWork:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (void)transactionWillBegin:(id)arg1;
- (void)addTransactionDidCompleteBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addTransactionDidFinishWorkBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addTransactionDidBeginBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addTransactionWillBeginBlock:(id /* CDUnknownBlockType */)arg1;

@end

