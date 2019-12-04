//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIContextMenuCardViewLayout : TVViewLayout
{
    VUITextLayout *_titleTextViewLayout;
    VUITextLayout *_subTitleTextViewLayout;
    TVImageLayout *_coverImageViewLayout;
    TVImageLayout *_badgeImageViewLayout;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(retain, nonatomic) TVImageLayout *badgeImageViewLayout; // @synthesize badgeImageViewLayout=_badgeImageViewLayout;
@property(retain, nonatomic) TVImageLayout *coverImageViewLayout; // @synthesize coverImageViewLayout=_coverImageViewLayout;
@property(retain, nonatomic) VUITextLayout *subTitleTextViewLayout; // @synthesize subTitleTextViewLayout=_subTitleTextViewLayout;
@property(retain, nonatomic) VUITextLayout *titleTextViewLayout; // @synthesize titleTextViewLayout=_titleTextViewLayout;
- (id)init;

@end
