//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFDownloadURLAction : WFAction
{
}

- (void)configureHTTPBodyForRequest:(id)arg1 withMethod:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getContentsOfURLItem:(id)arg1 expectedByteCountHandler:(id /* CDUnknownBlockType */)arg2 writtenByteCountHandler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)configureRuntimeResourcesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

