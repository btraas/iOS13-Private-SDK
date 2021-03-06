//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSObject, TRSession;
@protocol OS_dispatch_semaphore;

@interface TROperation : NSOperation
{
    TRSession *_session;
    NSDictionary *_result;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)userCancelledError;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(retain, nonatomic) TRSession *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)finishWithResult:(id)arg1;
- (void)execute;
- (void)main;
- (id)initWithSession:(id)arg1;

@end

