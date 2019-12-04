//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMObject.h>

#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/EMMutableContentItem-Protocol.h>


@class EMMailDropMetadata, EMObjectID, NSArray, NSString;

@interface _EMAttachmentContentItem : EMObject <EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding>
{
    _Bool _isAvailableLocally;
    _Bool _isSinglePagePDF;
    int _exchangeEventUID;
    NSArray *_availableRepresentations;
    NSString *_contentID;
    long long _dataTransferByteCount;
    NSString *_displayName;
    id /* block */ _loaderBlock;
    long long _storageByteCount;
    NSString *_UTType;
    EMMailDropMetadata *_mailDropMetadata;
}

+ (_Bool)supportsSecureCoding;
- (void)setExchangeEventUID:(int)arg1;
@property(readonly, nonatomic) int exchangeEventUID;
- (void)setMailDropMetadata:(id)arg1;
@property(readonly, copy, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property(nonatomic) _Bool isSinglePagePDF; // @synthesize isSinglePagePDF=_isSinglePagePDF;
- (void)setUTType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *UTType;
- (void)setStorageByteCount:(long long)arg1;
@property(readonly, nonatomic) long long storageByteCount;
@property(copy, nonatomic) id /* block */ loaderBlock; // @synthesize loaderBlock=_loaderBlock;
- (void)setIsAvailableLocally:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isAvailableLocally;
- (void)setDisplayName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *displayName;
- (void)setDataTransferByteCount:(long long)arg1;
@property(readonly, nonatomic) long long dataTransferByteCount;
- (void)setContentID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *contentID;
- (void)setAvailableRepresentations:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *availableRepresentations;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly, copy, nonatomic) EMObjectID *objectID;
@property(readonly) Class superclass;

@end
