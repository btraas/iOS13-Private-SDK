//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODefaultsDBCollection, NSString;

__attribute__((visibility("hidden")))
@interface GEODefaultsDBValue : NSObject
{
    GEODefaultsDBCollection *_parent;
    long long _dbId;
    NSString *_type;
    id _value;
}

+ (id)dbValue:(id)arg1 type:(id)arg2 value:(id)arg3;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak GEODefaultsDBCollection *parent; // @synthesize parent=_parent;
@property(nonatomic) long long dbId; // @synthesize dbId=_dbId;
- (id)initWithParent:(id)arg1 type:(id)arg2 value:(id)arg3;

@end
