//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIApplicationRotationFollowingControllerNoTouches.h>

#import <UIKitCore/UIInputViewAnimationHost-Protocol.h>
#import <UIKitCore/UIKeyboardFloatingTransitionControllerDelegate-Protocol.h>
#import <UIKitCore/_UIInputHostController-Protocol.h>
#import <UIKitCore/_UITextEffectsSceneObserver-Protocol.h>

@class NSDate, NSLayoutConstraint, NSMutableArray, NSString, UIInputViewController, UIInputViewPlacementTransition, UIInputViewSet, UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIInputWindowControllerHosting, UIKeyboardFloatingTransitionController, UIKeyboardPathEffectView, UIView;

__attribute__((visibility("hidden")))
@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UIInputViewAnimationHost, _UITextEffectsSceneObserver, UIKeyboardFloatingTransitionControllerDelegate, _UIInputHostController>
{
    NSMutableArray *_animationStyleStack;
    int _suppressedCallbacks;
    int _suppressedNotifications;
    _Bool _isChangingPlacement;
    _Bool _isChangingInputViews;
    _Bool _isSnapshotting;
    int _hiddenCount;
    _Bool _inhibitingHiding;
    unsigned long long _rotationState;
    _Bool _disablePlacementChanges;
    _Bool _suppressUpdateVisibilityConstraints;
    id /* block */ _pendingTransitionActivity;
    UIInputWindowControllerHosting *_hosting;
    UIView *_preRotationSnapshot;
    struct CGSize _preRotationInputViewSize;
    struct CGSize _preRotationInputAssistantViewSize;
    struct CGSize _preRotationInputAccessoryViewSize;
    struct CGAffineTransform _preRotationInputViewTransform;
    struct CGAffineTransform _preRotationInputAssistantViewTransform;
    struct CGAffineTransform _preRotationInputAccessoryViewTransform;
    UIInputViewSetNotificationInfo *_rotationInfo;
    struct CGRect _preLayoutHostViewFrame;
    _Bool _didOverridePreLayoutHostViewFrame;
    _Bool _didPostLayoutNotification;
    UIInputViewSetNotificationInfo *_keyboardHeightChangeNotificationInfo;
    _Bool _wasOnScreen;
    NSString *_lastKeyboardID;
    NSDate *_keyboardShowTimestamp;
    _Bool _supportsDockViewController;
    UIKeyboardFloatingTransitionController *_floatingTransitionController;
    _Bool _shouldNotifyRemoteKeyboards;
    _Bool _dontDismissKeyboardOnScrolling;
    _Bool _dontDismissReachability;
    UIInputViewSet *_inputViewSet;
    UIInputViewSetPlacement *_placement;
    UIInputViewController *_inputViewController;
    UIInputViewController *_inputAssistantViewController;
    UIInputViewController *_inputAccessoryViewController;
    UIInputViewSetPlacement *_postRotationPlacement;
    UIInputViewSet *_postRotationInputViewSet;
    UIInputViewSetNotificationInfo *_postRotationInputViewNotificationInfo;
    UIInputViewSetNotificationInfo *_templateNotificationInfo;
    UIInputViewPlacementTransition *_currentTransition;
    UIKeyboardPathEffectView *_pathEffectView;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_assistantViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    UIInputViewSet *_transientInputViewSet;
}

