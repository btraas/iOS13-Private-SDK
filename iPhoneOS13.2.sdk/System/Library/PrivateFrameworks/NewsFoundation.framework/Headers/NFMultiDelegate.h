//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol;

@interface NFMultiDelegate : NSObject
{
    NSHashTable *_children;
    Protocol *_delegateProtocol;
}

@property(readonly, nonatomic) Protocol *delegateProtocol; // @synthesize delegateProtocol=_delegateProtocol;
@property(readonly, nonatomic) NSHashTable *children; // @synthesize children=_children;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)replaceDelegate:(id)arg1 withDelegate:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, nonatomic) id delegate;
- (id)initWithDelegate:(id)arg1 delegateProtocol:(id)arg2;

@end
