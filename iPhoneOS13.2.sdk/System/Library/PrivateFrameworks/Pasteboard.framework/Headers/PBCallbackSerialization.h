//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBCallbackSerialization : NSObject
{
    id /* block */ _endBlock;
    _Bool _hasBegun;
    _Bool _hasEnded;
}

- (void)sendEndBlock:(id /* block */)arg1;
- (void)sendBeginBlock:(id /* block */)arg1;

@end
