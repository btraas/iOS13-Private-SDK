//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/CMPocketStateDelegate-Protocol.h>

@class CMPocketStateManager, NSString;

@interface SASSiriPocketStateManager : NSObject <CMPocketStateDelegate>
{
    _Bool _pocketStateShouldPreventVoiceTrigger;
    CMPocketStateManager *_pocketStateManager;
    long long _currentPocketState;
}

+ (id)new;
+ (id)sharedManager;
@property(nonatomic, getter=_pocketStateShouldPreventVoiceTrigger, setter=_setPocketStateShouldPreventVoiceTrigger:) _Bool pocketStateShouldPreventVoiceTrigger; // @synthesize pocketStateShouldPreventVoiceTrigger=_pocketStateShouldPreventVoiceTrigger;
@property(nonatomic, getter=_currentPocketState, setter=_setCurrentPocketState:) long long currentPocketState; // @synthesize currentPocketState=_currentPocketState;
@property(retain, nonatomic, getter=_pocketStateManager, setter=_setPocketStateManager:) CMPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
- (id)_stringForPocketState:(long long)arg1;
- (void)_updateForPocketState:(long long)arg1;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (_Bool)pocketStateShouldPreventVoiceTrigger;
- (long long)currentPocketState;
- (void)queryForPocketStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
