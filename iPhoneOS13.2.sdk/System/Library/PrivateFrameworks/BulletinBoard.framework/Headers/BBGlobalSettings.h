//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface BBGlobalSettings : NSObject <NSCopying, NSSecureCoding>
{
    long long _globalContentPreviewSetting;
    long long _globalSpokenNotificationSetting;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long globalSpokenNotificationSetting; // @synthesize globalSpokenNotificationSetting=_globalSpokenNotificationSetting;
@property(nonatomic) long long globalContentPreviewSetting; // @synthesize globalContentPreviewSetting=_globalContentPreviewSetting;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithContentPreviewSetting:(long long)arg1 spokenNotificationSetting:(long long)arg2;

@end
