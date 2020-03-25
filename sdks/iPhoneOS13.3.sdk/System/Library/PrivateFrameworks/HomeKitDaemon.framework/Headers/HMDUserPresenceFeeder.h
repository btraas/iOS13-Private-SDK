//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDHomePresenceBase.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackgroundTaskAgentTimer, HMDUserPresenceFeed, HMDUserPresenceFeedSession;

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMFLogging>
{
    NSUInteger _presenceRegionStatus;
    HMDBackgroundTaskAgentTimer *_btaUpdateTimer;
    HMDUserPresenceFeedSession *_currentFeedSession;
    HMDUserPresenceFeed *_lastSentFeed;
}

+ (id)logCategory;
+ (void)submitPresenceReportMetricWithPresenceAuth:(id)arg1 presenceCompute:(id)arg2 reason:(id)arg3 error:(id)arg4;
@property(retain, nonatomic) HMDUserPresenceFeed *lastSentFeed; // @synthesize lastSentFeed=_lastSentFeed;
@property(retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession; // @synthesize currentFeedSession=_currentFeedSession;
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaUpdateTimer; // @synthesize btaUpdateTimer=_btaUpdateTimer;
@property(nonatomic) NSUInteger presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
// - (void).cxx_destruct;
- (void)notifyDidLeaveHomeRegion;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHome;
- (void)notifyDidArriveHome;
- (void)homeDataProcessed;
- (void)presenceAuthChanged;
- (void)presenceAuthStatusChangedForUser:(id)arg1 presenceAuthStatus:(id)arg2;
- (id)init;

@end
