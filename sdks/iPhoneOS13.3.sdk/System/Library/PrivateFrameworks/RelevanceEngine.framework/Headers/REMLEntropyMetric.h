//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REMLMetricsProvider-Protocol.h>

@class NSMutableArray, NSString;

@interface REMLEntropyMetric : NSObject <REMLMetricsProvider>
{
    NSString *_metricName;
    NSString *_predictionFeatureName;
    NSString *_truthFeatureName;
    long long _arrayFeatureIndex;
    long long _numExamples;
    double _sumTruth;
    double _sumPrediction;
    double _logScore;
    double _normalizedLogScore;
    NSUInteger _calibrationCurveNumBuckets;
    NSMutableArray *_calibrationCurveTotal;
    NSMutableArray *_calibrationCurveTrue;
}

// - (void).cxx_destruct;
- (void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3;
- (double)getDoubleFromFeatureValue:(id)arg1;
- (id)calibrationCurveTrue;
- (id)calibrationCurveTotal;
- (NSUInteger)calibrationCurveNumBuckets;
- (long long)numberOfExamples;
- (id)meanPrediction;
- (id)meanTruth;
- (id)meanNormalizedEntropy;
- (id)meanEntropy;
- (void)resetToLastCheckpointBeforeDate:(id)arg1;
- (void)createCheckpoint;
- (void)reset;
- (id)name;
- (id)initWithName:(id)arg1 featureName:(id)arg2;

@end

