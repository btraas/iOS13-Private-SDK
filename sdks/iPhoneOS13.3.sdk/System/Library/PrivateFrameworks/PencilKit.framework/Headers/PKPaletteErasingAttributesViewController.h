//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol PKPaletteErasingAttributesViewControllerDelegate;

@interface PKPaletteErasingAttributesViewController : UIViewController
{
    id <PKPaletteErasingAttributesViewControllerDelegate> _delegate;
}

+ (double)_preferredContentSizeWidth;
@property(nonatomic) __weak id <PKPaletteErasingAttributesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (CGSize)preferredContentSize;
@property(nonatomic) long long eraserType;
- (BOOL)_canShowWhileLocked;
- (void)_segmentedControlDidChangeValue:(id)arg1;
- (void)loadView;

@end

