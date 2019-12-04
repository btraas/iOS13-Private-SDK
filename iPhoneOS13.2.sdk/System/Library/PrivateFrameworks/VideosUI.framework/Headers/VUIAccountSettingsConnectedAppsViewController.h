//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier;

__attribute__((visibility("hidden")))
@interface VUIAccountSettingsConnectedAppsViewController : PSListController
{
    PSSpecifier *_appGroup;
    NSArray *_appSpecifiers;
}

- (long long)_alertStyle;
- (void)_promptToDisableChannel:(id)arg1 withExternalID:(id)arg2;
- (void)_promptToEnableChannel:(id)arg1 withExternalID:(id)arg2;
- (void)_showVppaExpiredPrompt:(id)arg1;
- (void)_showPrivacySheet:(id)arg1;
- (id)_accessStatusForSpecifier:(id)arg1;
- (void)_toggleSpecifier:(id)arg1 sender:(id)arg2;
- (void)_stopAppSpinner;
- (void)_startAppSpinner;
- (void)_loadAppGroup;
- (void)_addPrivacyFooterToGroup:(id)arg1;
- (id)_appGroupSpecifier;
- (id)specifiers;
- (void)viewDidLoad;

@end
