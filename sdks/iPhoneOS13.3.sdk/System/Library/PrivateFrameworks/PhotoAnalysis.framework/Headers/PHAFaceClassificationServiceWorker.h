//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

#import <PhotoAnalysis/PVVisionIntegrating-Protocol.h>

@class NSMutableArray, NSObject, PHAAnalysisWorkerJob, PVContext, PVVisionAnalyzer, VNPersonsModel;
@protocol OS_dispatch_queue;

@interface PHAFaceClassificationServiceWorker : PHAWorker <PVVisionIntegrating>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_pendingAssetIdentifiers;
    PHAAnalysisWorkerJob *_currentJob;
    PVContext *_context;
    PVVisionAnalyzer *_analyzer;
    VNPersonsModel *_personsModel;
    NSUInteger _numberOfAssetsToProcess;
}

+ (BOOL)persistsState;
+ (long long)applicationDataFolderIdentifier;
+ (short)workerType;
@property NSUInteger numberOfAssetsToProcess; // @synthesize numberOfAssetsToProcess=_numberOfAssetsToProcess;
@property(retain) VNPersonsModel *personsModel; // @synthesize personsModel=_personsModel;
@property(retain) PVVisionAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
@property(retain) PVContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)loadPersonsModel;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (void)processPendingAssetIdentifiers;
- (void)_cleanup;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id )arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id )arg2;
- (void)cooldown;
- (void)warmupWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

@end

