//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextInputStringTokenizer.h>

@class TSDTextInputResponder;
@protocol TSDTextInput;

@interface TSDTextInputTokenizer : UITextInputStringTokenizer
{
    TSDTextInputResponder *_textInputResponder;
}

- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)p_moveToEndOfWordFromPosition:(id)arg1;
- (id)p_moveToStartOfWordFromPosition:(id)arg1;
- (id)p_positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
@property(readonly, nonatomic) id <TSDTextInput> editor;
- (id)initWithTextInput:(id)arg1;

@end

