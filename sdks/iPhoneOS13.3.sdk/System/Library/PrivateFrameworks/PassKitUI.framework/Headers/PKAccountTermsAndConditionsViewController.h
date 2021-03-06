//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKFeatureTermsAndConditionsViewController.h>

@class NSString, PKAccount, PKPaymentWebService;

@interface PKAccountTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController
{
    PKAccount *_account;
    PKPaymentWebService *_webService;
    NSString *_termsIdentifier;
}

// - (void).cxx_destruct;
- (void)_termsDataForIdentifier:(id)arg1 format:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)presentErrorAlert;
- (void)termsAccepted:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)termsShown;
- (void)pdfTermsDataWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)htmlTermsDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)initalTermsDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)displayTitle;
- (id)initWithAccount:(id)arg1 webService:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4;

@end

