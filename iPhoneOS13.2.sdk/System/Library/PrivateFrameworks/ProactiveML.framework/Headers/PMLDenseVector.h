//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSData, NSMutableData;

@interface PMLDenseVector : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableData *_data;
}

+ (id)denseVectorFromNumbers:(id)arg1;
- (float)valueAt:(unsigned long long)arg1;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)arg1;
- (void)enumerateValuesWithBlock:(id /* block */)arg1;
- (float)density;
- (float)maxValue;
- (float)minValue;
- (float)l2norm;
- (float)l1norm;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)vecByAppendingVec:(id)arg1;
- (id)sliceFrom:(int)arg1 to:(int)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithFloatsNoCopy:(float *)arg1 count:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (id)initWithFloatsNoCopy:(float *)arg1 count:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithFloats:(const float *)arg1 count:(unsigned long long)arg2;
- (id)initWithCount:(unsigned long long)arg1;
- (id)init;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) const float *ptr;

@end
