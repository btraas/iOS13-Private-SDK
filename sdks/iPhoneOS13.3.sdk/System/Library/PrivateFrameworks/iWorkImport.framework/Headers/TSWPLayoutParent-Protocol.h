//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSKSelectionPath, TSWPAttachment, TSWPLayout;
@protocol NSFastEnumeration, TSWPStyleProvider;

@protocol TSWPLayoutParent
- (BOOL)descendersCannotClip;
- (Class)repClassForTextLayout:(TSWPLayout *)arg1;
- (id <NSFastEnumeration>)dependentsOfTextLayout:(TSWPLayout *)arg1;
- (CGRect)autosizedFrameForTextLayout:(TSWPLayout *)arg1 textSize:(CGSize)arg2;
- (CGRect)nonAutosizedFrameForTextLayout:(TSWPLayout *)arg1;
- (void)invalidateForAutosizingTextLayout:(TSWPLayout *)arg1;
- (int)verticalAlignmentForTextLayout:(TSWPLayout *)arg1;
- (NSUInteger)autosizeFlagsForTextLayout:(TSWPLayout *)arg1;

@optional
- (CGRect)adjustRect:(CGRect)arg1 forScrollingToSelectionPath:(TSKSelectionPath *)arg2 forZoom:(BOOL)arg3;
- (NSUInteger)pageNumberForAttachment:(TSWPAttachment *)arg1;
- (NSUInteger)pageCountForAttachment:(TSWPAttachment *)arg1;
- (CGSize)initialTextSize;
- (int)naturalAlignmentForTextLayout:(TSWPLayout *)arg1;
- (CGRect)maskRectForTextLayout:(TSWPLayout *)arg1;
- (BOOL)textLayoutShouldLayoutVertically:(TSWPLayout *)arg1;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(TSWPLayout *)arg1;
- (NSUInteger)initialCharIndex;
- (double)maxAutoGrowBlockHeightForTextLayout:(TSWPLayout *)arg1;
- (double)maxAutoGrowLineWidthForTextLayout:(TSWPLayout *)arg1;
- (id <TSWPStyleProvider>)styleProvider;
@end
