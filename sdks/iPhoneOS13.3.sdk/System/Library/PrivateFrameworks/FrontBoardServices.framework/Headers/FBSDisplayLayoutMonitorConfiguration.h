//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceConnectionEndpoint;

@interface FBSDisplayLayoutMonitorConfiguration : NSObject
{
    BSServiceConnectionEndpoint *_endpoint;
    BOOL _needsUserInteractivePriority;
    id /* CDUnknownBlockType */ _transitionHandler;
}

+ (id)configurationWithEndpoint:(id)arg1;
+ (id)configurationForDefaultMainDisplayMonitor;
@property(readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) id /* CDUnknownBlockType */ transitionHandler; // @synthesize transitionHandler=_transitionHandler;
@property(nonatomic) BOOL needsUserInteractivePriority; // @synthesize needsUserInteractivePriority=_needsUserInteractivePriority;
// - (void).cxx_destruct;
- (id)_initWithEndpoint:(id)arg1;
- (id)init;

@end

