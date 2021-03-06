//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRVectorTimestamp;
@protocol CRDataType;

@interface CRDictionaryElement : NSObject
{
    id <CRDataType> _value;
    CRVectorTimestamp *_timestamp;
}

+ (id)temporaryElementWithValue:(id)arg1;
@property(retain, nonatomic) CRVectorTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) id <CRDataType> value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (id)description;
- (void)mergeWith:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithValue:(id)arg1 timestamp:(id)arg2;
- (id)initWithValue:(id)arg1;

@end

