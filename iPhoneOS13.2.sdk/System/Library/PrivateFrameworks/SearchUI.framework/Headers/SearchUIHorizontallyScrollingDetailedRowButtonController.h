//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIDetailedView;

@interface SearchUIHorizontallyScrollingDetailedRowButtonController : SearchUIHorizontallyScrollingContainerButtonController
{
    SearchUIDetailedView *_detailedView;
}

@property(retain, nonatomic) SearchUIDetailedView *detailedView; // @synthesize detailedView=_detailedView;
- (void)setCardSectionRowModel:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (id)setupContentView;
- (double)spacing;

@end
