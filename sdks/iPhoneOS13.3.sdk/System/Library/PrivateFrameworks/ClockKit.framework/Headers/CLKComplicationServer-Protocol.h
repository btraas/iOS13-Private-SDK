//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLKComplication, NSString;

@protocol CLKComplicationServer <NSObject>
- (void)extendTimelineForComplication:(CLKComplication *)arg1;
- (void)reloadTimelineForComplication:(CLKComplication *)arg1;
- (void)checkinWithClientIdentifier:(NSString *)arg1 bundlePath:(NSString *)arg2;
@end

