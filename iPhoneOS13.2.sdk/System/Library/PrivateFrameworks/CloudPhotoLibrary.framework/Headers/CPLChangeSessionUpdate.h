//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSString;

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding>
{
    NSString *_libraryVersion;
    NSDate *_queuedDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *queuedDate; // @synthesize queuedDate=_queuedDate;
@property(readonly, copy, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *statusDescription;
- (id)storageForStatusInStore:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)discardFromStore:(id)arg1 error:(id *)arg2;
- (_Bool)applyToStore:(id)arg1 error:(id *)arg2;
- (id)initWithStore:(id)arg1;

@end
