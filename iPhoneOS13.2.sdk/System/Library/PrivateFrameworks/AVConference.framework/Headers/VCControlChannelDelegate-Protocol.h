//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSNumber, NSString, VCControlChannel;

@protocol VCControlChannelDelegate 
- (void)controlChannel:(VCControlChannel *)arg1 clearTransactionCacheForParticipant:(NSNumber *)arg2;
- (void)controlChannel:(VCControlChannel *)arg1 sendReliableMessage:(NSString *)arg2 didSucceed:(_Bool)arg3 toParticipant:(NSNumber *)arg4;
- (void)controlChannel:(VCControlChannel *)arg1 receivedMessage:(NSString *)arg2 transactionID:(unsigned int)arg3 fromParticipant:(NSNumber *)arg4;
@end
