//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/KNAnimationRenderer.h>


@class CALayer, KNAnimatedBuild, KNAnimationInfo, KNBuildChunk, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSString, TSDDrawableInfo, TSDFPSCounter, TSDRep, TSDTextureDescription, TSDTextureSet;

__attribute__((visibility("hidden")))
@interface KNBuildRenderer : KNAnimationRenderer <CAAnimationDelegate>
{
    long long _numberOfAnimationsStarted;
    NSMapTable *_animatedLayers;
    CALayer *_parentLayer;
    id _buildEndCallbackTarget;
    SEL _buildEndCallbackSelector;
    NSMutableArray *_animatedBuildsToStartAtEnd;
    TSDTextureSet *_endOfBuildTextureSet;
    TSDTextureSet *_textureSet;
    TSDTextureSet *_finalAttributesTextureSet;
    KNAnimationInfo *_animationInfo;
    KNAnimatedBuild *_animatedBuild;
    KNBuildChunk *_buildStage;
    TSDDrawableInfo *_info;
    BOOL _isPreview;
    BOOL _interrupted;
    BOOL _isAnimationForPlayback;
    BOOL _areAnimationsReadyToStart;
    BOOL _usingFinalTexture;
    BOOL _isTextureCachedAtEndOfBuild;
    BOOL _shouldUseMagicMoveTextures;
    BOOL _isNonCachedTextureValid;
    BOOL _animationWillBeginPerformed;
    TSDFPSCounter *_FPSCounter;
    TSDTextureDescription *_textureDescription;
    NSMutableSet *_texturesToTeardown;
}

@property(retain, nonatomic) TSDTextureDescription *textureDescription; // @synthesize textureDescription=_textureDescription;
@property(retain, nonatomic) CALayer *parentLayer; // @synthesize parentLayer=_parentLayer;
@property(readonly, nonatomic) TSDDrawableInfo *info; // @synthesize info=_info;
@property(readonly, nonatomic) KNBuildChunk *buildStage; // @synthesize buildStage=_buildStage;
@property(readonly, nonatomic) NSArray *animatedBuildsToStartAtEnd; // @synthesize animatedBuildsToStartAtEnd=_animatedBuildsToStartAtEnd;
@property(readonly, nonatomic) KNAnimatedBuild *animatedBuild; // @synthesize animatedBuild=_animatedBuild;
- (void)p_resetAnimations;
- (void)p_removeAnimations;
- (void)resetPreviousStageToUnhighlightOnTextureSet:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)updateAnimationTestingLog;
- (id)p_keyForAnimation;
- (id)setupFinalTextureGivenCurrentTextureSet:(id)arg1 isRenderingToContext:(BOOL)arg2;
- (BOOL)p_isDriftAnimation;
- (void)fadeOutPreviousStageOn:(id)arg1 atLayerTime:(double)arg2;
- (void)removeBuildToStartAtEnd:(id)arg1;
- (void)addBuildToStartAtEnd:(id)arg1;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)stopAnimations;
@property(readonly, nonatomic) long long textureStageIndex;
@property(readonly, nonatomic) NSUInteger textureDeliveryStyle;
- (void)registerForBuildEndCallback:(SEL)arg1 target:(id)arg2;
- (void)forceRemoveAnimations;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (BOOL)addAnimationsAtLayerTime:(double)arg1;
- (void)resetHighlightsBeforeAnimationOnTextureSet:(id)arg1;
- (void)animationDidEnd;
- (id)animationWillBegin;
- (id)p_initializeTextureSetForEndOfBuild:(BOOL)arg1 endOfSlide:(BOOL)arg2 description:(id)arg3 isRenderingToContext:(BOOL)arg4;
- (id)initializeTextureSetForEndOfBuild:(BOOL)arg1 endOfSlide:(BOOL)arg2 description:(id)arg3 isRenderingToContext:(BOOL)arg4;
- (void)setGeometryAndActionAttributesOnTextureSet:(id)arg1 isAtEndOfBuild:(BOOL)arg2 isAtEndOfSlide:(BOOL)arg3 isRenderingToContext:(BOOL)arg4;
- (void)animate;
- (void)setLayerVisibility:(id)arg1 isAtEndOfBuild:(BOOL)arg2;
- (BOOL)p_isTextDrawable;
- (void)p_updateTextureDescription:(id)arg1 forStage:(long long)arg2 isAtEndOfBuild:(BOOL)arg3;
- (id)p_textureSetForStage:(long long)arg1 description:(id)arg2 isAtEndOfBuild:(BOOL)arg3 shouldForceRebuild:(BOOL)arg4 shouldRender:(BOOL)arg5;
- (void)setEndOfBuildTextureSet:(id)arg1;
- (id)textureDescriptionForStage:(long long)arg1 isAtEndOfBuild:(BOOL)arg2;
- (id)textureSetForStage:(long long)arg1 description:(id)arg2 isAtEndOfBuild:(BOOL)arg3 shouldForceRebuild:(BOOL)arg4 shouldRender:(BOOL)arg5;
- (id)textureSetWithoutRenderedContents;
@property(readonly, nonatomic) TSDTextureSet *textureSet;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg1;
- (void)renderTextures;
- (void)generateTextures;
- (BOOL)shouldPreGenerateTextures;
- (id)p_filterForTextDelivery:(long long)arg1;
- (BOOL)p_isMovieInfo;
@property(readonly, nonatomic) TSDRep *rep;
- (void)setupPluginContext;
- (id)loadPluginIfNeeded;
@property(readonly, copy) NSString *description;
- (void)teardown;
- (void)dealloc;
- (id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 animatedSlideView:(id)arg4;

@end

