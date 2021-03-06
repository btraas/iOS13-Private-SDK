//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMotionContextProviderDelegate-Protocol.h>

@class NSString;
@protocol GEOMotionContextDelegate, GEOMotionContextProvider;

@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate>
{
    id <GEOMotionContextProvider> _provider;
    NSUInteger _motionType;
    NSUInteger _exitType;
    NSUInteger _confidence;
    id <GEOMotionContextDelegate> _delegate;
}

@property(nonatomic) __weak id <GEOMotionContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUInteger confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSUInteger exitType; // @synthesize exitType=_exitType;
@property(readonly, nonatomic) NSUInteger motionType; // @synthesize motionType=_motionType;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)motionContextProvider:(id)arg1 didUpdateMotion:(NSUInteger)arg2 exitType:(NSUInteger)arg3 confidence:(NSUInteger)arg4;
@property(readonly, nonatomic) BOOL isDriving;
@property(readonly, nonatomic) BOOL isRunning;
@property(readonly, nonatomic) BOOL isWalking;
@property(readonly, nonatomic) BOOL isMoving;
- (void)stopMotionUpdates;
- (void)startMotionUpdatesWithProvider:(id)arg1;
- (void)dealloc;

@end

