//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRadioGetTracksRequest, ICRadioGetTracksResponse, ICUserIdentityProperties, NSError, SSVPlayActivityController;

@interface MPCModelRadioGetTracksStep : NSObject
{
    NSError *_error;
    BOOL _finished;
    SSVPlayActivityController *_playActivityController;
    NSUInteger _playActivitySessionToken;
    ICUserIdentityProperties *_identityProperties;
    ICUserIdentityProperties *_delegatedIdentityProperties;
    ICRadioGetTracksRequest *_request;
    ICRadioGetTracksResponse *_response;
    ICRadioGetTracksResponse *_siriAssetInfoGetTracksResponse;
    NSUInteger _playActitySessionToken;
}

@property(readonly, nonatomic) ICRadioGetTracksResponse *siriAssetInfoGetTracksResponse; // @synthesize siriAssetInfoGetTracksResponse=_siriAssetInfoGetTracksResponse;
@property(readonly, copy, nonatomic) ICRadioGetTracksResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) ICRadioGetTracksRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSUInteger playActitySessionToken; // @synthesize playActitySessionToken=_playActitySessionToken;
@property(readonly, copy, nonatomic) SSVPlayActivityController *playActivityController; // @synthesize playActivityController=_playActivityController;
@property(readonly, copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;
@property(readonly, nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties; // @synthesize delegatedIdentityProperties=_delegatedIdentityProperties;
// - (void).cxx_destruct;
- (void)_presentServerDialog:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_performDefaultHandlingForButtonAction:(id)arg1;
- (void)_fireAndForgetServerDialog:(id)arg1;
- (void)performWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)nextStepWithError:(id)arg1;
- (id)initWithPreviousStep:(id)arg1;
- (id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3;

@end

