//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PVNotification : NSObject
{
    NSString *_name;
    id _details;
}

+ (id)notificationWithName:(id)arg1 details:(id)arg2;
+ (id)notificationWithName:(id)arg1;
@property(readonly, nonatomic) id details; // @synthesize details=_details;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 details:(id)arg2;

@end

