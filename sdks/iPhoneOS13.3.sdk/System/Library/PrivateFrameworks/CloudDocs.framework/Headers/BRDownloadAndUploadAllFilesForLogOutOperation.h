//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>


@class BRGlobalProgressProxy, BRUploadAllFilesForLogOutOperation, NSMutableArray, NSOperationQueue;

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting>
{
    BRGlobalProgressProxy *_progress;
    NSMutableArray *_fileCoordinators;
    id /* CDUnknownBlockType */ _downloadAllFilesCompletionBlock;
    NSOperationQueue *_internalQueue;
    BRUploadAllFilesForLogOutOperation *_uploadOp;
}

@property(retain) BRGlobalProgressProxy *progress; // @synthesize progress=_progress;
@property(copy) id /* CDUnknownBlockType */ downloadAllFilesCompletionBlock; // @synthesize downloadAllFilesCompletionBlock=_downloadAllFilesCompletionBlock;
// - (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)cancel;
- (id)init;

@end
