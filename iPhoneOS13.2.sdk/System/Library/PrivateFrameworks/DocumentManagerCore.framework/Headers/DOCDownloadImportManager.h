//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DOCDownloadImportManager : NSObject
{
}

- (id)_moveItemAtURLToDownloadsLocation:(id)arg1 error:(id *)arg2;
- (id)interface;
- (void)replacePlaceholder:(id)arg1 withFinalFileURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)importPlaceholderAtURLToDownloadsDirectory:(id)arg1 completion:(id /* block */)arg2;

@end
