//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceFormat;

@interface AXMCaptureSettings : NSObject
{
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceFormat *_captureFormat;
}

@property(retain, nonatomic) AVCaptureDeviceFormat *captureFormat; // @synthesize captureFormat=_captureFormat;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;

@end
