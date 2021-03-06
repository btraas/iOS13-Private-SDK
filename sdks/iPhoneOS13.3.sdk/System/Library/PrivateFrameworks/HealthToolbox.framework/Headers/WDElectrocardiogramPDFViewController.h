//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSData, NSDate, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramPDFViewController : UIViewController <UIInterfaceOrientationMaskOverride>
{
    NSData *_pdfData;
    NSDate *_sampleDate;
    PDFDocument *_pdfDocument;
}

@property(readonly, nonatomic) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property(readonly, nonatomic) NSDate *sampleDate; // @synthesize sampleDate=_sampleDate;
@property(readonly, nonatomic) NSData *pdfData; // @synthesize pdfData=_pdfData;
// - (void).cxx_destruct;
- (NSUInteger)overrideMask;
- (void)didTapShare;
- (void)didTapDone;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
@property(readonly, nonatomic) PDFView *pdfView;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2;

@end

