//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell
{
    NSAttributedString *_attributedButtonText;
}

@property(copy, nonatomic) NSAttributedString *attributedButtonText; // @synthesize attributedButtonText=_attributedButtonText;
// - (void).cxx_destruct;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureForChatItem:(id)arg1;

@end
