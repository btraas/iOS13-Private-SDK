//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class VideosExtrasImageBrowserViewController;

@protocol VideosExtrasImageBrowserViewControllerDataSource <NSObject>
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadDescriptionAtIndex:(NSUInteger)arg2 withCompletionHandler:(void (^)(NSAttributedString *))arg3;
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadSubtitleAtIndex:(NSUInteger)arg2 withCompletionHandler:(void (^)(NSAttributedString *))arg3;
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadTitleAtIndex:(NSUInteger)arg2 withCompletionHandler:(void (^)(NSAttributedString *))arg3;
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadImageAtIndex:(NSUInteger)arg2 withCompletionHandler:(void (^)(UIImage *))arg3;
- (NSUInteger)numberOfImagesForBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1;
@end

