//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPSenderStrategy.h>

__attribute__((visibility("hidden")))
@interface MSPSenderMinimalStrategy : MSPSenderStrategy
{
    BOOL _needToSendInit;
}

- (void)destinationUpdated:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)_sendDestinationIfNeeded;
- (BOOL)_needToSendEtaRefreshFor:(id)arg1 state:(id)arg2;
- (BOOL)_validDestinationState:(id)arg1;

@end

