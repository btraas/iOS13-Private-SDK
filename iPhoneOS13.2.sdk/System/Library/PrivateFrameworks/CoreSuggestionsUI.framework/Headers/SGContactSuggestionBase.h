//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsUI/SGSuggestion-Protocol.h>
#import <CoreSuggestionsUI/SGSuggestionCategory-Protocol.h>
#import <CoreSuggestionsUI/SGSuggestionExtensions-Protocol.h>

@class NSString, SGRealtimeContact;
@protocol SGSuggestionDelegate;

@interface SGContactSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions>
{
    SGRealtimeContact *_realtimeContact;
    id <SGSuggestionDelegate> _suggestionDelegate;
}

+ (void)confirm:(_Bool)arg1 suggestion:(id)arg2 completion:(id /* block */)arg3;
+ (id)contactImage;
@property(nonatomic) __weak id <SGSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryId;
- (id)suggestionPrimaryAction;
- (id)suggestionCategory;
- (id)suggestionDismissAction;
- (id)primaryActionTitle;
- (id)suggestionSubtitle;
- (id)suggestionTitle;
- (id)realtimeSuggestion;
- (id)initWithRealtimeContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
