//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/EMMailboxTypeResolver-Protocol.h>

@class EMMailbox, EMObjectID, NSArray;
@protocol ECMailbox, EDMailboxProviderDelegate;

@protocol EDMailboxProvider <EMMailboxTypeResolver>
@property(nonatomic) __weak id <EDMailboxProviderDelegate> delegate;
- (id <ECMailbox>)legacyMailboxForObjectID:(EMObjectID *)arg1;
- (EMMailbox *)mailboxForObjectID:(EMObjectID *)arg1;
- (void)fetchMailboxes;
- (NSArray *)allMailboxes;
@end

