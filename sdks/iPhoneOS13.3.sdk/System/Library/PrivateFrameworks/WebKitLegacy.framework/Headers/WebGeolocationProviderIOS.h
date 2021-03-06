//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebGeolocationProvider-Protocol.h>

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider>
{
    struct RetainPtr<WebGeolocationCoreLocationProvider> _coreLocationProvider;
    struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> _coreLocationUpdateListenerProxy;
    BOOL _enableHighAccuracy;
    BOOL _isSuspended;
    BOOL _shouldResetOnResume;
    struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::PtrHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>> _webViewsWaitingForCoreLocationAuthorization;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>> _pendingInitialPositionWebView;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>> _registeredWebViews;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>> _trackedWebViews;
    struct RetainPtr<NSTimer> _sendLastPositionAsynchronouslyTimer;
    struct RetainPtr<WebGeolocationPosition> _lastPosition;
}

+ (id)sharedGeolocationProvider;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)resetGeolocation;
- (void)errorOccurred:(id)arg1;
- (void)positionChanged:(id)arg1;
- (void)stopTrackingWebView:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
- (void)setEnableHighAccuracy:(BOOL)arg1;
- (id)lastPosition;
- (void)unregisterWebView:(id)arg1;
- (void)registerWebView:(id)arg1;
- (void)_handlePendingInitialPosition:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)dealloc;

@end

