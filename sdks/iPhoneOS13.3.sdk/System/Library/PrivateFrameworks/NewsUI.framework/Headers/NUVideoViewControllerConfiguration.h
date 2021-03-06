//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SVVideoViewControllerConfiguration-Protocol.h>

@class NUVideoViewControllerAdConfiguration;

@interface NUVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration>
{
    BOOL _preferredMuteState;
    BOOL _pagingAllowed;
    BOOL _sharingEnabled;
    NUVideoViewControllerAdConfiguration *_adConfiguration;
}

@property(readonly, copy, nonatomic) NUVideoViewControllerAdConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(readonly, nonatomic, getter=isSharingEnabled) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(readonly, nonatomic, getter=isPagingAllowed) BOOL pagingAllowed; // @synthesize pagingAllowed=_pagingAllowed;
@property(readonly, nonatomic) BOOL preferredMuteState; // @synthesize preferredMuteState=_preferredMuteState;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSharingEnabled:(BOOL)arg1 preferredMuteState:(BOOL)arg2 pagingAllowed:(BOOL)arg3 adConfiguration:(id)arg4;
- (id)init;

@end

