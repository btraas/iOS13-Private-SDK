//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionRowModel.h>

@class SFTrack, SearchUITrackLayoutManager;

@interface SearchUITrackRowModel : SearchUICardSectionRowModel
{
    SearchUITrackLayoutManager *_trackLayoutManager;
    SFTrack *_track;
}

@property(retain, nonatomic) SFTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) SearchUITrackLayoutManager *trackLayoutManager; // @synthesize trackLayoutManager=_trackLayoutManager;
- (id)initWithResult:(id)arg1 trackManager:(id)arg2 cardSection:(id)arg3 track:(id)arg4 queryId:(unsigned long long)arg5;

@end
