//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PREQuickTypeProtocol-Protocol.h>

@class NSString, SGContactSharingML, _PASBundleIdResolver;
@protocol PREQuickTypeProtocol;

@interface SGQuickTypeServerRequestHandler : NSObject <PREQuickTypeProtocol>
{
    id <PREQuickTypeProtocol> _clientProxy;
    SGContactSharingML *_ml;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property(retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
// - (void).cxx_destruct;
- (void)proactiveTriggersForContext:(id)arg1 maximumTriggers:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)setRemoteObjectProxy:(id)arg1;
- (id)init;

@end

