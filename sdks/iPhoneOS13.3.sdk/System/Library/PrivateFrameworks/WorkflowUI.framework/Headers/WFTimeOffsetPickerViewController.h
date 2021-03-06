//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSArray, UIPickerView, UITableView;
@protocol WFTimeOffsetPickerViewControllerDelegate;

@interface WFTimeOffsetPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <WFTimeOffsetPickerViewControllerDelegate> _delegate;
    NSUInteger _event;
    UIPickerView *_currentPickerView;
    UITableView *_tableView;
    NSArray *_sections;
    NSArray *_pickerItems;
    NSUInteger _timeOffset;
}

@property(nonatomic) NSUInteger timeOffset; // @synthesize timeOffset=_timeOffset;
@property(readonly, nonatomic) NSArray *pickerItems; // @synthesize pickerItems=_pickerItems;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIPickerView *currentPickerView; // @synthesize currentPickerView=_currentPickerView;
@property(readonly, nonatomic) NSUInteger event; // @synthesize event=_event;
@property(nonatomic) __weak id <WFTimeOffsetPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)loadView;
- (id)initWithTimeTriggerEvent:(NSUInteger)arg1 timeOffset:(NSUInteger)arg2;

@end

