//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import <Silex/MKMapViewDelegate-Protocol.h>
#import <Silex/SXFullscreenCanvasViewControllerDelegate-Protocol.h>

@class MKMapView, NSArray, NSCache, SXFullscreenCanvasViewController, SXMapSnapShotter, SXMediaEngageEvent, UIBarButtonItem, UIImageView, UISegmentedControl, UITapGestureRecognizer;
@protocol SXDocumentTitleProviding;

@interface SXMapComponentView : SXMediaComponentView <UIGestureRecognizerDelegate, MKMapViewDelegate, SXFullscreenCanvasViewControllerDelegate>
{
    MKMapView *_mapView;
    UITapGestureRecognizer *_tapGesture;
    NSArray *_annotations;
    id <SXDocumentTitleProviding> _documentTitleProvider;
    UIBarButtonItem *_doneBarButtonItem;
    SXFullscreenCanvasViewController *_fullScreenCanvasViewController;
    UISegmentedControl *_segmentedControl;
    NSArray *_toolbarItems;
    SXMapSnapShotter *_snapShotter;
    UIImageView *_imageView;
    id /* CDUnknownBlockType */ _snapShotCancelHandler;
    NSCache *_cachedSnapshots;
    SXMediaEngageEvent *_activeMediaEngageEvent;
    CDStruct_02837cd9 _mapRect;
}

@property(retain, nonatomic) SXMediaEngageEvent *activeMediaEngageEvent; // @synthesize activeMediaEngageEvent=_activeMediaEngageEvent;
@property(readonly, nonatomic) NSCache *cachedSnapshots; // @synthesize cachedSnapshots=_cachedSnapshots;
@property(copy, nonatomic) id /* CDUnknownBlockType */ snapShotCancelHandler; // @synthesize snapShotCancelHandler=_snapShotCancelHandler;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) SXMapSnapShotter *snapShotter; // @synthesize snapShotter=_snapShotter;
@property(retain, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) SXFullscreenCanvasViewController *fullScreenCanvasViewController; // @synthesize fullScreenCanvasViewController=_fullScreenCanvasViewController;
@property(retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(readonly, nonatomic) id <SXDocumentTitleProviding> documentTitleProvider; // @synthesize documentTitleProvider=_documentTitleProvider;
@property(retain, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
// - (void).cxx_destruct;
- (void)fullScreenCanvasViewControllerWantsToDismiss:(id)arg1;
- (void)submitMediaEngageCompleteEvent;
- (void)finishMediaEngageEvent;
- (void)createMediaEngageEvent;
- (NSUInteger)analyticsMediaType;
- (void)submitEvents;
- (id)mapTitle;
- (BOOL)hasSelectedAnnotations;
- (BOOL)areBarsHidden;
- (BOOL)isPresentingFullscreen;
- (BOOL)isUserInteractingWithMap;
- (void)enableMapViewInteraction:(BOOL)arg1;
- (void)mapTypeChanged:(id)arg1;
- (NSUInteger)mapTypeForSegmentIndex:(NSUInteger)arg1;
- (NSUInteger)segmentIndexForMapType:(NSUInteger)arg1;
- (void)setupToolbar;
- (void)setupNavigationBar;
- (void)configureMapView;
- (void)handleDoneTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)dismissFullScreen;
- (void)presentFullScreen;
- (CDStruct_2b0c6e0b)region;
- (void)cancelSnapShot;
- (void)createSnapShot;
- (void)traitCollectionDidChange:(id)arg1;
- (void)discardContents;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (void)memoryWarning:(id)arg1;
- (void)dealloc;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 documentTitleProvider:(id)arg7;

@end

