//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOApplicationAuditToken, GEOLatLng, NSObject;
@protocol OS_dispatch_queue;

@protocol _GEOLocationShifterProxy <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)flushDiskCache;
- (void)shiftLatLng:(GEOLatLng *)arg1 auditToken:(GEOApplicationAuditToken *)arg2 completionHandler:(void (^)(GEOLocationShiftFunctionResponse *, BOOL, NSError *))arg3;
- (unsigned int)locationShiftFunctionVersion;
- (BOOL)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)isLocationShiftEnabled;
@end

