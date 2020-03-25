//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCacheableResourceChangeToken-Protocol.h>

@class NSNotificationCenter, NSString;

@interface AVTAvatarRecordCacheableResourceChangeToken : NSObject <AVTCacheableResourceChangeToken>
{
    NSString *_recordID;
    id /* CDUnknownBlockType */ _changeHandler;
    NSNotificationCenter *_notificationCenter;
}

@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
// - (void).cxx_destruct;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (void)handleNotification:(id)arg1;
- (id)initWithEnvironment:(id)arg1 recordIdentifier:(id)arg2 changeHandler:(id /* CDUnknownBlockType */)arg3;

@end
