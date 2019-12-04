//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsRoutineRequester-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MapsSuggestionsFakeRoutineRequester : NSObject <MapsSuggestionsRoutineRequester>
{
    NSMutableDictionary *_fakeData;
    _Bool _breakCallbackPromise;
    unsigned long long _calledFetchNextPLOIs;
    unsigned long long _calledFetchLocationOfInterestWithIdentifier;
    unsigned long long _calledFetchLocationsOfInterestOfType;
    unsigned long long _calledFetchLocationsOfInterestVisitedSinceDate;
    unsigned long long _calledFetchRoutineModeFromLocation;
    unsigned long long _calledAddLocationOfInterest;
    unsigned long long _calledUpdateLocationOfInterest;
    unsigned long long _calledStartMonitoringVehicleEvents;
}

- (_Bool)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)arg1;
- (void)stopMonitoringVehicleEvents;
- (_Bool)startMonitoringVehicleEventsWithHandler:(id /* block */)arg1;
- (_Bool)fetchRoutineModeFromLocation:(id)arg1 handler:(id /* block */)arg2;
- (_Bool)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(id /* block */)arg2;
- (_Bool)fetchLocationsOfInterestOfType:(long long)arg1 handler:(id /* block */)arg2;
- (_Bool)fetchNextPLOIsFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(id /* block */)arg4;
@property(readonly, nonatomic) NSString *uniqueName;
- (unsigned long long)calledStartMonitoringVehicleEvents;
- (unsigned long long)calledUpdateLocationOfInterest;
- (unsigned long long)calledAddLocationOfInterest;
- (unsigned long long)calledFetchRoutineModeFromLocation;
- (unsigned long long)calledFetchLocationsOfInterestVisitedSinceDate;
- (unsigned long long)calledFetchLocationsOfInterestOfType;
- (unsigned long long)calledFetchLocationOfInterestWithIdentifier;
- (unsigned long long)calledFetchNextPLOIs;
- (void)configureBrokenCallBackPromise:(_Bool)arg1;
- (void)configureLOI:(id)arg1 forIdentifier:(id)arg2;
- (void)configureLOIs:(id)arg1 sinceDate:(id)arg2;
- (void)configureLOIs:(id)arg1 forType:(long long)arg2;
- (void)configureError:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
