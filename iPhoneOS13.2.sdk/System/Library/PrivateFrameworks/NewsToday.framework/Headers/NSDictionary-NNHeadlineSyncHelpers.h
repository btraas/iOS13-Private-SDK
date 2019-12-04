//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <NewsToday/NNSyncableHeadline-Protocol.h>
#import <NewsToday/NNSyncableResult-Protocol.h>
#import <NewsToday/NNSyncableSection-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@interface NSDictionary (NNHeadlineSyncHelpers) <NNSyncableResult, NNSyncableSection, NNSyncableHeadline>
@property(readonly, nonatomic) NSString *sync_NewsURLString;
@property(readonly, nonatomic) NSString *sync_webURLString;
@property(readonly, nonatomic) NSData *sync_publisherLogoImageData;
@property(readonly, nonatomic) NSData *sync_thumbnailImageData;
@property(readonly, nonatomic) NSString *sync_colorHexString;
@property(readonly, nonatomic) NSString *sync_publisherIdentifier;
@property(readonly, nonatomic) NSString *sync_publisherName;
@property(readonly, nonatomic) NSArray *sync_headlines;
@property(readonly, nonatomic) NSString *sync_excerpt;
@property(readonly, nonatomic) NSString *sync_title;
@property(readonly, nonatomic) unsigned long long sync_type;
@property(readonly, nonatomic) NSString *sync_name;
@property(readonly, nonatomic) NSString *sync_identifier;
@property(readonly, nonatomic) unsigned long long sync_headlineCount;
@property(readonly, nonatomic) NSArray *sync_sections;
@property(readonly, nonatomic) NSDate *sync_expirationDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
