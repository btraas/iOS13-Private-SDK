//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSArray, NSString;

@interface PKPeerPaymentQuoteCertificatesResponse : PKPeerPaymentWebServiceResponse
{
    _Bool _devSigned;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVersion;
}

@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(readonly, copy, nonatomic) NSString *encryptionVersion; // @synthesize encryptionVersion=_encryptionVersion;
@property(readonly, copy, nonatomic) NSArray *encryptionCertificates; // @synthesize encryptionCertificates=_encryptionCertificates;
- (id)initWithData:(id)arg1;

@end
