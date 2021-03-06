//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIGestureRecognizer, UIInteractionProgress;

@interface SBWorkspaceInteractionContext : NSObject
{
    UIInteractionProgress *_interactionProgress;
    UIGestureRecognizer *_gestureRecognizer;
}

@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
// - (void).cxx_destruct;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithInteractionProgress:(id)arg1;

@end

