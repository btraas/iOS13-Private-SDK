//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSApplicationControllerAlertAction : NSObject
{
    NSString *_title;
    long long _style;
    id /* CDUnknownBlockType */ _callback;
}

+ (long long)styleFromString:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ callback; // @synthesize callback=_callback;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;

@end
