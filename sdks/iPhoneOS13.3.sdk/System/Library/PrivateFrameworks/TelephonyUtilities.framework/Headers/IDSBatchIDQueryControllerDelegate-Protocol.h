//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IDSBatchIDQueryController, NSDictionary, NSError, NSString;

@protocol IDSBatchIDQueryControllerDelegate <NSObject>
- (void)batchQueryController:(IDSBatchIDQueryController *)arg1 updatedDestinationsStatus:(NSDictionary *)arg2 onService:(NSString *)arg3 error:(NSError *)arg4;

@optional
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1 service:(NSString *)arg2;
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1;
@end

