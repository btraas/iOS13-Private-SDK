//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PLClickPresentationInteractionManager, UIView;

@protocol PLClickPresentationInteractionPresenting 
@property(readonly, nonatomic) UIView *viewForPreview;
@property(readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager;

@optional
@property(readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@end
