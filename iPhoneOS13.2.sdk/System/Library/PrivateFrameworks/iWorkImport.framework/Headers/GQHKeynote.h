//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQKeynoteGenerator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHKeynote : NSObject <GQKeynoteGenerator>
{
}

+ (Class)enterSlideDrawables:(id)arg1 state:(id)arg2;
+ (int)endSlide:(id)arg1 state:(id)arg2;
+ (int)beginSlide:(id)arg1 state:(id)arg2;
+ (int)handleThemeStylesheet:(id)arg1 state:(id)arg2;
+ (int)handleSlideSize:(id)arg1 state:(id)arg2;
+ (int)endPresentation:(id)arg1 state:(id)arg2;
+ (int)beginPresentation:(id)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
