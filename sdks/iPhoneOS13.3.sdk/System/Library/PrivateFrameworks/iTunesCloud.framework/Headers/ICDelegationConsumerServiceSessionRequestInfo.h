//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject
{
    NSUInteger _accountID;
    NSUInteger _fairPlaySessionID;
}

@property(readonly, nonatomic) NSUInteger fairPlaySessionID; // @synthesize fairPlaySessionID=_fairPlaySessionID;
@property(readonly, nonatomic) NSUInteger accountID; // @synthesize accountID=_accountID;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithAccountID:(NSUInteger)arg1 fairPlaySessionID:(NSUInteger)arg2;

@end

