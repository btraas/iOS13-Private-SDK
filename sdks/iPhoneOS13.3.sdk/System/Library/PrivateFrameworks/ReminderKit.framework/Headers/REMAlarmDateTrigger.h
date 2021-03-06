//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMAlarmTrigger.h>


@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>
{
    NSDateComponents *_dateComponents;
}

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;
@property(copy, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTemporal;
- (id)_deepCopy;
- (id)initWithObjectID:(id)arg1 dateComponents:(id)arg2;
- (id)initWithDateComponents:(id)arg1;

@end

