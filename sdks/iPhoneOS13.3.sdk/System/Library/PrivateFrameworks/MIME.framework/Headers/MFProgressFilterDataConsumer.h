//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer
{
    NSUInteger _expectedSize;
    NSUInteger _currentBytes;
    id /* CDUnknownBlockType */ _progressBlock;
}

@property(readonly) NSUInteger expectedSize; // @synthesize expectedSize=_expectedSize;
@property(copy, nonatomic) id /* CDUnknownBlockType */ progressBlock; // @synthesize progressBlock=_progressBlock;
// - (void).cxx_destruct;
- (long long)appendData:(id)arg1;
- (id)initWithConsumers:(id)arg1 expectedSize:(NSUInteger)arg2;
- (id)initWithConsumer:(id)arg1 expectedSize:(NSUInteger)arg2;

@end

