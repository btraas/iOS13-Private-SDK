//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SCRCStackNode : NSObject
{
    id _object;
    _SCRCStackNode *_prev;
    _SCRCStackNode *_next;
}

@property(retain, nonatomic) _SCRCStackNode *next; // @synthesize next=_next;
@property(retain, nonatomic) _SCRCStackNode *prev; // @synthesize prev=_prev;
@property(retain, nonatomic) id object; // @synthesize object=_object;

@end
