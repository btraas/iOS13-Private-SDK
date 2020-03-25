//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEOComposedRoute, GEOComposedRouteTraffic, GEOComposedWaypoint, GEODirectionsRequest, GEOETARoute, GEOETATrafficUpdateResponse, MNCommuteDestinationSuggestion, MNLocation, MNObserverHashTable, NSDictionary, NSString;

@interface MNCommuteDestination : NSObject <NSSecureCoding, NSCopying>
{
    GEOComposedRoute *_nonRecommendedRoute;
    BOOL _invalid;
    BOOL _rerouting;
    MNCommuteDestinationSuggestion *_suggestion;
    GEOComposedRoute *_route;
    GEOComposedRouteTraffic *_traffic;
    GEODirectionsRequest *_directionsRequest;
    MNLocation *_lastMatchedLocation;
    GEOETARoute *_etaRoute;
    GEOETATrafficUpdateResponse *_etaResponse;
    double _remainingTime;
    double _remainingDistance;
    MNLocation *_lastLocation;
    long long _score;
    NSDictionary *_scores;
    MNObserverHashTable *_observers;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) MNObserverHashTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSDictionary *scores; // @synthesize scores=_scores;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) MNLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) BOOL rerouting; // @synthesize rerouting=_rerouting;
@property(nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) GEOETATrafficUpdateResponse *etaResponse; // @synthesize etaResponse=_etaResponse;
@property(retain, nonatomic) GEOETARoute *etaRoute; // @synthesize etaRoute=_etaRoute;
@property(retain, nonatomic) MNLocation *lastMatchedLocation; // @synthesize lastMatchedLocation=_lastMatchedLocation;
@property(retain, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(retain, nonatomic) GEOComposedRouteTraffic *traffic; // @synthesize traffic=_traffic;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) MNCommuteDestinationSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
// - (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateFrom:(id)arg1;
@property(readonly, nonatomic) double geodesicDistance;
@property(readonly) BOOL canCalculateETA;
@property(readonly) BOOL canGetETARoute;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) GEOComposedWaypoint *waypoint;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) NSString *shortDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) GEOComposedRoute *nonRecommendedRoute;

@end
