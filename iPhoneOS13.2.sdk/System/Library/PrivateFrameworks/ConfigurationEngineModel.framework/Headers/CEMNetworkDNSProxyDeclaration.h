//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAnyPayload, NSString;

@interface CEMNetworkDNSProxyDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadAppBundleIdentifier;
    NSString *_payloadProviderBundleIdentifier;
    CEMAnyPayload *_payloadProviderConfiguration;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2 withProviderBundleIdentifier:(id)arg3 withProviderConfiguration:(id)arg4;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) CEMAnyPayload *payloadProviderConfiguration; // @synthesize payloadProviderConfiguration=_payloadProviderConfiguration;
@property(copy, nonatomic) NSString *payloadProviderBundleIdentifier; // @synthesize payloadProviderBundleIdentifier=_payloadProviderBundleIdentifier;
@property(copy, nonatomic) NSString *payloadAppBundleIdentifier; // @synthesize payloadAppBundleIdentifier=_payloadAppBundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
