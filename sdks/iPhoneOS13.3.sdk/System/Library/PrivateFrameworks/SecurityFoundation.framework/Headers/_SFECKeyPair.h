//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFKeyPair.h>

@interface _SFECKeyPair : _SFKeyPair
{
    id _ecKeyPairInternal;
}

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey )arg1;
// - (void).cxx_destruct;
- (id)performWithCCKey:(id /* CDUnknownBlockType */)arg1;
- (id)publicKey;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(NSString )arg2;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;

@end

