//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDGraphic.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDImageBinary;

__attribute__((visibility("hidden")))
@interface GQDWebView : GQDGraphic <GQDNameMappable>
{
    GQDImageBinary *mImageBinary;
}

+ (const struct StateSpec )stateForReading;
- (id)imageBinary;
- (void)dealloc;

@end

