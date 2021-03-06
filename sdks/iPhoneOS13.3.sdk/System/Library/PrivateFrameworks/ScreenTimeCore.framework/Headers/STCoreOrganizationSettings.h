//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUniquedManagedObject.h>

#import <ScreenTimeCore/STUniquelySerializableManagedObject-Protocol.h>

@class NSString;

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id )arg3;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1;
- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (void)_changeAppLimitsFromAskToWarn:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

@end

