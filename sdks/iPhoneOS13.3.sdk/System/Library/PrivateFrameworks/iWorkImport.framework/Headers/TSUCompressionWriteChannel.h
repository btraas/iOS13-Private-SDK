//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUStreamWriteChannel-Protocol.h>

@class TSUStreamCompression;
@protocol TSUStreamWriteChannel;

__attribute__((visibility("hidden")))
@interface TSUCompressionWriteChannel : NSObject <TSUStreamWriteChannel>
{
    id <TSUStreamWriteChannel> _writeChannel;
    TSUStreamCompression *_compressor;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)writeData:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)flushWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setLowWater:(NSUInteger)arg1;
- (void)addBarrier:(id /* CDUnknownBlockType */)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1 compressionAlgorithm:(int)arg2 operation:(int)arg3;

@end

