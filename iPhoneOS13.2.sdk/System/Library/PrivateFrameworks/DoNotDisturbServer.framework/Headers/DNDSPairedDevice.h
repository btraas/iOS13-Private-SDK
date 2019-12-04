//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, NSUUID;

@interface DNDSPairedDevice : NSObject <NSCopying>
{
    NSString *_deviceIdentifier;
    unsigned long long _deviceClass;
    unsigned long long _syncProtocolVersion;
    NSUUID *_pairingIdentifier;
    NSString *_pairingDataStore;
}

@property(readonly, copy, nonatomic) NSString *pairingDataStore; // @synthesize pairingDataStore=_pairingDataStore;
@property(readonly, copy, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) unsigned long long syncProtocolVersion; // @synthesize syncProtocolVersion=_syncProtocolVersion;
@property(readonly, nonatomic) unsigned long long deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 syncProtocolVersion:(unsigned long long)arg3 pairingIdentifier:(id)arg4 pairingDataStore:(id)arg5;

@end
