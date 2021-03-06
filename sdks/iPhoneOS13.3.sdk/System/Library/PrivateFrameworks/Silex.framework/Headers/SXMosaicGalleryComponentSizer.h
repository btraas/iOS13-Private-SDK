//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

#import <Silex/SXMosaicGalleryLayouterDataSource-Protocol.h>

@class SXMosaicGalleryLayouter;

@interface SXMosaicGalleryComponentSizer : SXComponentSizer <SXMosaicGalleryLayouterDataSource>
{
    SXMosaicGalleryLayouter *_layouter;
}

@property(retain, nonatomic) SXMosaicGalleryLayouter *layouter; // @synthesize layouter=_layouter;
// - (void).cxx_destruct;
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;
- (NSUInteger)numberOfItemsForGalleryLayouter:(id)arg1;
- (BOOL)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(NSUInteger)arg2;
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(NSUInteger)arg2;
- (CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(NSUInteger)arg2;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;

@end

