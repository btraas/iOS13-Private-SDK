//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CALayer, NSString;

@protocol TSMicaPlayerType
@property(nonatomic, readonly) NSString *path;
- (void)pause;
- (void)play;
- (void)remove;
- (void)repositionInParentLayer;
- (void)addToLayer:(CALayer *)arg1 onTop:(BOOL)arg2 gravity:(NSString *)arg3;
@end

