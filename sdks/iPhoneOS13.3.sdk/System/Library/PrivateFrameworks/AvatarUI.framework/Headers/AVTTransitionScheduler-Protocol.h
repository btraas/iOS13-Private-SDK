//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol AVTTransitionScheduler
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ eventHandler;
- (void)didCompleteEvent;
- (void)stop;
- (void)scheduleEvent;
- (id)initWithEventHandler:(void (^)(void))arg1;
@end

