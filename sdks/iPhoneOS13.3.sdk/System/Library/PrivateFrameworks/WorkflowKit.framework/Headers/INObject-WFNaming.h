//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INObject.h>

#import <WorkflowKit/WFINObject-Protocol.h>
#import <WorkflowKit/WFNaming-Protocol.h>

@class NSString;

@interface INObject (WFNaming) <WFNaming, WFINObject>
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wf_initWithIdentifier:(id)arg1 displayString:(id)arg2;
@end

