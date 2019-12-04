//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/DAResolveRecipientsConsumer-Protocol.h>

@class MFConditionLock, NSDictionary, NSError;

@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer>
{
    MFConditionLock *_conditionLock;
    NSDictionary *_resolvedRecipientsByEmailAddress;
    NSError *_error;
}

- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)resolvedRecipientsByEmailAddress:(id)arg1;
- (id)waitForResolvedRecipients;
@property(readonly) NSError *error;
- (id)init;

@end
