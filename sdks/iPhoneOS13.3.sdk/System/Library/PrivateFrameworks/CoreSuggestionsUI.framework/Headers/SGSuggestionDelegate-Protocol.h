//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/SGSuggestionViewControllerPresenter-Protocol.h>

@protocol SGSuggestion;

@protocol SGSuggestionDelegate <SGSuggestionViewControllerPresenter>
- (long long)suggestionsUIContext;
- (void)suggestionWasUpdated:(id <SGSuggestion>)arg1;
- (void)suggestion:(id <SGSuggestion>)arg1 actionFinished:(BOOL)arg2;
@end

