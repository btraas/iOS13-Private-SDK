//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class CMDrawableStyle, NSData, NSString, OADDrawable, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDrawableMapper : CMMapper
{
    OADDrawable *mDrawable;
    CMDrawableStyle *mStyle;
    NSData *mImageBinaryData;
    NSString *mName;
    NSString *mExtension;
    int mResourceType;
    NSString *mSourcePath;
    CGRect mBox;
    float mRotation;
    BOOL mIsSupported;
    BOOL mIsCropped;
    CGRect mUncroppedBox;
    OADOrientedBounds *mOrientedBounds;
}

// - (void).cxx_destruct;
- (id)convertMetafileToPdf;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (CGRect)shapeTextBoxRect;
- (void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(BOOL)arg3 withState:(id)arg4;
- (void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2;
- (void)calculateUncroppedBox:(id)arg1;
- (void)mapBounds;
- (void)mapImageBinaryData;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2;
- (void)setWithOadImage:(id)arg1;
- (void)setBoundingBox;
- (void)setRotation:(float)arg1;
- (float)rotation;
- (CGRect)uncroppedBox;
- (BOOL)isCropped;
- (CGRect)box;
- (id)initWithOadDrawable:(id)arg1 parent:(id)arg2;
- (id)initWithParent:(id)arg1;

@end

