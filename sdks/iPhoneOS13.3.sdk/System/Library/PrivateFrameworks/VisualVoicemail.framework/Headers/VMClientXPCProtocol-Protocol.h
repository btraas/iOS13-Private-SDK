//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/VMAccountManagerXPCClient-Protocol.h>
#import <VisualVoicemail/VMGreetingManagerXPCClient-Protocol.h>
#import <VisualVoicemail/VMMessageManagerXPCClient-Protocol.h>

@class NSOrderedSet, VMVoicemailCapabilities;

@protocol VMClientXPCProtocol <VMAccountManagerXPCClient, VMGreetingManagerXPCClient, VMMessageManagerXPCClient>
- (void)setTranscribing:(BOOL)arg1;
- (void)setStorageUsage:(NSUInteger)arg1;
- (void)setSyncInProgress:(BOOL)arg1;
- (void)setCapabilities:(VMVoicemailCapabilities *)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setOnline:(BOOL)arg1;
- (void)voicemailsUpdated:(NSOrderedSet *)arg1;
@end

