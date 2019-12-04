//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSString;
@protocol SVVideoGravityProviderFactory, SVVideoGravityProviding, SVVideoViewControllerProviding;

@interface SVVideoGravityManager : NSObject <SVVideoTransitionObserver>
{
    id <SVVideoGravityProviderFactory> _videoGravityProviderFactory;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoGravityProviding> _videoGravityProviderForCurrentVideo;
    id <SVVideoGravityProviding> _videoGravityProviderForTransitioningVideo;
}

@property(retain, nonatomic) id <SVVideoGravityProviding> videoGravityProviderForTransitioningVideo; // @synthesize videoGravityProviderForTransitioningVideo=_videoGravityProviderForTransitioningVideo;
@property(retain, nonatomic) id <SVVideoGravityProviding> videoGravityProviderForCurrentVideo; // @synthesize videoGravityProviderForCurrentVideo=_videoGravityProviderForCurrentVideo;
@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <SVVideoGravityProviderFactory> videoGravityProviderFactory; // @synthesize videoGravityProviderFactory=_videoGravityProviderFactory;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithVideoGravityProviderFactory:(id)arg1 videoViewControllerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
