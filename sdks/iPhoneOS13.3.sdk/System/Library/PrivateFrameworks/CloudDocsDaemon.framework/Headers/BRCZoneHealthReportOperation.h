//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCAccountSession;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass>
{
    BOOL shouldPerformAnotherBatch;
    BRCAccountSession *_session;
}

// - (void).cxx_destruct;
- (void)main;
- (void)_reportRecords:(id)arg1 requestID:(NSUInteger)arg2;
- (BOOL)shouldPerformAnotherBatch;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

