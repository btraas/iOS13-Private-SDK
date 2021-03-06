//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXIPCServerMessageHandlerContext : NSObject
{
    BOOL _async;
    id /* CDUnknownBlockType */ _handler;
    id _target;
    SEL _selector;
}

@property(readonly, nonatomic) BOOL async; // @synthesize async=_async;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
// - (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3;
- (id)initWithHandler:(id /* CDUnknownBlockType */)arg1;

@end

