//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLAssetsdClient;

@interface PLGatekeeperClient : NSObject
{
    PLAssetsdClient *_assetsdClient;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)rampingRequestForResourceType:(NSUInteger)arg1 numRequested:(NSUInteger)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(BOOL)arg3 streamingAllowed:(BOOL)arg4 restrictToPlayable:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 handler:(id /* CDUnknownBlockType */)arg7;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 intent:(NSUInteger)arg3 networkAccessAllowed:(BOOL)arg4 streamingAllowed:(BOOL)arg5 restrictToPlayable:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 handler:(id /* CDUnknownBlockType */)arg8;
- (void)getLibrarySizesFromDB:(BOOL)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)getLibrarySizes:(id /* CDUnknownBlockType */)arg1;

@end

