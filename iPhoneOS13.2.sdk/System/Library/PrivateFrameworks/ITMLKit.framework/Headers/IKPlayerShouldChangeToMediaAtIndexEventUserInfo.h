//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary, NSString;

@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    _Bool _shouldChange;
    long long _index;
}

@property(readonly, nonatomic) _Bool shouldChange; // @synthesize shouldChange=_shouldChange;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (_Bool)expectsReturnValue;
@property(readonly, nonatomic) NSDictionary *properties;
- (id)initWithIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
