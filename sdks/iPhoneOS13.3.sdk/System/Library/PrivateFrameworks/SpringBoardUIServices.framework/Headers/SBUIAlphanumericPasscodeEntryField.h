//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UITextInputTraits, UIView;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField
{
    UIView *_springView;
    UIView *_springViewParent;
}

// - (void).cxx_destruct;
- (CGSize)_viewSize;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (void)notePasscodeFieldTextDidChange;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) __weak UITextInputTraits *textInputTraits;
- (void)layoutSubviews;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;

@end
