//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, UIScrollView, VUIUpsellOfferTransactionView, VUIUpsellOfferView;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferViewController : _TVBgImageLoadingViewController
{
    IKViewElement *_viewElement;
    VUIUpsellOfferView *_upsellView;
    UIScrollView *_scrollView;
    VUIUpsellOfferTransactionView *_transactionView;
}

@property(retain, nonatomic) VUIUpsellOfferTransactionView *transactionView; // @synthesize transactionView=_transactionView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) VUIUpsellOfferView *upsellView; // @synthesize upsellView=_upsellView;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void)_iOS_updateViews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateWithViewElement:(id)arg1;

@end
