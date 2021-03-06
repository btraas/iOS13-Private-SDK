//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMChat, NSArray, NSCache;
@protocol IMAssistantAccountDataSource, IMAssistantChatDataSource, IMAssistantContactsDataSource, IMLocationManager;

@protocol IMAssistantMessageHandlerDataSource <NSObject>
@property(readonly, nonatomic) BOOL isInternationalSpamFilteringEnabled;
@property(readonly, nonatomic) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property(readonly, nonatomic) NSCache *spiHandleToPersonCache;
@property(readonly, nonatomic) NSCache *handleToContactIdentifierCache;
@property(readonly, nonatomic) id <IMLocationManager> locationManagerDataSource;
@property(readonly, nonatomic) id <IMAssistantAccountDataSource> accountDataSource;
@property(readonly, nonatomic) id <IMAssistantChatDataSource> chatDataSource;
@property(readonly, nonatomic) id <IMAssistantContactsDataSource> contactsDataSource;
- (BOOL)screentimeAllowedToShowConversationWithHandleIDs:(NSArray *)arg1;
- (BOOL)screentimeAllowedToShowChat:(IMChat *)arg1;
@end

