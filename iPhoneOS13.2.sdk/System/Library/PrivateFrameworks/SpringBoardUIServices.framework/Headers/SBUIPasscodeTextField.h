//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface SBUIPasscodeTextField : UITextField
{
    _Bool _previousResponderRequiresKeyboard;
    _Bool _showsSystemKeyboard;
}

@property(nonatomic) _Bool showsSystemKeyboard; // @synthesize showsSystemKeyboard=_showsSystemKeyboard;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)dealloc;
- (void)_disableAutomaticAppearance;
- (void)_enableAutomaticAppearance;

@end
