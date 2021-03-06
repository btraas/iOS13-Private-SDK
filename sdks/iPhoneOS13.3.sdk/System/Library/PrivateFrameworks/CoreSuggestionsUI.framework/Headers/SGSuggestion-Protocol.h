//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSAttributedString, NSString, SGSuggestionAction, UIImage, UIViewController;
@protocol SGSuggestionCategory, SGSuggestionDelegate;

@protocol SGSuggestion <NSObject>
@property(nonatomic) __weak id <SGSuggestionDelegate> suggestionDelegate;
- (SGSuggestionAction *)suggestionPrimaryAction;
- (NSString *)suggestionTitle;
- (id <SGSuggestionCategory>)suggestionCategory;

@optional
- (UIViewController *)suggestionPrimaryActionViewController;
- (UIImage *)suggestionImage;
- (NSAttributedString *)suggestionAttributedSubtitle;
- (NSString *)suggestionSubtitle;
- (SGSuggestionAction *)suggestionDismissAction;
@end

