//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVFileProcessor : NSObject
{
    float _percentComplete;
}

+ (id)fileProcessor;
- (id)sinfInfoFromFilePath:(id)arg1;
- (id)sinfsFromFilePath:(id)arg1;
- (id)rentalInfo:(id)arg1;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id )arg3 progressBlock:(id /* CDUnknownBlockType */)arg4;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id )arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2;

@end

