//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppAnalytics/AAViewingSessionManagerType-Protocol.h>

@class MISSING_TYPE;

@interface AAViewingSessionManager : NSObject <AAViewingSessionManagerType>
{
    MISSING_TYPE *sessions;
    MISSING_TYPE *activeSession;
}

// - (void).cxx_destruct;
- (id)init;
- (void)endActiveViewingSession;
- (void)endViewingSessionForContentIdentifier:(id)arg1;
- (void)removeObject:(id)arg1 forContentIdentifier:(id)arg2;
- (id)viewingSessionForContentIdentifier:(id)arg1 object:(id)arg2;

@end
