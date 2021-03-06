//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDPersistence/SGMessagesSuggestionsServiceDelegate-Protocol.h>

@protocol NSObject><SGSuggestionsServiceMessagesProtocol;

@interface IMDSuggestions : NSObject <SGMessagesSuggestionsServiceDelegate>
{
    id <NSObject><SGSuggestionsServiceMessagesProtocol> _sgService;
}

@property(retain) id <NSObject><SGSuggestionsServiceMessagesProtocol> sgService; // @synthesize sgService=_sgService;
- (id)suggestionsService:(id)arg1 needsContextForConversationIdentifier:(id)arg2 numberOfMessagesNeeded:(NSUInteger)arg3;
- (void)suggestionsFromMessage:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;
- (id)init;

@end

