//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHTrendDataPoint : NSObject
{
    double mDataPointX;
    double mDataPointY;
    NSUInteger mGroupIndex;
}

- (long long)xValueCompare:(id)arg1;
- (NSUInteger)groupIndex;
- (double)dataPointY;
- (double)dataPointX;
- (id)initWithPointX:(double)arg1 pointY:(double)arg2 forGroup:(NSUInteger)arg3;

@end

