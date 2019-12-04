//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CHCutPoint : NSObject
{
    _Bool _isEndOfStroke;
    long long _strokeIndex;
    long long _pointIndex;
}

+ (id)sortedCHCutPointArray:(id)arg1;
@property(readonly, nonatomic) _Bool isEndOfStroke; // @synthesize isEndOfStroke=_isEndOfStroke;
@property(readonly, nonatomic) long long pointIndex; // @synthesize pointIndex=_pointIndex;
@property(readonly, nonatomic) long long strokeIndex; // @synthesize strokeIndex=_strokeIndex;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isStartOfStroke;
- (id)initWithStrokeIndex:(long long)arg1 pointIndex:(long long)arg2 isEndOfStroke:(_Bool)arg3;

@end
