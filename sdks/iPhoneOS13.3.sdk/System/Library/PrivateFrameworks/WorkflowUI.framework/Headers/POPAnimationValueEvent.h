//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent
{
    id _value;
    id _velocity;
}

@property(retain, nonatomic) id velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (void)_appendDescription:(id)arg1;
- (id)initWithType:(NSUInteger)arg1 time:(double)arg2 value:(id)arg3;

@end
