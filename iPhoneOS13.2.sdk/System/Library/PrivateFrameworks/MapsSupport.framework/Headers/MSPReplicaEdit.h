//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSUUID;

@interface MSPReplicaEdit : NSObject <NSCopying>
{
    NSUUID *_identifierOfAffectedRecord;
}

@property(readonly, nonatomic) NSUUID *identifierOfAffectedRecord; // @synthesize identifierOfAffectedRecord=_identifierOfAffectedRecord;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)init;

@end
