//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKBaseSignInViewController.h>

#import <AuthKitUI/AKAppleIDAuthenticationInAppContextPasswordDelegate-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, AKTextField, NSString, UIActivityIndicatorView, UIButton, UIColor, UIView;

@interface AKInlineSignInViewController : AKBaseSignInViewController <UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate>
{
    BOOL _usesDarkMode;
    BOOL _usesVibrancy;
    long long _blurEffectStyle;
    NSString *_secondaryButtonTitle;
    NSString *_tertiaryButtonTitle;
    AKAppleIDAuthenticationInAppContext *_context;
    id /* CDUnknownBlockType */ _passwordRequiredCompletion;
    BOOL _wantsAuthenticationProgress;
    NSString *_primaryButtonTitle;
    UIColor *_fieldBackgroundColor;
    UIView *_loginFieldsContainer;
    AKTextField *_appleIDField;
    AKTextField *_passwordField;
    UIButton *_signInButton;
    UIButton *_iforgotButton;
    UIButton *_createAppleIDButton;
    UIActivityIndicatorView *_spinner;
}

@property(retain) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain) UIButton *createAppleIDButton; // @synthesize createAppleIDButton=_createAppleIDButton;
@property(retain) UIButton *iforgotButton; // @synthesize iforgotButton=_iforgotButton;
@property(retain) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain) AKTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain) AKTextField *appleIDField; // @synthesize appleIDField=_appleIDField;
@property(retain) UIView *loginFieldsContainer; // @synthesize loginFieldsContainer=_loginFieldsContainer;
@property(retain, nonatomic) UIColor *fieldBackgroundColor; // @synthesize fieldBackgroundColor=_fieldBackgroundColor;
@property(readonly) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property BOOL wantsAuthenticationProgress; // @synthesize wantsAuthenticationProgress=_wantsAuthenticationProgress;
// - (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)context:(id)arg1 needsPasswordWithCompletion:(id /* CDUnknownBlockType */)arg2;
@property(nonatomic) long long blurEffectStyle;
@property(nonatomic) BOOL usesVibrancy;
- (void)_updateFonts:(id)arg1;
- (void)_updateSignInButtonState;
- (void)_passwordTextFieldDidChange:(id)arg1;
- (void)_appleIDTextFieldDidChange:(id)arg1;
- (void)_setPasswordFieldHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_hidebusyWorkUI;
- (void)_startBusyWorkUI;
- (void)_beginAuthenticationIfPossibleWithOption:(NSUInteger)arg1;
- (void)createAppleIDButtonWasTapped:(id)arg1;
- (void)iForgotButtonWasTapped:(id)arg1;
- (void)signInButtonWasTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateVibrancyAndBlurInTextFields;
- (void)_prefillAuthFields;
- (void)_updateSignInFieldStatuses;
- (void)_updatePlaceholderIfNeeded;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setContext:(id)arg1;
- (id)context;
- (void)setTertiaryButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setSecondaryButtonTarget:(id)arg1 action:(SEL)arg2;
@property(copy) NSString *tertiaryButtonTitle;
@property(copy) NSString *secondaryButtonTitle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)usesDarkMode;
- (void)setUsesDarkMode:(BOOL)arg1;

@end

