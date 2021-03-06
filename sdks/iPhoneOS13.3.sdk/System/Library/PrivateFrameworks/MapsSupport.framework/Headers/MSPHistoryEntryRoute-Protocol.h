//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPHistoryEntry-Protocol.h>

@class GEOComposedWaypoint, GEOURLRouteHandle;

@protocol MSPHistoryEntryRoute <MSPHistoryEntry>
@property(readonly, nonatomic) BOOL navigationWasInterrupted;
@property(readonly, nonatomic) GEOURLRouteHandle *routeHandle;
@property(readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property(readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
@property(readonly, nonatomic) long long transportType;
@end

