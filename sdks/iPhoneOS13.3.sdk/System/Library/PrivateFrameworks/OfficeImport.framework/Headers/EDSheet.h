//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCDDelayedNode.h>

@class EDColorReference, EDHeaderFooter, EDPageSetup, EDProcessors, EDString, EDWarnings, EDWorkbook, ESDContainer, NSMutableArray, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDSheet : OCDDelayedNode
{
    EDString *mName;
    BOOL mHidden;
    BOOL mDisplayFormulas;
    BOOL mDisplayGridlines;
    BOOL mIsDialogSheet;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    OITSUPointerKeyDictionary *mTextBoxMap;
    OITSUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
    EDWorkbook *mWorkbook;
}

+ (id)sheetWithWorkbook:(id)arg1;
@property(readonly) __weak EDWorkbook *workbook; // @synthesize workbook=mWorkbook;
@property(nonatomic) BOOL isDialogSheet; // @synthesize isDialogSheet=mIsDialogSheet;
// - (void).cxx_destruct;
- (id)description;
- (id)warnings;
- (void)applyProcessors;
- (id)processors;
- (void)setEDComment:(id)arg1 forShape:(id)arg2;
- (id)edCommentForShape:(id)arg1;
- (NSUInteger)commentCount;
- (void)setEDTextBox:(id)arg1 forShape:(id)arg2;
- (id)edTextBoxForShape:(id)arg1;
- (id)drawables;
- (void)removeDrawableAtIndex:(NSUInteger)arg1;
- (void)addDrawable:(id)arg1;
- (id)drawableAtIndex:(NSUInteger)arg1;
- (NSUInteger)drawableCount;
- (void)setPageSetup:(id)arg1;
- (id)pageSetup;
- (void)setHeaderFooter:(id)arg1;
- (id)headerFooter;
- (void)setDefaultGridlineColor:(id)arg1;
- (id)defaultGridlineColor;
- (void)setDisplayGridlines:(BOOL)arg1;
- (BOOL)isDisplayGridlines;
- (void)setDisplayFormulas:(BOOL)arg1;
- (BOOL)isDisplayFormulas;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (void)setName:(id)arg1;
- (id)name;
- (void)doneWithNonRowContent;
- (void)dealloc;
- (id)initWithWorkbook:(id)arg1;
- (void)reduceMemoryIfPossible;
- (void)setEscherDrawing:(id)arg1;
- (id)escherDrawing;
- (id)drawableEnumerator;
- (void)setDefaultGridlineColorReference:(id)arg1;
- (id)defaultGridlineColorReference;
- (void)teardown;
- (void)setup;

@end

