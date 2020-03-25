//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NMSDeviceSourced-Protocol.h>
#import <CompanionSync/NMSObfuscatableDescriptionProviding-Protocol.h>

@class IDSMessageContext, NSData, NSDate, NSDictionary, NSString;

@interface NMSIncomingResponse : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>
{
    unsigned short _messageID;
    NSString *sourceDeviceID;
    NSData *_data;
    NSString *_idsIdentifier;
    NSString *_requestIDSIdentifier;
    NSDate *_requestSent;
    NSDictionary *_requestPersistentUserInfo;
    id _pbResponse;
    IDSMessageContext *_idsContext;
}

@property(retain, nonatomic) IDSMessageContext *idsContext; // @synthesize idsContext=_idsContext;
@property(retain, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
@property(retain, nonatomic) NSDictionary *requestPersistentUserInfo; // @synthesize requestPersistentUserInfo=_requestPersistentUserInfo;
@property(retain, nonatomic) NSDate *requestSent; // @synthesize requestSent=_requestSent;
@property(copy, nonatomic) NSString *requestIDSIdentifier; // @synthesize requestIDSIdentifier=_requestIDSIdentifier;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSString *sourceDeviceID; // @synthesize sourceDeviceID;
// - (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
@property(readonly, copy) NSString *description;

@end
