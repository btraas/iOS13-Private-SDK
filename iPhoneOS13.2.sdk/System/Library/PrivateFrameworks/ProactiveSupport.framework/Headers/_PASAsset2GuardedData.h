//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSMutableDictionary, NSString;

@interface _PASAsset2GuardedData : NSObject
{
    NSString *_defaultBundlePath;
    unsigned long long _defaultBundleVersion;
    unsigned long long _bestAvailableVersion;
    unsigned long long _bestAssetVersionObserved;
    MAAsset *_bestAvailableAsset;
    _Bool _purgeObsoleteInstalledAssets;
    NSMutableDictionary *_overrides;
}


@end
