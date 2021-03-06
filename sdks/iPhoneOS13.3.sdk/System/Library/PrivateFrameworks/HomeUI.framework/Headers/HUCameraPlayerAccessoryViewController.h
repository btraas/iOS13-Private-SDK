//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>

@class HFCameraPlaybackEngine, UIActivityIndicatorView, UIImageView, UILabel, UIVisualEffectView;

@interface HUCameraPlayerAccessoryViewController : UIViewController <HFCameraPlaybackEngineObserver>
{
    BOOL _canShowOverlayContent;
    BOOL _shouldShowLoadingIndicatorForClipPlayback;
    BOOL _showingNoActivity;
    BOOL _showingError;
    BOOL _showingLoadingIndicator;
    BOOL _showingBlur;
    HFCameraPlaybackEngine *_playbackEngine;
    UIImageView *_noResponseView;
    UIActivityIndicatorView *_loadingActivityIndicator;
    UILabel *_noActivityLabel;
    UILabel *_primaryErrorLabel;
    UILabel *_secondaryErrorLabel;
    UIVisualEffectView *_blurView;
    NSUInteger _currentAccessMode;
}

+ (id)_newLabel;
@property(nonatomic) NSUInteger currentAccessMode; // @synthesize currentAccessMode=_currentAccessMode;
@property(nonatomic) BOOL showingBlur; // @synthesize showingBlur=_showingBlur;
@property(nonatomic) BOOL showingLoadingIndicator; // @synthesize showingLoadingIndicator=_showingLoadingIndicator;
@property(nonatomic) BOOL showingError; // @synthesize showingError=_showingError;
@property(nonatomic) BOOL showingNoActivity; // @synthesize showingNoActivity=_showingNoActivity;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UILabel *secondaryErrorLabel; // @synthesize secondaryErrorLabel=_secondaryErrorLabel;
@property(retain, nonatomic) UILabel *primaryErrorLabel; // @synthesize primaryErrorLabel=_primaryErrorLabel;
@property(retain, nonatomic) UILabel *noActivityLabel; // @synthesize noActivityLabel=_noActivityLabel;
@property(retain, nonatomic) UIActivityIndicatorView *loadingActivityIndicator; // @synthesize loadingActivityIndicator=_loadingActivityIndicator;
@property(retain, nonatomic) UIImageView *noResponseView; // @synthesize noResponseView=_noResponseView;
@property(nonatomic) __weak HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(nonatomic) BOOL shouldShowLoadingIndicatorForClipPlayback; // @synthesize shouldShowLoadingIndicatorForClipPlayback=_shouldShowLoadingIndicatorForClipPlayback;
@property(nonatomic) BOOL canShowOverlayContent; // @synthesize canShowOverlayContent=_canShowOverlayContent;
// - (void).cxx_destruct;
- (BOOL)_shouldShortCircuitBlurEffect;
- (BOOL)_shouldShortCircuitLoadingIndicator;
- (id)_errorStringDetailsForError:(id)arg1;
- (void)_updateStateAnimated:(BOOL)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_updateBlurVisibilityAnimated:(BOOL)arg1;
- (void)_updateErrorStateAnimated:(BOOL)arg1;
- (void)_updateNoActivityStateAnimated:(BOOL)arg1;
- (void)_updateLoadingStateAnimated:(BOOL)arg1;
- (void)_updateAllOverlayStateAnimated:(BOOL)arg1;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(NSUInteger)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)hu_reloadData;
- (void)viewDidLoad;
- (id)initWithPlaybackEngine:(id)arg1;

@end

