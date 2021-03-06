//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ICNote, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel;

@interface ICPasswordEntryViewController : UIViewController
{
    BOOL _isAnimatingOut;
    ICNote *_note;
    NSUInteger _intent;
    id /* CDUnknownBlockType */ _passwordEntryCompletionHandler;
    id /* CDUnknownBlockType */ _passwordEntryFailedAttemptHandler;
    UIImageView *_lockImage;
    UILabel *_titleLabel;
    UIButton *_unlockButton;
    UIButton *_largeUnlockButton;
    NSLayoutConstraint *_titleLabelLeadingConstraint;
    NSLayoutConstraint *_titleLabelTrailingConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSLayoutConstraint *_titleLabelBottomConstraintForAXLargerTextSizes;
    NSString *_contentSizeCategory;
}

@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelBottomConstraintForAXLargerTextSizes; // @synthesize titleLabelBottomConstraintForAXLargerTextSizes=_titleLabelBottomConstraintForAXLargerTextSizes;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelBaselineConstraint; // @synthesize titleLabelBaselineConstraint=_titleLabelBaselineConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelTrailingConstraint; // @synthesize titleLabelTrailingConstraint=_titleLabelTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelLeadingConstraint; // @synthesize titleLabelLeadingConstraint=_titleLabelLeadingConstraint;
@property(nonatomic) __weak UIButton *largeUnlockButton; // @synthesize largeUnlockButton=_largeUnlockButton;
@property(nonatomic) __weak UIButton *unlockButton; // @synthesize unlockButton=_unlockButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *lockImage; // @synthesize lockImage=_lockImage;
@property(copy, nonatomic) id /* CDUnknownBlockType */ passwordEntryFailedAttemptHandler; // @synthesize passwordEntryFailedAttemptHandler=_passwordEntryFailedAttemptHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ passwordEntryCompletionHandler; // @synthesize passwordEntryCompletionHandler=_passwordEntryCompletionHandler;
@property(nonatomic) BOOL isAnimatingOut; // @synthesize isAnimatingOut=_isAnimatingOut;
@property(nonatomic) NSUInteger intent; // @synthesize intent=_intent;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
// - (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)updateforAccessibilityDarkerSystemColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unlockPasswordButtonPressed:(id)arg1;
- (void)beginAuthentication;
- (void)updateFonts;
- (void)updateConstraintsForContentSizeCategoryIfNecessary;
- (void)updateTitleLabelPreferredMaxLayoutWidth;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 note:(id)arg3 intent:(NSUInteger)arg4;

@end

