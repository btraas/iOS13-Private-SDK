//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

@interface ASDNotification : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
+ (id)notificationWithName:(id)arg1 userInfo:(id)arg2;
@property(readonly) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;

@end

