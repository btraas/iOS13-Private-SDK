//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSArray;

@interface ARPRoutingSessionArchive : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_sessions;
    double _routingSessionTimeout;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double routingSessionTimeout; // @synthesize routingSessionTimeout=_routingSessionTimeout;
@property(readonly, nonatomic) NSArray *sessions; // @synthesize sessions=_sessions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSessions:(id)arg1 routingSessionTimeout:(double)arg2;

@end
