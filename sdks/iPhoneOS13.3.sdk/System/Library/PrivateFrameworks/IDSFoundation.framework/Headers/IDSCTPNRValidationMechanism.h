//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying>
{
    long long _type;
    NSString *_context;
}

+ (id)SMSLessMechanism;
+ (id)SMSMechanismWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithType:(long long)arg1 context:(id)arg2;

@end

