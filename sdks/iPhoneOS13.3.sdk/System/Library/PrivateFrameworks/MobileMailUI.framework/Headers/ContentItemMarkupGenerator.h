//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileMailUI/EFLoggable-Protocol.h>

@interface ContentItemMarkupGenerator : NSObject <EFLoggable>
{
}

+ (BOOL)isDisplayableSinglePagePDFContentItem:(id)arg1;
+ (BOOL)isDisplayableImageContentItem:(id)arg1;
+ (BOOL)isDisplayableInlineContentItem:(id)arg1;
+ (id)attachmentElementMarkupStringForContentItem:(id)arg1;
+ (id)markupStringForDisplayForContentItem:(id)arg1;
+ (id)log;

@end

