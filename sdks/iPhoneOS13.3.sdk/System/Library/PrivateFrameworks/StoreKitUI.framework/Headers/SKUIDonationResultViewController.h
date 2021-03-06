//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIDonationStepViewController.h>

#import <StoreKitUI/SKUIDonationConfigurationObserver-Protocol.h>

@class SKUIDonationResultView, SKUIGiftAmount;

__attribute__((visibility("hidden")))
@interface SKUIDonationResultViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver>
{
    SKUIGiftAmount *_donationAmount;
    SKUIDonationResultView *_resultView;
}

@property(copy, nonatomic) SKUIGiftAmount *donationAmount; // @synthesize donationAmount=_donationAmount;
// - (void).cxx_destruct;
- (void)_doneButtonAction:(id)arg1;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (void)loadView;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;

@end

