//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol GEOMotionContextProvider;

@protocol GEOMotionContextProviderDelegate <NSObject>
- (void)motionContextProvider:(id <GEOMotionContextProvider>)arg1 didUpdateMotion:(NSUInteger)arg2 exitType:(NSUInteger)arg3 confidence:(NSUInteger)arg4;
@end

