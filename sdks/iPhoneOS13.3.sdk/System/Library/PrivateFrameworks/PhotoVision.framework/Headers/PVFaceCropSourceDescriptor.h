//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PVFace, PVImage;

@interface PVFaceCropSourceDescriptor : NSObject <NSCopying>
{
    PVFace *_face;
    PVImage *_image;
}

+ (id)descriptorForFace:(id)arg1 image:(id)arg2;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)image;
- (id)face;
- (id)initWithFace:(id)arg1 image:(id)arg2;

@end

