//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/SBLockScreenActionProvider-Protocol.h>

@class SBFLockScreenActionContext;

@interface CSSimpleLockScreenActionProvider : NSObject <SBLockScreenActionProvider>
{
    SBFLockScreenActionContext *_lockScreenActionContext;
}

@property(retain, nonatomic) SBFLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_lockScreenActionContext;
// - (void).cxx_destruct;
- (void)invalidateLockScreenActionContext;

@end

