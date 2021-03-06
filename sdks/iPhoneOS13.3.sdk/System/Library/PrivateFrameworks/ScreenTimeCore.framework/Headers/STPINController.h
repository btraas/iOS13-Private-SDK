//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, STCoreUser;
@protocol OS_dispatch_source;

@interface STPINController : NSObject
{
    NSDate *_timeoutEndDate;
    STCoreUser *_user;
    NSObject<OS_dispatch_source> *_backoffTimer;
}

+ (NSUInteger)pinLength;
@property(retain) NSObject<OS_dispatch_source> *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(readonly, nonatomic) STCoreUser *user; // @synthesize user=_user;
@property(copy) NSDate *timeoutEndDate; // @synthesize timeoutEndDate=_timeoutEndDate;
// - (void).cxx_destruct;
- (void)_beginTimeoutUntilDate:(id)arg1;
- (id)_timeoutEndDateForAttemptNumber:(long long)arg1;
- (BOOL)_authenticateWithPIN:(id)arg1 forUser:(id)arg2 error:(id )arg3;
- (void)authenticateWithPIN:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)authenticateWithPIN:(id)arg1 error:(id )arg2;
- (BOOL)_saveChangesForUser:(id)arg1 error:(id )arg2;
- (BOOL)_setPasscode:(id)arg1 recoveryAppleID:(id)arg2 forUser:(id)arg3 error:(id )arg4;
- (void)_setNewPIN:(id)arg1 currentPIN:(id)arg2 recoveryAppleIDPrompt:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)_isPINValid:(id)arg1;
- (void)removePIN:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updatePIN:(id)arg1 toPIN:(id)arg2 withRecoveryAppleIDPrompt:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)setPIN:(id)arg1 withRecoveryAppleIDPrompt:(id /* CDUnknownBlockType */)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithUser:(id)arg1;

@end

