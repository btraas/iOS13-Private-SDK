//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariable.h>

@class NSString;
@protocol WFVariableProvider;

@interface WFUserDefinedVariable : WFVariable
{
    id <WFVariableProvider> _variableProvider;
}

- (id)variableProvider;
// - (void).cxx_destruct;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)possibleContentClassesWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)UUID;
- (id)icon;
- (BOOL)requiresModernVariableSupport;
- (BOOL)isAvailable;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (id)initWithName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;

@end

