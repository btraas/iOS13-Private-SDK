//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdPlatforms/ADStatusConditions_XPC-Protocol.h>

@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>
{
}

- (id)setupXPCConnection;
- (void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)clearStatusCondition:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setStatusCondition:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;

@end

