//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TestFlightCore/SBSRemoteAlertHandleObserver-Protocol.h>

@class BSProcessHandle, NSString;
@protocol TFBetaLaunchHandleActivationDelegate;

@interface TFBetaLaunchHandle : NSObject <SBSRemoteAlertHandleObserver>
{
    id <TFBetaLaunchHandleActivationDelegate> _activationDelegate;
    BSProcessHandle *_processHandle;
    NSString *_logKey;
}

@property(readonly, copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) BSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property(nonatomic) __weak id <TFBetaLaunchHandleActivationDelegate> activationDelegate; // @synthesize activationDelegate=_activationDelegate;
// - (void).cxx_destruct;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)_updatedLaunchInfoForActivation:(id)arg1;
- (void)_activateRemoteAlertWithLaunchInfo:(id)arg1;
- (void)activateForTestingWithLaunchInfo:(id)arg1;
- (BOOL)_remoteAlertShouldActivateForLaunchInfo:(id)arg1;
- (void)activateIfNeeded;
- (id)initWithProcessHandle:(id)arg1;

@end

