//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSProgress, NSURL, NSUUID;

@protocol HDStaticSyncServerInterface 
- (NSProgress *)remote_runStaticSyncImportWithOptions:(unsigned long long)arg1 storeIdentifier:(NSUUID *)arg2 URL:(NSURL *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (NSProgress *)remote_runStaticSyncExportWithOptions:(unsigned long long)arg1 storeIdentifier:(NSUUID *)arg2 URL:(NSURL *)arg3 batchSize:(unsigned long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;
@end
