//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/WFSelectContactsAction.h>

#import <ActionKitUI/CNContactPickerDelegate-Protocol.h>

@class NSString;

@interface WFSelectContactsAction (UIKit) <CNContactPickerDelegate>
- (void)contactPicker:(id)arg1 didSelectContactProperties:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
