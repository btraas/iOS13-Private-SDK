//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (PhotoLibraryAdditions)
- (BOOL)createDirectoryIfNeededAtPath:(id)arg1 error:(id )arg2;
- (BOOL)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2;
- (BOOL)directoryExistsAtPath:(id)arg1;
- (id)tmpFileForVideoTranscodeToPhotoDataDirectory:(BOOL)arg1 withExtension:(id)arg2;
@end

