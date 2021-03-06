//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder
{
    BOOL _flipNegativeTravelDirectionRoads;
    BOOL _visitDoubleTravelDirectionRoadsTwice;
    GEOTileLoader *_tileLoader;
}

@property(nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice; // @synthesize visitDoubleTravelDirectionRoadsTwice=_visitDoubleTravelDirectionRoadsTwice;
@property(nonatomic) BOOL flipNegativeTravelDirectionRoads; // @synthesize flipNegativeTravelDirectionRoads=_flipNegativeTravelDirectionRoads;
// - (void).cxx_destruct;
- (id)findRoadsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)initWithTileLoader:(id)arg1;

@end

