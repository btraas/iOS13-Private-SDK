//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppContext, NSMutableDictionary;

@interface IKJSArrayBufferStore : NSObject
{
    NSMutableDictionary *_bufferStorage;
    IKAppContext *_appContext;
}

@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, nonatomic) NSMutableDictionary *bufferStorage; // @synthesize bufferStorage=_bufferStorage;
// - (void).cxx_destruct;
- (id)arrayBufferForData:(id)arg1;
- (id)initWithAppContext:(id)arg1;

@end

