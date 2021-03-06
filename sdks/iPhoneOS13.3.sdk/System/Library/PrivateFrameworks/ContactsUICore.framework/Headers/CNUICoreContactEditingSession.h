//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUICoreContactScratchpad, NSArray;

@interface CNUICoreContactEditingSession : NSObject
{
    CNUICoreContactScratchpad *_contactsAdded;
    CNUICoreContactScratchpad *_contactsUpdated;
    CNUICoreContactScratchpad *_contactsRemoved;
}

+ (BOOL)isEdiingStateOfContactValid:(long long)arg1;
@property(retain, nonatomic) CNUICoreContactScratchpad *contactsRemoved; // @synthesize contactsRemoved=_contactsRemoved;
@property(retain, nonatomic) CNUICoreContactScratchpad *contactsUpdated; // @synthesize contactsUpdated=_contactsUpdated;
@property(retain, nonatomic) CNUICoreContactScratchpad *contactsAdded; // @synthesize contactsAdded=_contactsAdded;
// - (void).cxx_destruct;
- (id)description;
- (id)applyChangesToContacts:(id)arg1;
- (id)generateSaveRequest;
- (id)removedContactsMatchingContacts:(id)arg1;
- (id)updatedContactsMatchingContacts:(id)arg1;
- (id)addedContactsMatchingContacts:(id)arg1;
- (BOOL)containsRemovedContactMatchingContact:(id)arg1;
- (BOOL)containsUpdatedContactMatchingContact:(id)arg1;
- (BOOL)containsAddedContactMatchingContact:(id)arg1;
@property(readonly, nonatomic) NSArray *removedContacts;
@property(readonly, nonatomic) NSArray *updatedContacts;
@property(readonly, nonatomic) NSArray *addedContacts;
- (void)removeContacts:(id)arg1;
- (void)updateContacts:(id)arg1;
- (void)verifyConsistencyOfEditingSessionForContact:(id)arg1;
- (BOOL)wasContactRemoved:(id)arg1;
- (BOOL)wasContactUpdated:(id)arg1;
- (BOOL)wasContactAdded:(id)arg1;
- (BOOL)isContactUnseen:(id)arg1;
- (long long)editingStateOfContact:(id)arg1;
- (void)addContacts:(id)arg1;
@property(readonly, nonatomic) BOOL inProgress;
- (id)init;

@end

