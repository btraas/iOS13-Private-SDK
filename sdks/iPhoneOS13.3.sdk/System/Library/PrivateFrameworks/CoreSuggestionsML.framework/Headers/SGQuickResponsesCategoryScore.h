//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGQuickResponsesCategoryScore : NSObject
{
    NSUInteger _modelCount;
    double _average;
    double _maximum;
}

@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double average; // @synthesize average=_average;
- (void)addScore:(double)arg1;
- (id)init;

@end
