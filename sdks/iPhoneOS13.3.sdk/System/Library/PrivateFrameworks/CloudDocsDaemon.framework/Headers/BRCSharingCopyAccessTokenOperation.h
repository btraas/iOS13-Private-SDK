//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKRecordID;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyAccessTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    CKRecordID *_recordID;
    CKRecordID *_shareID;
}

@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
// - (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithItem:(id)arg1;

@end

