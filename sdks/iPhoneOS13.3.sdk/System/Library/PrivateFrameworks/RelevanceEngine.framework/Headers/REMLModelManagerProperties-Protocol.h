//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class NSArray, REContentRanker, REMLModel;

@protocol REMLModelManagerProperties <REExportedInterface>
@property(readonly, nonatomic) NSArray *orderedFeatures;
@property(readonly, nonatomic) BOOL supportsContentRanking;
@property(readonly, nonatomic) REContentRanker *contentRanker;
@property(readonly, nonatomic) REMLModel *model;
@property(readonly, nonatomic) NSUInteger modelVersionNumber;
@end

