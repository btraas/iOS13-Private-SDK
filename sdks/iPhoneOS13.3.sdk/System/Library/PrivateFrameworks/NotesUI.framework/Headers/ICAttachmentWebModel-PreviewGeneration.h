//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentWebModel.h>

@interface ICAttachmentWebModel (PreviewGeneration)
+ (UIImage )genericBrickThumbnailWithSize:(CGSize)arg1 scale:(double)arg2;
- (void)saveLPImage:(id)arg1;
- (void)updateTitle:(id)arg1 andDescription:(id)arg2;
- (BOOL)generatePreviewsInOperation:(id)arg1;
- (BOOL)generateAsynchronousPreviews;
- (BOOL)needToGeneratePreviews;
- (id /* CDUnknownBlockType */)genericBrickLargeThumbnailCreator;
- (id /* CDUnknownBlockType */)genericBrickThumbnailCreator;
- (id /* CDUnknownBlockType */)genericListThumbnailCreator;
@end

