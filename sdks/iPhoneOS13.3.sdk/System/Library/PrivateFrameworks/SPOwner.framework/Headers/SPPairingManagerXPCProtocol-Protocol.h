//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPOwner/SPLocalPairingManagerXPCProtocol-Protocol.h>

@protocol SPPairingManagerXPCProtocol <NSObject, SPLocalPairingManagerXPCProtocol>
- (oneway void)currentBeaconingKeyWithCompletion:(void (^)(SPBeaconingKey *))arg1;
@end

