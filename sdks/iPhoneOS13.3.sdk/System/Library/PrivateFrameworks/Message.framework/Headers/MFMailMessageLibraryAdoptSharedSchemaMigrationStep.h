//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection, EFSQLSchema, NSString;

@interface MFMailMessageLibraryAdoptSharedSchemaMigrationStep : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
    NSString *_protectedDatabaseName;
}

+ (void)cleanUpAfterMigrationWithConnection:(id)arg1;
@property(readonly, copy, nonatomic) NSString *protectedDatabaseName; // @synthesize protectedDatabaseName=_protectedDatabaseName;
@property(retain, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (BOOL)_cleanupOldSchema;
- (BOOL)_createIndexes;
- (BOOL)_migrateMessages;
- (BOOL)_migrateSendersAndRecipients;
- (BOOL)_migrateSummaries;
- (BOOL)_migrateSubjects;
- (BOOL)_migrateNonMessages;
- (BOOL)_migrateData;
- (BOOL)_dropTemporaryTables;
- (BOOL)_createTemporaryTables;
- (BOOL)_transformProtectedSchema;
- (BOOL)_transformSchema;
- (BOOL)_initializeOldProtectedSchema;
- (BOOL)performMigrationStep;
- (id)_protectedMessageDataTableSchema;
- (id)_summariesTableSchema;
- (id)_subjectsTableSchema;
- (id)_addressesTableSchema;
@property(readonly, nonatomic) EFSQLSchema *protectedSchema;
- (id)_spotlightMessageReindexTableSchema;
- (id)_spotlightTombstonesTableSchema;
- (id)_accountsTableSchema;
- (id)_popUIDsTableSchema;
- (id)_messageDataDeletedTableSchema;
- (id)_messageDataTableSchema;
- (id)_propertiesTableSchema;
- (id)_conversationIDMessageIDTableSchema;
- (id)_conversationsTableSchema;
- (id)_messageReferencesTableSchema;
- (id)_recipientsTableSchema;
- (id)_mailboxesTableSchema;
- (id)_messagesTableSchema;
@property(readonly, nonatomic) EFSQLSchema *schema;
- (id)initWithSQLiteConnection:(id)arg1 protectedDatabaseName:(id)arg2;

@end
