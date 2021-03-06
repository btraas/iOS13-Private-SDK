//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDAddDataManualEntryItem.h>

@class NSDate, NSDateFormatter, UIDatePicker, WDManualDataEntryTableViewCell;

__attribute__((visibility("hidden")))
@interface _WDTwoPartDateTimeManualEntryItem : WDAddDataManualEntryItem
{
    UIDatePicker *_datePicker;
    UIDatePicker *_timePicker;
    WDManualDataEntryTableViewCell *_dateTableViewCell;
    WDManualDataEntryTableViewCell *_timeTableViewCell;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
}

// - (void).cxx_destruct;
- (void)beginEditing;
- (void)setValue:(id)arg1;
- (void)_generateValue:(id /* CDUnknownBlockType */)arg1;
- (id)generateValue;
- (void)_updateCellLabels;
- (void)_timePickerDidChange:(id)arg1;
- (void)_saveDisambiguatedDate:(id)arg1;
- (void)_datePickerDidChange:(id)arg1;
- (void)_setupTableViewCells;
- (id)tableViewCells;
- (id)initWithMaximumDate:(id)arg1;

@end

