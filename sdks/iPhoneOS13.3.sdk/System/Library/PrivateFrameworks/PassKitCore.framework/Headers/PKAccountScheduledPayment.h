//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PKAccountPaymentFundingSource, PKCurrencyAmount;

@interface PKAccountScheduledPayment : NSObject <NSSecureCoding>
{
    PKCurrencyAmount *_currencyAmount;
    PKAccountPaymentFundingSource *_fundingSource;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKAccountPaymentFundingSource *fundingSource; // @synthesize fundingSource=_fundingSource;
@property(retain, nonatomic) PKCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hashComponentWithCertificatesResponse:(id)arg1;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;
- (id)initWithCurrencyAmount:(id)arg1 fundingSource:(id)arg2;
- (id)init;

@end

