//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFCancelable-Protocol.h>
#import <Message/MFSearchResultHandler-Protocol.h>
#import <Message/_MFFlushableMessageSetIterator-Protocol.h>

@class NSMutableIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _MFPersistedMessageForwardingIterator : NSObject <MFSearchResultHandler, _MFFlushableMessageSetIterator, EFCancelable>
{
    // Error parsing type: AB, name: _cancelled
    id /* block */ _handler;
    NSMutableIndexSet *_messageSet;
}

@property(readonly, nonatomic) NSMutableIndexSet *messageSet; // @synthesize messageSet=_messageSet;
@property(readonly, copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
- (void)flush;
- (void)cancel;
- (_Bool)handleMessage:(id)arg1;
- (id)initWithHandler:(id /* block */)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
