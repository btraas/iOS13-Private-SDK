//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/WFDatabaseResultObserver-Protocol.h>

@class NSUserDefaults, WFDatabaseResult;
@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCShareSheetWorkflowStatusUpdater : NSObject <WFDatabaseResultObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    id <VCDatabaseProvider> _databaseProvider;
    WFDatabaseResult *_shareSheetWorkflows;
}

@property(retain, nonatomic) WFDatabaseResult *shareSheetWorkflows; // @synthesize shareSheetWorkflows=_shareSheetWorkflows;
@property(readonly, nonatomic) id <VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)updateWithResult:(id)arg1;
- (void)queue_startIfPossible;
- (void)startIfPossible;
- (id)initWithUserDefaults:(id)arg1 databaseProvider:(id)arg2 eventHandler:(id)arg3;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end
