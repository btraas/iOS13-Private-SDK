//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsPipelineLibrary.h>

@class NSString;

@interface MTLDebugPipelineLibrary : MTLToolsPipelineLibrary
{
    NSString *_filePath;
}

@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)dealloc;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 filePath:(id)arg3;

@end
