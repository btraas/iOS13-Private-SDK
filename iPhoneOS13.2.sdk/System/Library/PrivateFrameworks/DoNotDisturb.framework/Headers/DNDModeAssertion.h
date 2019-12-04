//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class DNDModeAssertionDetails, DNDModeAssertionSource, NSDate, NSUUID;

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSDate *_startDate;
    DNDModeAssertionDetails *_details;
    DNDModeAssertionSource *_source;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) DNDModeAssertionSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) DNDModeAssertionDetails *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 details:(id)arg3 source:(id)arg4;

@end
