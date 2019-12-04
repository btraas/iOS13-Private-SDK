//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSString;
@protocol OS_dispatch_queue;

@interface NRActiveDeviceAssertion : NSObject
{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NRDevice *_device;
}

@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_invalidate;
- (void)invalidate;
@property(readonly, nonatomic) _Bool isActive;
- (id)description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;

@end
