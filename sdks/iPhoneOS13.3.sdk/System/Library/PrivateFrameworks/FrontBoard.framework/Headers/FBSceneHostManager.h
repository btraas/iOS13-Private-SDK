//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBOrderedRequesters, FBScene, FBSceneHostWrapperView, FBSceneLayerHostContainerView, FBSceneLayerManager, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, UIColor;
@protocol FBSceneHostManagerDelegate;

@interface FBSceneHostManager : NSObject <BSDescriptionProviding>
{
    FBSceneLayerManager *_layerManager;
    FBScene *_scene;
    NSString *_identifier;
    UIColor *_defaultBackgroundColorWhileHosting;
    UIColor *_defaultBackgroundColorWhileNotHosting;
    NSUInteger _defaultHostedLayerTypes;
    NSUInteger _defaultRenderingMode;
    NSString *_defaultMinificationFilterName;
    FBSceneLayerHostContainerView *_hostView;
    FBSceneHostWrapperView *_activeWrapperView;
    BOOL _invalidated;
    FBOrderedRequesters *_hostRequesters;
    NSMutableDictionary *_hostWrapperViewsByRequester;
    NSMutableSet *_disableHostingAssertions;
    NSHashTable *_observers;
    id <FBSceneHostManagerDelegate> _delegate;
    struct {
        unsigned int delegateOverrideRequester:1;
        unsigned int delegateShouldEnableHostingForRequester:1;
    } _flags;
    BOOL _defaultClippingDisabled;
    CGAffineTransform _defaultHostViewTransform;
}

@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *defaultMinificationFilterName; // @synthesize defaultMinificationFilterName=_defaultMinificationFilterName;
@property(nonatomic) NSUInteger defaultRenderingMode; // @synthesize defaultRenderingMode=_defaultRenderingMode;
@property(nonatomic) NSUInteger defaultHostedLayerTypes; // @synthesize defaultHostedLayerTypes=_defaultHostedLayerTypes;
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <FBSceneHostManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)_snapshotContextForFrame:(CGRect)arg1 excludedContextIDs:(id)arg2 opaque:(BOOL)arg3 outTransform:(CGAffineTransform )arg4;
- (id)_snapshotContextForFrame:(CGRect)arg1 excludedLayers:(id)arg2 opaque:(BOOL)arg3;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (void)_activateRequester:(id)arg1;
- (id)_wrapperViewForRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)_hostViewForRequester:(id)arg1;
- (id)_activeHostRequester;
- (void)_updateActiveHostRequester;
- (void)_callOutToObservers:(id /* CDUnknownBlockType */)arg1;
- (void)setContextId:(unsigned int)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3;
- (id)snapshotViewForSnapshot:(id)arg1;
- (id)snapshotViewWithContext:(id)arg1;
- (id)snapshotContextForRequester:(id)arg1;
- (id)disableHostingForReason:(id)arg1;
- (void)setLayer:(id)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3;
- (void)setLayer:(id)arg1 alpha:(double)arg2 forRequester:(id)arg3;
- (void)orderRequesterFront:(id)arg1;
- (void)disableHostingForRequester:(id)arg1;
- (void)invalidate;
- (void)enableHostingForRequester:(id)arg1 priority:(long long)arg2;
- (void)enableHostingForRequester:(id)arg1 orderFront:(BOOL)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 appearanceStyle:(NSUInteger)arg3;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(NSUInteger)arg2;
- (id)hostViewForRequester:(id)arg1;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileNotHosting;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileHosting;
@property(nonatomic) CGAffineTransform defaultHostViewTransform; // @synthesize defaultHostViewTransform=_defaultHostViewTransform;
@property(nonatomic) BOOL defaultClippingDisabled; // @synthesize defaultClippingDisabled=_defaultClippingDisabled;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithLayerManager:(id)arg1 scene:(id)arg2;

@end
