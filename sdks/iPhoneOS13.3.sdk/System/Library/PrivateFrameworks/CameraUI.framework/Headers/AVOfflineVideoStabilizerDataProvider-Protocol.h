//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVOfflineVideoStabilizer, NSDictionary;

@protocol AVOfflineVideoStabilizerDataProvider <NSObject>
- (NSDictionary *)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 )arg2 stabilizer:(AVOfflineVideoStabilizer *)arg3;
- (struct __CVBuffer )copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 )arg2 stabilizer:(AVOfflineVideoStabilizer *)arg3;
@end

