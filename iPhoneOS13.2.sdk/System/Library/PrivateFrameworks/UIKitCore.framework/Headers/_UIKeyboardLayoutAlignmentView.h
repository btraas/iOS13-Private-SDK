//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIKeyboardLayoutAlignmentView : UIView
{
    struct CGRect lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
    _Bool _automaticKeyboardFrameTrackingDisabled;
}

+ (struct CGRect)_endFrameForNotification:(id)arg1 inView:(id)arg2;
+ (_Bool)_shouldIgnoreFrameChangeNotification:(id)arg1 inView:(id)arg2;
+ (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1 inView:(id)arg2;
@property(nonatomic) _Bool automaticKeyboardFrameTrackingDisabled; // @synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_removeConstraints;
- (void)_matchInitialKeyboardFrame;
- (void)_createConstraints;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_updateConstraintsForKeyboardNotification:(id)arg1;
- (_Bool)_shouldOverrideAnimationForFrameChangeNotification:(id)arg1;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect)arg1;
- (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1;

@end
