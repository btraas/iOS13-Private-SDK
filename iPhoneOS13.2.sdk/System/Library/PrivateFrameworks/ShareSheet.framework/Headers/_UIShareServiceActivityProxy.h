//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, UISUIActivityExtensionItemDataRequest;

@interface _UIShareServiceActivityProxy : NSObject
{
    NSUUID *_activityUUID;
    NSString *_activityType;
    long long _activityCategory;
    UISUIActivityExtensionItemDataRequest *_underlyingActivityItemDataRequest;
    Class _remoteClass;
    struct CGSize _thumbnailSize;
    id /* block */ _didFinishPreparingForExecution;
    id /* block */ _didFinishPerformingActivityHandler;
}

+ (void)forwardInvocation:(id)arg1;
+ (id)activityProxyForServiceActivityDataRequest:(id)arg1;
@property(copy, nonatomic) id /* block */ didFinishPerformingActivityHandler; // @synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler;
@property(copy, nonatomic) id /* block */ didFinishPreparingForExecution; // @synthesize didFinishPreparingForExecution=_didFinishPreparingForExecution;
- (void)_willBePerformedOrPresented;
- (struct CGSize)_thumbnailSize;
- (_Bool)_activitySupportsPromiseURLs;
- (_Bool)_needsResolvedActivityItems;
- (_Bool)_managesOwnPresentation;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (id)_embeddedActivityViewController;
- (void)_cleanup;
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (void)activityDidFinish:(_Bool)arg1;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (id)activityTitle;
- (_Bool)allowsEmbedding;
- (_Bool)_wantsInitialSocialText;
- (_Bool)_wantsAttachmentURLItemData;
- (_Bool)_wantsThumbnailItemData;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)activityType;
- (id)activityUUID;
- (_Bool)_isExecutedInProcess;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)initWithUnderlyingActivityItemDataRequest:(id)arg1;

@end
