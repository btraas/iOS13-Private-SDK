//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatter : NSObject
{
    NSString *_dateOnlyFormatString;
    NSString *_timeOnlyFormatString;
    struct __CFDateFormatter *_fullDateFormatter;
}

+ (id)timePortionOfDateTimeFormatString:(id)arg1;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)dateFormatStringSpecialSymbols;
+ (id)p_supportedTimeFormatMatchingFormat:(id)arg1 locale:(id)arg2;
+ (id)supportedTimeFormatsForLocale:(id)arg1;
+ (id)p_supportedDateFormatMatchingFormat:(id)arg1 locale:(id)arg2;
+ (id)supportedDateFormatsForLocale:(id)arg1;
+ (id)defaultDateTimeFormatForLocale:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;

@end
