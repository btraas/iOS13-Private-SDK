//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate, NSString;

@protocol EDSearchableIndexAttachmentItemMetadatumBuilder <NSObject>
@property(retain, nonatomic) NSDate *dateSent;
@property(retain, nonatomic) NSDate *dateReceived;
@property(copy, nonatomic) NSArray *recipientAddresses;
@property(copy, nonatomic) NSString *senderAddress;
@property(copy, nonatomic) NSArray *mailboxIdentifiers;
@property(copy, nonatomic) NSString *accountIdentifier;
@property(copy, nonatomic) NSString *domainIdentifier;
@end

