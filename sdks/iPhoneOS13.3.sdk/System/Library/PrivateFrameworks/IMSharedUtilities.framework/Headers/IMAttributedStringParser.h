//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : NSObject
{
    IMAttributedStringParserContext *_context;
}

+ (id)sharedInstance;
- (void)parseContext:(id)arg1;
- (void)_preprocessWithContext:(id)arg1 string:(id )arg2;

@end

