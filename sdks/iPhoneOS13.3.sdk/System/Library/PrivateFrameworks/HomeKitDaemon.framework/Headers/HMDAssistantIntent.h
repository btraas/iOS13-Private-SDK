//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class INControlHomeIntent, NSArray;

@interface HMDAssistantIntent : NSObject <HMFLogging>
{
    NSArray *_homeKitObjects;
    INControlHomeIntent *_intent;
}

+ (id)logCategory;
@property(retain, nonatomic) INControlHomeIntent *intent; // @synthesize intent=_intent;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
// - (void).cxx_destruct;
- (void)_handleActionSetForExecution:(id)arg1 message:(id)arg2;
- (void)_handleActionSetForConfirmation:(id)arg1 message:(id)arg2;
- (id)_getObjectsWithUUID;
- (void)_handleIntentRequestMessage:(id)arg1;
- (void)performWithGather:(id)arg1 message:(id)arg2;
- (id)initWithIntent:(id)arg1;

@end

