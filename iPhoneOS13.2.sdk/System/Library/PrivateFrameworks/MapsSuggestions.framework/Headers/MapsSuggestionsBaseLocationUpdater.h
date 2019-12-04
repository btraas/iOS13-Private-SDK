//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>

@class MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater>
{
    struct Queue _queue;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
}

- (id).cxx_construct;
- (unsigned long long)countLocationObservers;
- (void)awaitSync;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (void)condsiderNewVisit:(id)arg1;
- (void)condsiderNewLocation:(id)arg1;
- (void)stopImplementation;
- (void)startImplemention;
- (_Bool)hasObservers;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
