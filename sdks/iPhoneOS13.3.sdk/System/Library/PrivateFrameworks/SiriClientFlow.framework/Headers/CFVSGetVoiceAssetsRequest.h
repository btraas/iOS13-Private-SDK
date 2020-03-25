//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>

@class NSString;

@interface CFVSGetVoiceAssetsRequest : SABaseClientBoundCommand <CFLocalAceHandling>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getVoiceAssetsRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getVoiceAssetsRequest;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *quality;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *gender;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* CDUnknownBlockType */)arg1;

@end
