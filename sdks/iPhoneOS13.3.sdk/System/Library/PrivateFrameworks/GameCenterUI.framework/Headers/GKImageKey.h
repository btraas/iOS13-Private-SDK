//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKImageKey : NSObject
{
    NSString *_filePath;
    NSString *_cacheKey;
    NSString *_basename;
    NSString *_imageID;
    CGSize _size;
}

+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;
+ (id)fileNameWithIdentifierInImageSource:(id)arg1;
@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
@property(retain, nonatomic) NSString *basename; // @synthesize basename=_basename;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) NSString *filePath;

@end

