//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUScalePolicy-Protocol.h>

@class NSString;

@interface NUFillScalePolicy : NSObject <NUScalePolicy>
{
    CDStruct_d58201db _size;
}

@property(readonly, copy) NSString *description;
- (CDStruct_912cb5d2)scaleForImageSize:(CDStruct_912cb5d2)arg1;
- (id)initWithTargetPixelSize:(CDStruct_912cb5d2)arg1;
- (id)initWithTargetSize:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
