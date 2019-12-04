//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSMutableArray, NSString, NSUUID;

@interface _HDObjectAuthorizationPromptSession : NSObject
{
    HDProfile *_profile;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    _Bool _didStartTransaction;
    NSString *_bundleIdentifier;
    NSUUID *_sessionIdentifier;
    id /* block */ _sessionCompletion;
}

@property(copy, nonatomic) id /* block */ sessionCompletion; // @synthesize sessionCompletion=_sessionCompletion;
@property(readonly, copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)sessionDescriptor;
- (void)endPromptTransactionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)beginPromptTransactionWithCompletion:(id /* block */)arg1;
- (void)timeoutExpired;
- (void)beginPromptSessionWithCompletion:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (void)addRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long requestCount;
- (id)initWithBundleIdentifier:(id)arg1 profile:(id)arg2;

@end
