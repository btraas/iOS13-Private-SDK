//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CPManeuver, CPNavigationAlert, CPTravelEstimates, NSNumber;

@protocol CPBannerProviding 
- (void)sceneActivationStateChangedTo:(NSNumber *)arg1;
- (void)postBannerForNavigationAlert:(CPNavigationAlert *)arg1;
- (void)postBannerForManeuver:(CPManeuver *)arg1 travelEstimates:(CPTravelEstimates *)arg2;
@end
