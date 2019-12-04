//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADPermissionValidator-Protocol.h>

@class ClientConnection, NSString;

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator>
{
    ClientConnection *_connection;
}

@property(readonly, nonatomic) __weak ClientConnection *connection; // @synthesize connection=_connection;
- (_Bool)_valueForBooleanEntitlement:(id)arg1 defaultValue:(_Bool)arg2;
@property(readonly) _Bool hasNotificationCountEntitlement;
@property(readonly) _Bool shouldTrustClientEnforcedManagedConfigurationAccess;
@property(readonly) _Bool hasManagedConfigurationBundleIDOverrideEntitlement;
@property(readonly) _Bool hasChangeIdTrackingOverrideEntitlement;
@property(readonly) _Bool hasCalendarToolEntitlement;
@property(readonly) _Bool hasSyncClientEntitlement;
@property(readonly) _Bool hasMigrationEntitlement;
@property(readonly) _Bool hasContactsUIEntitlement;
@property(readonly) _Bool internalAccessLevelGranted;
@property(readonly) _Bool testingAccessLevelGranted;
@property(readonly) _Bool canModifyCalendarDatabase;
@property(readonly) _Bool canModifyBirthdayCalendar;
@property(readonly) _Bool canMakeSpotlightChanges;
@property(readonly) _Bool canModifySuggestedEventCalendar;
- (id)initWithClientConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
