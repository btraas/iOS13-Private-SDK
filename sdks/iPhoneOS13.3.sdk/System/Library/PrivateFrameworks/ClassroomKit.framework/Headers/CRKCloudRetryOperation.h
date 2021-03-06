//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class CATOperationQueue, CRKCloudOperation;
@protocol CRKCloudResetable;

@interface CRKCloudRetryOperation : CATOperation
{
    NSUInteger mAttempts;
    CRKCloudOperation<CRKCloudResetable> *_cloudOperation;
    CATOperationQueue *_operationQueue;
}

@property(readonly, nonatomic) CATOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) CRKCloudOperation<CRKCloudResetable> *cloudOperation; // @synthesize cloudOperation=_cloudOperation;
// - (void).cxx_destruct;
- (void)performRetry:(id)arg1;
- (void)cloudOperationDidFinish:(id)arg1;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithOperationQueue:(id)arg1 cloudOperation:(id)arg2;

@end

