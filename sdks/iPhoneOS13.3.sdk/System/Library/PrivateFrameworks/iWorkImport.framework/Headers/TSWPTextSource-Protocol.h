//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSLocale, NSString, TSWPAttachment, TSWPCharacterStyle, TSWPFootnoteReferenceAttachment, TSWPParagraphStyle, TSWPSmartField;

@protocol TSWPTextSource <NSObject>
- (NSUInteger)storageLength;
- (void)updateStorageChangeCount;
- (NSUInteger)changeCount;
- (BOOL)adjustRangesByDelta:(long long)arg1 startingAt:(NSUInteger)arg2;
- (_NSRange)charRangeRemappedFromStorage:(_NSRange)arg1;
- (NSUInteger)charIndexRemappedFromStorage:(NSUInteger)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(NSUInteger)arg1 forAttributeKind:(NSUInteger)arg2 effectiveRange:(_NSRange )arg3;
- (_NSRange)charRangeMappedFromStorage:(_NSRange)arg1;
- (_NSRange)charRangeMappedToStorage:(_NSRange)arg1;
- (NSUInteger)charIndexMappedFromStorage:(NSUInteger)arg1;
- (NSUInteger)charIndexMappedToStorage:(NSUInteger)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(_NSRange)arg2 locale:(NSLocale *)arg3 hyphenChar:(unsigned int )arg4;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (_NSRange)wordAtCharIndex:(NSUInteger)arg1 includePreviousWord:(BOOL)arg2 includeHyphenation:(BOOL)arg3;
- (_NSRange)wordAtCharIndex:(NSUInteger)arg1 includePreviousWord:(BOOL)arg2;
- (TSWPCharacterStyle *)characterStyleAtCharIndex:(NSUInteger)arg1 effectiveRange:(_NSRange )arg2;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(NSUInteger)arg1;
- (TSWPParagraphStyle *)paragraphStyleAtCharIndex:(NSUInteger)arg1 effectiveRange:(_NSRange )arg2;
- (TSWPAttachment *)attachmentOrFootnoteAtCharIndex:(NSUInteger)arg1;
- (TSWPAttachment *)attachmentAtCharIndex:(NSUInteger)arg1;
- (TSWPFootnoteReferenceAttachment *)footnoteReferenceAtCharIndex:(NSUInteger)arg1;
- (NSArray *)smartFieldsWithAttributeKind:(NSUInteger)arg1 intersectingRange:(_NSRange)arg2;
- (TSWPSmartField *)smartFieldAtCharIndex:(NSUInteger)arg1 attributeKind:(NSUInteger)arg2 effectiveRange:(_NSRange )arg3;
- (void)attributesAtCharIndex:(NSUInteger)arg1 attributesOfInterest:(BOOL [22])arg2 attributesTable:(id [22])arg3 effectiveRange:(_NSRange )arg4;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(NSUInteger)arg1;
- (BOOL)hasColumnBreakAtCharIndex:(NSUInteger)arg1;
- (void)getCharacters:(unsigned short )arg1 range:(_NSRange)arg2;
- (NSString *)string;
- (NSUInteger)length;

@optional
- (BOOL)hasSmartFieldsInRange:(_NSRange)arg1;
- (void)enumerateWithAttributeKind:(NSUInteger)arg1 inRange:(_NSRange)arg2 usingBlock:(void (^)(id, _NSRange, BOOL ))arg3;
- (void)enumerateSmartFieldsWithAttributeKind:(NSUInteger)arg1 inRange:(_NSRange)arg2 usingBlock:(void (^)(id, _NSRange, BOOL ))arg3;
- (NSString *)substringWithRange:(_NSRange)arg1;
@end

