//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSettingsModificationRequestOperation : WLKNetworkRequestOperation
{
    NSDictionary *_modifications;
}

+ (id)_requestURL:(id )arg1;
// - (void).cxx_destruct;
- (id)_postBody;
- (void)prepareURLRequest:(id /* CDUnknownBlockType */)arg1;
- (id)initWithModifications:(id)arg1;

@end
