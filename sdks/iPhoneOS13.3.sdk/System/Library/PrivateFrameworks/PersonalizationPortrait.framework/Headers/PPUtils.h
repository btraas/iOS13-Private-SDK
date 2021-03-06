//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPUtils : NSObject
{
}

+ (BOOL)localizedTimeStructForDate:(id)arg1 tm:(struct tm )arg2;
+ (BOOL)isFirstPartyApp:(id)arg1;
+ (id)sqliteGlobEscape:(id)arg1;
+ (id)reduceSpotlightDomainIdentifiers:(id)arg1;
+ (id)currentLocaleLanguageCode;
+ (BOOL)yesWithProbability:(double)arg1;
+ (id)coordinatesToGeoHashWithLength:(NSUInteger)arg1 latitude:(double)arg2 longitude:(double)arg3;
+ (id)formatStringArray:(id)arg1 truncatingAtLength:(NSUInteger)arg2;
+ (long long)reverseCompareDouble:(double)arg1 withDouble:(double)arg2;
+ (long long)compareDouble:(double)arg1 withDouble:(double)arg2;
+ (id)hexUUID;
+ (id)hexOfBytes:(const void )arg1 size:(NSUInteger)arg2;
+ (id)Sha256ForData:(id)arg1 withSalt:(id)arg2;
+ (BOOL)isInternalDevice;
+ (BOOL)isConstrainedDevice;
+ (void)enumerateChunksOfSize:(NSUInteger)arg1 fromArray:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;

@end

