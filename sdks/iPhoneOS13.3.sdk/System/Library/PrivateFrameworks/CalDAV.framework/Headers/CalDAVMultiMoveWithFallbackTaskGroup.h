//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVMultiMoveWithFallbackTaskGroup.h>

@class NSDictionary, NSMutableDictionary;

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup
{
    NSDictionary *_sourceEntityScheduleTags;
    BOOL _isAutoScheduleSupported;
    NSMutableDictionary *_destinationEntityScheduleTags;
}

@property(retain, nonatomic) NSMutableDictionary *destinationEntityScheduleTags; // @synthesize destinationEntityScheduleTags=_destinationEntityScheduleTags;
@property(nonatomic) BOOL isAutoScheduleSupported; // @synthesize isAutoScheduleSupported=_isAutoScheduleSupported;
@property(retain, nonatomic) NSDictionary *sourceEntityScheduleTags; // @synthesize sourceEntityScheduleTags=_sourceEntityScheduleTags;
// - (void).cxx_destruct;
- (void)_completedPropFindTask:(id)arg1 intermediateETag:(id)arg2 intermediateScheduleTag:(id)arg3 destinationFilename:(id)arg4;
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(BOOL)arg3 useFallback:(BOOL)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 sourceEntityScheduleTags:(id)arg8 accountInfoProvider:(id)arg9 taskManager:(id)arg10 isAutoScheduleSupported:(BOOL)arg11;

@end

