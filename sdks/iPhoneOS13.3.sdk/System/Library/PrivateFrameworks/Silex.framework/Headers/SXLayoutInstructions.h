//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXLayoutInstructions : NSObject
{
    NSArray *_instructions;
}

+ (id)defaultInstructions;
@property(readonly, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)areFulfilledForBlueprint:(id)arg1;
- (void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2;
- (id)initWithInstructions:(id)arg1;

@end
