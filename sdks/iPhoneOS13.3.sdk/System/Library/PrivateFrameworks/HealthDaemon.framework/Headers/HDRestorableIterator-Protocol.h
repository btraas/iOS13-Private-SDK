//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HKIterator-Protocol.h>

@class NSData;

@protocol HDRestorableIterator <HKIterator>
- (NSData *)iteratorStateData;
- (BOOL)restoreIteratorStateFromData:(NSData *)arg1 error:(id )arg2;
@end