@property(nonatomic) _Bool dontDismissReachability; // @synthesize dontDismissReachability=_dontDismissReachability;
@property(nonatomic) _Bool dontDismissKeyboardOnScrolling; // @synthesize dontDismissKeyboardOnScrolling=_dontDismissKeyboardOnScrolling;
@property(readonly, nonatomic) _Bool isChangingInputViews; // @synthesize isChangingInputViews=_isChangingInputViews;
@property(retain, nonatomic) UIInputViewSet *transientInputViewSet; // @synthesize transientInputViewSet=_transientInputViewSet;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *assistantViewHeightConstraint; // @synthesize assistantViewHeightConstraint=_assistantViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // @synthesize inputViewHeightConstraint=_inputViewHeightConstraint;
@property(readonly, retain, nonatomic) UIInputWindowControllerHosting *hosting; // @synthesize hosting=_hosting;
@property(nonatomic) _Bool shouldNotifyRemoteKeyboards; // @synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards;
@property(retain, nonatomic) UIInputViewPlacementTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *templateNotificationInfo; // @synthesize templateNotificationInfo=_templateNotificationInfo;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *postRotationInputViewNotificationInfo; // @synthesize postRotationInputViewNotificationInfo=_postRotationInputViewNotificationInfo;
@property(retain, nonatomic) UIInputViewSet *postRotationInputViewSet; // @synthesize postRotationInputViewSet=_postRotationInputViewSet;
@property(retain, nonatomic) UIInputViewSetPlacement *postRotationPlacement; // @synthesize postRotationPlacement=_postRotationPlacement;
@property(retain, nonatomic) UIInputViewController *_inputAccessoryViewController; // @synthesize _inputAccessoryViewController;
@property(retain, nonatomic) UIInputViewController *_inputAssistantViewController; // @synthesize _inputAssistantViewController;
@property(retain, nonatomic) UIInputViewController *_inputViewController; // @synthesize _inputViewController;
@property(retain, nonatomic) UIInputViewSetPlacement *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
- (void)beginFloatingTransitionFromPanGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) UIInputViewSetPlacement *expectedPlacement;
@property(readonly, nonatomic) _Bool isTransitioningBetweenFloatingStates;
- (void)updateKeyboardSizeClass;
@property(readonly, nonatomic) _Bool isTransitioningBetweenKeyboardStates;
@property(readonly, nonatomic) _Bool isTransitionStarted;
@property(readonly, nonatomic) _Bool isTransitioning;
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;
- (_Bool)inhibitRotationAnimation;
- (void)transferPlacementStateToInputWindowController:(id)arg1;
- (void)setPlacementChangeDisabled:(_Bool)arg1 withPlacement:(id)arg2;
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1;
- (void)keyboardHeightChangeDone;
- (void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)resetBackdropHeight;
- (void)animateAccessoryViewVisibility:(_Bool)arg1 withDuration:(double)arg2;
- (_Bool)isDragging;
- (_Bool)isSplitting;
- (_Bool)isTranslating;
- (_Bool)isChangingPlacement;
- (_Bool)isOnScreenRotating;
- (_Bool)isRotating;
- (_Bool)isUndocked;
- (_Bool)isOnScreen;
- (_Bool)inputViewSetContainsView:(id)arg1;
- (struct CGRect)visibleInputViewFrame;
- (struct CGRect)_visibleInputViewFrame;
- (struct CGRect)visibleFrame;
- (struct CGRect)_visibleFrame;
- (id)screenSnapshotOfView:(id)arg1;
- (id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(_Bool)arg2;
- (void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
- (void)setRotationAwarePlacement:(id)arg1;
- (void)setPlacement:(id)arg1 completion:(id /* block */)arg2;
- (void)setPlacement:(id)arg1 starting:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)currentPresentationPlacement;
- (unsigned long long)changeToInputViewSet:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)updateInputAssistantView:(id)arg1;
- (void)invalidateInputAccessoryView;
- (void)invalidateInputAssistantView;
- (void)invalidateInputView;
- (void)updateKeyboardDockViewVisibility;
- (void)setPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;
- (void)generateNotificationsForStart:(_Bool)arg1;
- (void)postTransitionEndNotification;
- (unsigned long long)_clipCornersOfView:(id)arg1;
- (_Bool)isHostingView:(id)arg1;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;
@property(readonly, nonatomic) long long keyboardOrientation;
@property(readonly, retain, nonatomic) UIInputViewSetPlacement *placementIgnoringRotation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 newSize:(struct CGSize)arg4;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)_useLiveRotation;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (void)finishSplitTransition;
- (void)prepareForSplitTransition;
- (void)setInputViewsHidden:(_Bool)arg1;
@property(readonly, nonatomic, getter=isInputViewsHidden) _Bool inputViewsHidden;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(_Bool)arg2;
- (struct CGRect)transitioningFrame;
- (id)transitioningView;
- (id)viewForTransitionScreenSnapshot;
- (void)syncToExistingAnimations;
- (void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)flushPendingActivities;
- (void)addPendingActivity:(id /* block */)arg1;
- (_Bool)mergeTransitionIfNecessaryWithTransition:(id)arg1;
- (void)performOperations:(id /* block */)arg1 withAnimationStyle:(id)arg2;
- (id)nextAnimationStyle;
- (void)popAnimationStyle;
- (void)pushAnimationStyle:(id)arg1;
- (void)updateForKeyplaneChangeWithContext:(id)arg1;
- (void)setDisableUpdateMaskForSecureTextEntry:(_Bool)arg1;
- (void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(_Bool)arg1 layoutSubviews:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (struct CGRect)convertRectFromContainerCoordinateSpaceToScreenSpace:(struct CGRect)arg1;
- (id)_screenCoordinateSpace;
- (void)transferActiveNotificationInfoToInfo:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)setHostingNeedsLayout;
- (void)_forcePreLayoutHostViewFrame;
- (void)updateAmbiguousControlCenterActivationMargin:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)updateAppearStatesForPlacement:(id)arg1 start:(_Bool)arg2 animated:(_Bool)arg3;
- (void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(_Bool)arg3;
- (int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(_Bool)arg3;
- (void)postValidatedEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postValidatedStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (id)initialNotificationInfo;
@property(readonly, nonatomic) _Bool isSnapshotting;
- (void)didSnapshot;
- (void)willSnapshot;
- (void)hostAppSceneBoundsChanged;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (void)updateSupportsDockViewController;
- (struct UIEdgeInsets)_inputViewPadding;
- (void)updateViewConstraints;
- (void)updateViewSizingConstraints;
- (void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(id /* block */)arg6;
- (_Bool)isViewLandscape;
- (struct UIEdgeInsets)_viewSafeAreaInsetsFromScene;
- (_Bool)shouldBeginTransitionForController:(id)arg1;
- (void)didEndTransitionWithController:(id)arg1;
- (void)willBeginTransitionWithController:(id)arg1;
- (id)inputWindowControllerForController:(id)arg1;
- (void)updateGestureRecognizers;
- (void)dismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)ignoreLayoutNotifications:(id /* block */)arg1;
- (struct CGRect)_viewFrameInWindowForContentOverlayInsetsCalculation;
- (struct CGRect)_boundsForOrientation:(long long)arg1;
- (struct CGPoint)_centerForOrientation:(long long)arg1;
- (struct CGRect)_defaultInitialViewFrame;
- (void)performWithSafeTransitionFrames:(id /* block */)arg1;
- (void)performOperations:(id /* block */)arg1 withTemplateNotificationInfo:(id)arg2;
- (void)performWithoutCallbacksOrNotifications:(id /* block */)arg1;
- (void)performWithoutAppearanceCallbacks:(id /* block */)arg1;
@property(readonly, retain, nonatomic) UIKeyboardPathEffectView *_pathEffectView; // @synthesize _pathEffectView;
@property(readonly, nonatomic) UIView *_inputAccessoryView;
@property(readonly, nonatomic) UIView *_inputAssistantView;
@property(readonly, nonatomic) UIView *_inputView;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (void)updateInputAssistantViewForInputViewSet:(id)arg1;
- (void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2;
- (void)registerPowerLogEvent:(_Bool)arg1;
- (void)setExclusiveTouch:(_Bool)arg1;
@property(readonly, retain, nonatomic) UIView *bottomEdgeView;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)loadView;
- (void)_didChangeDeepestUnambiguousResponder;
- (id)inputSetContainerView;
- (void)didReceiveMemoryWarning;
- (void)_updatePlacementWithPlacement:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
