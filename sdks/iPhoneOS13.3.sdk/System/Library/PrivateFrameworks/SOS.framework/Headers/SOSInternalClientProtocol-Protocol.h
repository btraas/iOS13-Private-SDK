//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SOS/SOSClientProtocol-Protocol.h>

@protocol SOSInternalClientProtocol <SOSClientProtocol>
- (void)didDismissClientSOSBeforeSOSCall:(long long)arg1;
- (void)dismissClientSOSWithCompletion:(void (^)(BOOL))arg1;
- (void)updateClientCurrentSOSInteractiveState:(long long)arg1;
- (void)updateClientCurrentSOSInitiationState:(long long)arg1;
@end

