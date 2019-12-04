//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DeviceManagement/DMFAppRequest.h>

@class NSNumber;

@interface DMFInstallAppRequest : DMFAppRequest
{
    _Bool _allowFreePurchases;
    unsigned long long _licenseType;
    NSNumber *_accountIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) _Bool allowFreePurchases; // @synthesize allowFreePurchases=_allowFreePurchases;
@property(nonatomic) unsigned long long licenseType; // @synthesize licenseType=_licenseType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
