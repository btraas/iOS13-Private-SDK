//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class INIntent, NSArray, NSString, WFDynamicResolveParameter;

@protocol WFDynamicResolveParameterDataSource <NSObject>
- (void)localizedDisambiguationPromptForItems:(NSArray *)arg1 intent:(INIntent *)arg2 dynamicResolveParameter:(WFDynamicResolveParameter *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)resolveOptionsForUserInput:(NSString *)arg1 forDynamicResolveParameter:(WFDynamicResolveParameter *)arg2 completion:(void (^)(NSArray *, long long, INIntent *, NSError *))arg3;
@end
