//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MSPBTimerContext : NSObject
{
    BOOL _isValid;
    NSDate *_date;
}

+ (id)contextWithDate:(id)arg1;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
// - (void).cxx_destruct;
- (id)init;

@end

