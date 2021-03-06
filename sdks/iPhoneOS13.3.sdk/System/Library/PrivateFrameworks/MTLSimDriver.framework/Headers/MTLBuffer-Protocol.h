//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLResource-Protocol.h>

@class MTLTextureDescriptor, NSString;
@protocol MTLTexture;

@protocol MTLBuffer <MTLResource>
@property(readonly) NSUInteger length;
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(NSString *)arg1 range:(_NSRange)arg2;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3;
- (void)didModifyRange:(_NSRange)arg1;
- (void )contents;
@end

