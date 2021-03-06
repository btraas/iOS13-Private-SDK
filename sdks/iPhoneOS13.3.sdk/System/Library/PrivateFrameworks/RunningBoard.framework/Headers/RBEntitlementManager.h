//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBEntitlementManaging-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSDictionary, NSMapTable, NSSet, NSString;

@interface RBEntitlementManager : NSObject <RBEntitlementManaging, RBStateCapturing>
{
//     struct os_unfair_lock_s _lock;
    NSMapTable *_entitlementsByIdentifier;
    NSSet *_availableEntitlements;
    NSDictionary *_restrictedEntitlements;
}

+ (id)_hardCodedEntitlements;
// - (void).cxx_destruct;
- (BOOL)_secTask:(struct __SecTask )arg1 hasEntitlement:(id)arg2;
- (id)_entitlementsForProcess:(id)arg1;
- (void)_removeRestrictedEntitlements:(id)arg1 forProcess:(id)arg2;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (id)entitlementsForProcess:(id)arg1;
- (id)allEntitlements;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithDomainAttributeEntitlements:(id)arg1;

@end

