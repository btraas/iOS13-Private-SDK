//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordTimelineAppendixCell : WDMedicalRecordGroupableCell
{
    NSString *_title;
    UILabel *_titleLabel;
    UIView *_chevronView;
}

@property(retain, nonatomic) UIView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)tintColorDidChange;
- (id)_titleLabelFont;
- (void)setupSubviews;

@end
