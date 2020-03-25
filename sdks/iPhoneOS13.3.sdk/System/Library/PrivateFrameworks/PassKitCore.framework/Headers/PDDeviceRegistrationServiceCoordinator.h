//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PDScheduledActivityClient-Protocol.h>

@class NSMutableArray, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDDeviceRegistrationServiceCoordinator : NSObject <PDScheduledActivityClient>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;
}

@property(readonly, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
@property(readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
// - (void).cxx_destruct;
- (BOOL)_shouldAttemptBackgroundPeerPaymentRegistration;
- (void)_handlePaymentWebServiceContextChanged:(id)arg1;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_peerPaymentRegisterWithURL:(id)arg1 paymentWebService:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_handleDeviceRegistrationCompletedWithResult:(NSUInteger)arg1;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceRegister:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceRegister:(BOOL)arg2;
- (void)performDeviceRegistrationForReason:(id)arg1 action:(long long)arg2 forceRegister:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)notePasscodeChanged;
- (void)dealloc;
- (id)initWithPaymentWebServiceCoordinator:(id)arg1 peerPaymentWebServiceCoordinator:(id)arg2;
- (id)init;

@end
