//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDTCCUtilities : NSObject
{
}

+ (struct __CFString )_TCCServiceForAccountTypeID:(id)arg1;
+ (BOOL)clearAllTCCStatesForAccountTypeID:(id)arg1;
+ (id)allTCCStatesForAccountTypeID:(id)arg1;
+ (BOOL)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (BOOL)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(BOOL)arg3;
+ (int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (BOOL)TCCSupportedForAccountTypeID:(id)arg1;

@end

