//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSInvalidatable-Protocol.h>

@class NSString, SBSHardwareButtonService;
@protocol SBSHardwareButtonEventConsuming;

@interface _SBSHardwareButtonEventConsumerInfo : NSObject <BSInvalidatable>
{
    BOOL _valid;
    SBSHardwareButtonService *_service;
    id <SBSHardwareButtonEventConsuming> _consumer;
    long long _buttonKind;
    NSUInteger _eventMask;
    long long _eventPriority;
}

+ (id)infoWithConsumer:(id)arg1;
@property(nonatomic) long long eventPriority; // @synthesize eventPriority=_eventPriority;
@property(nonatomic) NSUInteger eventMask; // @synthesize eventMask=_eventMask;
@property(nonatomic) long long buttonKind; // @synthesize buttonKind=_buttonKind;
@property(retain, nonatomic) id <SBSHardwareButtonEventConsuming> consumer; // @synthesize consumer=_consumer;
@property(nonatomic) __weak SBSHardwareButtonService *service; // @synthesize service=_service;
@property(nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
// - (void).cxx_destruct;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;

@end
