//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMMultiQueueItem : NSObject
{
    id _block;
    NSString *_GUID;
    NSString *_describer;
}

@property(readonly, nonatomic) NSString *describer; // @synthesize describer=_describer;
@property(readonly, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(readonly, nonatomic) id block; // @synthesize block=_block;
- (void)dealloc;
- (id)initWithBlock:(id)arg1 GUID:(id)arg2 description:(id)arg3;

@end
