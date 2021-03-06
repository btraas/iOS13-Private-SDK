//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfigurationUI/MCInteractionDelegate-Protocol.h>

@class MCProfile, MCUIProfile, NSData, NSString, UIViewController;
@protocol MCProfileTitlePageViewModelDelegate, OS_dispatch_queue;

@interface MCProfileTitlePageViewModel : NSObject <MCInteractionDelegate>
{
    BOOL _isInstallingProfile;
    int _installState;
    UIViewController<MCProfileTitlePageViewModelDelegate> *_delegate;
    MCProfile *_profile;
    NSData *_profileData;
    NSString *_pin;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MCUIProfile *_UIProfile;
    NSString *_personaID;
    id /* CDUnknownBlockType */ _cleanupTask;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ cleanupTask; // @synthesize cleanupTask=_cleanupTask;
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
@property(nonatomic) int installState; // @synthesize installState=_installState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(nonatomic) BOOL isInstallingProfile; // @synthesize isInstallingProfile=_isInstallingProfile;
@property(retain, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak UIViewController<MCProfileTitlePageViewModelDelegate> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_installErrorIsUserCancelledError:(id)arg1;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
- (void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)profileConnection:(id)arg1 didRequestMAIDSignIn:(id)arg2 personaID:(id)arg3;
- (void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
- (void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
- (id)_createAuthenticationContext:(id)arg1 presentingViewController:(id)arg2;
- (void)_signInMAID:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_respondToMAIDAuthenticationRequestIfNeeded:(id)arg1 successful:(BOOL)arg2 error:(id)arg3 isCancelled:(BOOL)arg4;
- (void)_handleMAIDSignInRequestWithAccountID:(id)arg1 personaID:(id)arg2 connection:(id)arg3;
- (void)_respondToUserInputRequest:(id)arg1 cancelled:(BOOL)arg2;
- (void)_handleUserInputRequest:(id)arg1;
- (void)terminateProfileInstallationFlowAndDeleteProfile;
- (void)terminateProfileInstallationFlow;
- (void)_installFinishedWithIdentifier:(id)arg1 error:(id)arg2;
- (void)_continueInstallAfterPresentingWarnings;
- (void)startProfileInstallationFlow;
@property(readonly, nonatomic) NSString *accountIdentifier;
- (void)dealloc;
- (void)_setup;
- (id)init;
- (id)initWithProfile:(id)arg1 profileData:(id)arg2;

@end

