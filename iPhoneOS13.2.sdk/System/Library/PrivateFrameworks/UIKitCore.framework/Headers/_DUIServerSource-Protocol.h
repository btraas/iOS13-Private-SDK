//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIDraggingSessionConfiguration;
@protocol _DUIClientSessionSource;

@protocol _DUIServerSource
- (oneway void)beginDragWithClientSession:(id <_DUIClientSessionSource>)arg1 configuration:(UIDraggingSessionConfiguration *)arg2 reply:(void (^)(unsigned int, id <_DUIServerSessionSource>))arg3;
- (oneway void)warmUp;
@end
