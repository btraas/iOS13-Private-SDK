//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFWorkflowConflictResolution : NSObject
{
    BOOL _keepLocal;
    BOOL _keepRemote;
    NSString *_localWorkflowID;
    NSString *_remoteWorkflowID;
}

@property(nonatomic) BOOL keepRemote; // @synthesize keepRemote=_keepRemote;
@property(nonatomic) BOOL keepLocal; // @synthesize keepLocal=_keepLocal;
@property(copy, nonatomic) NSString *remoteWorkflowID; // @synthesize remoteWorkflowID=_remoteWorkflowID;
@property(copy, nonatomic) NSString *localWorkflowID; // @synthesize localWorkflowID=_localWorkflowID;
// - (void).cxx_destruct;
- (id)description;

@end

