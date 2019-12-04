//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDDownloadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_preflightQueue;
}

+ (void)initialize;
+ (void)releaseDownloadSlot:(id)arg1;
+ (id)acquireDownloadSlotForItem:(id)arg1;
+ (id)sharedInstance;
- (void)_downloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_recursivelyDownloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 perItemCompletion:(id /* block */)arg4 withCompletion:(id /* block */)arg5;
- (void)progressComputationPreflightForRecursiveRoot:(id)arg1 downloader:(id)arg2 itemProgressNeedsSetup:(id /* block */)arg3 itemProgressSetup:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)progressComputationPreflightForItem:(id)arg1;
- (void)retrieveFPItemForURL:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadItem:(id)arg1 recursively:(_Bool)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(id /* block */)arg5 withCompletion:(id /* block */)arg6;
- (void)downloadItems:(id)arg1 recursively:(_Bool)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(id /* block */)arg5 withCompletion:(id /* block */)arg6;
- (id)init;

@end
