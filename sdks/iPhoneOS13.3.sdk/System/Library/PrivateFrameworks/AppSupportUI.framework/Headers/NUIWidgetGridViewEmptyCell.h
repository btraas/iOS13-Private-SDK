//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AppSupportUI/NUIWidgetGridViewCell-Protocol.h>

@class NUIWidgetGridView;

@interface NUIWidgetGridViewEmptyCell : UIView <NUIWidgetGridViewCell>
{
    NUIWidgetGridView *_gridView;
    double _width;
    NSUInteger _index;
}

// - (void).cxx_destruct;
- (CDStruct_c3b9c2ee)donatableSpaceAllowRemeasure:(BOOL)arg1;
- (CDStruct_c3b9c2ee)donatableSpace;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1;
- (id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(NSUInteger)arg3;
@property(readonly, nonatomic) NSUInteger index;

@end
