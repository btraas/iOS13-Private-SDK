//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharePrepFolderForSharing : BROperation
{
    NSURL *_url;
    id /* CDUnknownBlockType */ _prepFolderSharingCompletionBlock;
}

@property(copy) id /* CDUnknownBlockType */ prepFolderSharingCompletionBlock; // @synthesize prepFolderSharingCompletionBlock=_prepFolderSharingCompletionBlock;
// - (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1;

@end

