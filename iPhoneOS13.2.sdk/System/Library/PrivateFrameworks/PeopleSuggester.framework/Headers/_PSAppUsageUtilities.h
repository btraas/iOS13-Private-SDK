//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PSAppUsageUtilities : NSObject
{
}

+ (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2 knowledgeStore:(id)arg3;
+ (id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)arg1 knowledgeStore:(id)arg2;
+ (id)shareExtensionsUsedAndInstalledDaysAgo:(long long)arg1 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg2 knowledgeStore:(id)arg3;
+ (id)mostUsedAppBundleIdsUsingPredicate:(id)arg1 knowledgeStore:(id)arg2;

@end
