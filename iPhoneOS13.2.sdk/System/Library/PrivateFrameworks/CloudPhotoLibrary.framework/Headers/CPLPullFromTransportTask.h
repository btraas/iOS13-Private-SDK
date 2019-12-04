//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@class CPLScopeFilter;

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask
{
    CPLScopeFilter *_scopeFilter;
}

@property(retain, nonatomic) CPLScopeFilter *scopeFilter; // @synthesize scopeFilter=_scopeFilter;
- (id)taskIdentifier;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (_Bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;

@end
