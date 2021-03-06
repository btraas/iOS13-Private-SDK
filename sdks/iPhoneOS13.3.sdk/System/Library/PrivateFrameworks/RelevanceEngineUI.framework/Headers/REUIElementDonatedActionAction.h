//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REElementAction.h>

#import <RelevanceEngineUI/REUISiriActionsPerformerDelegate-Protocol.h>

@class NSString, REUIDonatedElementProperties, REUISiriActionsPerformer, UIImage;

@interface REUIElementDonatedActionAction : REElementAction <REUISiriActionsPerformerDelegate>
{
    REUISiriActionsPerformer *_performer;
    REUIDonatedElementProperties *_properties;
}

@property(retain, nonatomic) REUIDonatedElementProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) REUISiriActionsPerformer *performer; // @synthesize performer=_performer;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)siriActionsPerformerWantsToSuppressDismissal:(id)arg1;
- (BOOL)siriActionsPerformer:(id)arg1 wantsToDismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (BOOL)siriActionsPerformer:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)siriActionsPerformer:(id)arg1 didFailWithError:(id)arg2;
- (void)siriActionsPerformerDidSucceed:(id)arg1;
- (id)siriActionsPerformerWantsBackgroundViewToBlur:(id)arg1;
- (id)siriActionsPerformerWantsAlertBackgroundImage:(id)arg1;
- (void)_performWithContext:(id)arg1;
- (id)_newPerformer;
- (void)dealloc;
- (id)fullsizeAppIcon;
@property(readonly, nonatomic) UIImage *appIcon;
@property(readonly, nonatomic) NSString *appName;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)initWithProperties:(id)arg1;

@end

