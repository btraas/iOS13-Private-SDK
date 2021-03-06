//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <iTunesStoreUI/SUOverlayBackgroundDelegate-Protocol.h>

@class SUClientInterface, SUOverlayBackgroundViewController, SUPreviewOverlayViewController, UITabBarController;

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate>
{
    SUClientInterface *_clientInterface;
    SUOverlayBackgroundViewController *_overlayBackgroundViewController;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    UITabBarController *_rootViewController;
}

@property(retain, nonatomic) UITabBarController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) SUOverlayBackgroundViewController *overlayBackgroundViewController; // @synthesize overlayBackgroundViewController=_overlayBackgroundViewController;
@property(readonly, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
// - (void).cxx_destruct;
- (void)_showPreviewOverlayAnimated:(BOOL)arg1;
- (void)_removePreviewOverlayViewController;
- (id)_previewOverlayViewController;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)showPreviewOverlayAnimated:(BOOL)arg1;
@property(readonly, nonatomic) SUPreviewOverlayViewController *previewOverlayViewController;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (BOOL)performActionForDialog:(id)arg1 button:(id)arg2;
- (void)hidePreviewOverlayAnimated:(BOOL)arg1;
- (BOOL)enterAccountFlowWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dismissOverlayBackgroundViewController;
- (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;

@end

