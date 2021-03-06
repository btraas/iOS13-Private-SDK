//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVInteractionHandling-Protocol.h>

@protocol SVVideoPlaybackSkipping;

@interface SVSkipToPreviousInteractionHandler : NSObject <SVInteractionHandling>
{
    id <SVVideoPlaybackSkipping> _playbackSkipper;
}

@property(readonly, nonatomic) id <SVVideoPlaybackSkipping> playbackSkipper; // @synthesize playbackSkipper=_playbackSkipper;
// - (void).cxx_destruct;
- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithPlaybackSkipper:(id)arg1;

@end

