//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMCaptureManagerVideoFrameObserver-Protocol.h>

@class AXMCaptureManager, AXMFaceDetectorNode, AXMImageNode, AXMSceneDetectorNode, AXMVisionAnalysisOptions, AXMVisionEngine, NSString;

@interface _AXMCaptureManagerDetectionEngine : NSObject <AXMCaptureManagerVideoFrameObserver>
{
    AXMCaptureManager *_captureManager;
    AXMVisionEngine *_visionEngine;
    AXMImageNode *_imageNode;
    AXMSceneDetectorNode *_sceneDetector;
    AXMFaceDetectorNode *_faceDetector;
    AXMVisionAnalysisOptions *_analysisOptions;
}

- (void)captureManager:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2;
- (id)initWithCaptureManager:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
