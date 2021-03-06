//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/_GEOPlaceRequestTicket.h>

#import <GeoServices/GEOMapServiceSpatialEventLookupTicket-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceSpatialEventLookupTicket : _GEOPlaceRequestTicket <GEOMapServiceSpatialEventLookupTicket>
{
    NSArray *_parameters;
}

+ (NSUInteger)maxParametersCount;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
// - (void).cxx_destruct;
- (void)callCompletion:(id /* CDUnknownBlockType */)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4;
- (id)eventsForEventLookupResponses:(id)arg1 usingIdentifierToEventMap:(id)arg2;
- (id)spatialEventLookupResultsFromResponse:(id)arg1;
- (id)mapItemIdentifiersToPOIEventsMapForPlaces:(id)arg1;
- (void)createSpatialEventLookupResultForLookupResults:(id)arg1 usingPlaces:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3 queue:(id)arg4;
- (void)handleResponse:(id)arg1 userInfo:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3 queue:(id)arg4;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 queue:(id)arg2;
- (id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3;

@end

