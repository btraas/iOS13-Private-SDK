//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableRow : NSObject
{
    NSMutableArray *mCells;
    float mHeight;
}

// - (void).cxx_destruct;
- (id)description;
- (void)setHeight:(float)arg1;
- (float)height;
- (id)addCell;
- (id)cellAtIndex:(NSUInteger)arg1;
- (NSUInteger)cellCount;
- (id)init;
- (void)flipCellsRTL;

@end

