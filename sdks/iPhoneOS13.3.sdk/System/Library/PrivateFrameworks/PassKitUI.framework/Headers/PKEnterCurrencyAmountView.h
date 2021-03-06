//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class NSDecimalNumber, NSDecimalNumberHandler, NSNumber, NSNumberFormatter, NSString, PKNumberPadInputView, UIColor, UIFont, UILabel, UITextField;
@protocol PKEnterCurrencyAmountViewDelegate;

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate>
{
    UIView *_internalInputAccessoryView;
    BOOL _showsDecimalPointButton;
    BOOL _enabled;
    BOOL _ignoreIntegralNumber;
    BOOL _clearAmountOnFirstKeyboardInput;
    BOOL _showDecimalPointButton;
    BOOL _isFirstKeyboardInput;
    UITextField *_amountTextField;
    NSString *_currency;
    UIColor *_textColor;
    UIFont *_amountFont;
    UIFont *_currencySymbolFont;
    NSNumber *_kerning;
    id <PKEnterCurrencyAmountViewDelegate> _delegate;
    UILabel *_amountLabel;
    PKNumberPadInputView *_numberPad;
    NSDecimalNumberHandler *_roundingBehavior;
    NSNumberFormatter *_amountFormatter;
    NSNumberFormatter *_currencySymbolAmountFormatter;
    NSString *_amountString;
    double _labelScaleFactor;
    CGSize _lastLayoutBoundsSize;
}

+ (id)_defaultTextColor;
@property(nonatomic) double labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
@property(nonatomic) CGSize lastLayoutBoundsSize; // @synthesize lastLayoutBoundsSize=_lastLayoutBoundsSize;
@property(nonatomic) BOOL isFirstKeyboardInput; // @synthesize isFirstKeyboardInput=_isFirstKeyboardInput;
@property(nonatomic) BOOL showDecimalPointButton; // @synthesize showDecimalPointButton=_showDecimalPointButton;
@property(copy, nonatomic) NSString *amountString; // @synthesize amountString=_amountString;
@property(retain, nonatomic) NSNumberFormatter *currencySymbolAmountFormatter; // @synthesize currencySymbolAmountFormatter=_currencySymbolAmountFormatter;
@property(retain, nonatomic) NSNumberFormatter *amountFormatter; // @synthesize amountFormatter=_amountFormatter;
@property(retain, nonatomic) NSDecimalNumberHandler *roundingBehavior; // @synthesize roundingBehavior=_roundingBehavior;
@property(retain, nonatomic) PKNumberPadInputView *numberPad; // @synthesize numberPad=_numberPad;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(nonatomic) __weak id <PKEnterCurrencyAmountViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSNumber *kerning; // @synthesize kerning=_kerning;
@property(copy, nonatomic) UIFont *currencySymbolFont; // @synthesize currencySymbolFont=_currencySymbolFont;
@property(copy, nonatomic) UIFont *amountFont; // @synthesize amountFont=_amountFont;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, nonatomic) UITextField *amountTextField; // @synthesize amountTextField=_amountTextField;
@property(nonatomic) BOOL clearAmountOnFirstKeyboardInput; // @synthesize clearAmountOnFirstKeyboardInput=_clearAmountOnFirstKeyboardInput;
@property(nonatomic) BOOL ignoreIntegralNumber; // @synthesize ignoreIntegralNumber=_ignoreIntegralNumber;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL showsDecimalPointButton; // @synthesize showsDecimalPointButton=_showsDecimalPointButton;
// - (void).cxx_destruct;
- (void)_createSubviews;
- (void)_updateContent;
- (id)_decimalNumberFromString:(id)arg1;
- (id)_formatAmount:(id)arg1 minimumFractionDigits:(NSUInteger)arg2;
- (void)_addSuperscriptToAttributedString:(id)arg1 inRange:(_NSRange)arg2;
- (void)_addSuperscriptToAttributedString:(id)arg1 formattedCurrencyAmount:(id)arg2 currencyAmountWithoutSymbols:(id)arg3;
- (id)_formatAmountForDisplay:(id)arg1 alwaysShowDecimalSeparator:(BOOL)arg2 minimumFractionDigits:(NSUInteger)arg3 useGroupingSeparator:(BOOL)arg4;
- (void)_createAmountFormatter;
- (NSUInteger)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(copy, nonatomic) UIColor *keyboardColor;
- (void)showKeyboard;
- (void)dismissKeyboard;
@property(retain, nonatomic) UIView *inputAccessoryView;
@property(retain, nonatomic) NSDecimalNumber *currentAmount;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2;
- (id)pk_childrenForAppearance;
- (void)pk_applyAppearance:(id)arg1;

@end

