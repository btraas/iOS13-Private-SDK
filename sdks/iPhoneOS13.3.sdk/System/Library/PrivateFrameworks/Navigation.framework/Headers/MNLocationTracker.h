//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationSessionObserver-Protocol.h>
#import <Navigation/MNSessionUpdateManagerDelegate-Protocol.h>

@class GEOApplicationAuditToken, MNLocation, MNNavigationSession, MNObserverHashTable;

@interface MNLocationTracker : NSObject <MNNavigationSessionObserver, MNSessionUpdateManagerDelegate>
{
    MNObserverHashTable *_safeDelegate;
    int _state;
    GEOApplicationAuditToken *_auditToken;
    MNLocation *_lastMatchedLocation;
    MNNavigationSession *_navigationSession;
    BOOL _localizeRoadNames;
}

@property(retain, nonatomic, getter=_auditToken, setter=_setAuditToken:) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) __weak MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MNObserverHashTable *safeDelegate; // @synthesize safeDelegate=_safeDelegate;
@property(readonly, nonatomic) MNLocation *lastMatchedLocation; // @synthesize lastMatchedLocation=_lastMatchedLocation;
@property(nonatomic, setter=_setState:) int state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (id)userLocationForUpdateManager:(id)arg1;
- (id)routeInfoForUpdateManager:(id)arg1;
- (BOOL)wantsETAUpdates;
- (void)updateManager:(id)arg1 didReceiveETAError:(id)arg2;
- (void)updateManager:(id)arg1 didUpdateETAForRouteInfo:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3;
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;
- (void)_defaultsDidChange;
- (void)_updateShouldLocalizeRoadNames;
- (void)_roadFeaturesForFeature:(CDStruct_123780e2 )arg1 outRoadName:(id )arg2 outShieldText:(id )arg3 outShieldType:(long long )arg4;
- (void)_updateMatchedLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)_setIsNavigatingInLowGuidance:(BOOL)arg1;
- (BOOL)paused;
- (void)resume;
- (void)pause;
- (BOOL)shouldAllowPause;
- (void)updateVehicleHeading:(double)arg1 timestamp:(id)arg2;
- (void)updateVehicleSpeed:(double)arg1 timestamp:(id)arg2;
- (void)updateLocation:(id)arg1;
- (void)_switchedToStepAtIndex:(NSUInteger)arg1;
- (id)matchedLocationForLocation:(id)arg1;
- (void)reroute:(id)arg1 reason:(NSUInteger)arg2;
- (void)updateDestination:(id)arg1 finishedHandler:(id /* CDUnknownBlockType */)arg2;
- (void)stopTracking;
- (void)startTracking;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) BOOL shouldProjectAlongRoute;
@property(readonly, nonatomic) BOOL hasArrived;
@property(readonly, nonatomic) BOOL isRerouting;
@property(readonly, nonatomic) int transportType;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1;
- (id)init;
- (void)traceJumpedInTime;
- (void)tracePaused;
- (void)traceForcedActiveTransportTypeChange:(int)arg1;
- (void)traceForcedRerouteWithResponse:(id)arg1 request:(id)arg2;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (void)forceOnRoute:(id)arg1 atLocation:(id)arg2;

@end

