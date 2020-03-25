//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer;

@interface PKMetalLiveStrokePaintRenderCacheBuffer : NSObject
{
    id <MTLBuffer> _strokePointBuffer;
    NSUInteger _strokePointBufferOffset;
    id <MTLBuffer> _liveStrokePointBuffer;
    NSUInteger _liveStrokePointBufferOffset;
    NSUInteger _numVertices;
    NSUInteger _numPoints;
}

@property(readonly, nonatomic) NSUInteger numPoints; // @synthesize numPoints=_numPoints;
@property(readonly, nonatomic) NSUInteger numVertices; // @synthesize numVertices=_numVertices;
@property(readonly, nonatomic) NSUInteger liveStrokePointBufferOffset; // @synthesize liveStrokePointBufferOffset=_liveStrokePointBufferOffset;
@property(readonly, nonatomic) id <MTLBuffer> liveStrokePointBuffer; // @synthesize liveStrokePointBuffer=_liveStrokePointBuffer;
@property(readonly, nonatomic) NSUInteger strokePointBufferOffset; // @synthesize strokePointBufferOffset=_strokePointBufferOffset;
@property(readonly, nonatomic) id <MTLBuffer> strokePointBuffer; // @synthesize strokePointBuffer=_strokePointBuffer;
// - (void).cxx_destruct;
- (id)initWithPoints:(const struct PKMetalPaintStrokePoint )arg1 liveStrokePoints:(const struct PKMetalLiveStrokePaintStrokePoint )arg2 numPoints:(NSUInteger)arg3 numVertices:(NSUInteger)arg4 resourceHandler:(id)arg5;
- (id)init;

@end
