//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject
{
    CSReceiverServerPreferences *_serverPreferences;
}

@property(readonly, nonatomic) CSReceiverServerPreferences *serverPreferences; // @synthesize serverPreferences=_serverPreferences;
- (_Bool)clientDisabled:(long long)arg1;
- (void)_updateFromPreferences;
- (id)init;

@end
