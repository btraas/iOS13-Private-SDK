//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface REUpNextMLModelManager : NSObject
{
}

+ (void)removeStoredModel;
- (float)predicitedProbabilityForLogicalElement:(id)arg1;
- (id)comparatorWithRules:(id)arg1;
- (void)performTrainingWithFeatureMaps:(id)arg1 events:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

@end

