//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>

@class MPCPlaybackEngine, MPModelPlayEvent, NSOperationQueue, NSString;

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving>
{
    MPCPlaybackEngine *_playbackEngine;
    NSOperationQueue *_operationQueue;
    MPModelPlayEvent *_lastRecordedPlayEvent;
    long long _currentRepeatType;
}

@property(nonatomic) long long currentRepeatType; // @synthesize currentRepeatType=_currentRepeatType;
@property(retain, nonatomic) MPModelPlayEvent *lastRecordedPlayEvent; // @synthesize lastRecordedPlayEvent=_lastRecordedPlayEvent;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (id)initWithPlaybackEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
