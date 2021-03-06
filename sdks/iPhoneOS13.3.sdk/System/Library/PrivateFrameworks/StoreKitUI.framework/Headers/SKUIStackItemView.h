//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSArray, NSMapTable, SKUIAttributedStringView, SKUIStackItemViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIStackItemView : SKUIViewReuseView <SKUIViewElementView>
{
    SKUIStackItemViewElement *_viewElement;
    SKUIViewElementLayoutContext *_lastContext;
    SKUIAttributedStringView *_textView;
    NSArray *_imageViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    UIEdgeInsets _contentInset;
}

+ (id)_textViewLayoutWithWidth:(double)arg1 string:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 numberOfLines:(NSUInteger )arg4;
+ (CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(retain, nonatomic) NSMapTable *imageViewToImageResourceCacheKey; // @synthesize imageViewToImageResourceCacheKey=_imageViewToImageResourceCacheKey;
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) SKUIAttributedStringView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) SKUIViewElementLayoutContext *lastContext; // @synthesize lastContext=_lastContext;
@property(retain, nonatomic) SKUIStackItemViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
@property(readonly, nonatomic) NSUInteger numberOfLines; // @dynamic numberOfLines;

@end

