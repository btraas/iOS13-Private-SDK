//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface IDSGroupSessionParticipantUpdate : NSObject
{
    NSUUID *_groupUUID;
    BOOL _isInitiator;
    NSUInteger _participantIdentifier;
    NSString *_participantDestinationID;
    NSUInteger _participantUpdateType;
    NSUInteger _participantUpdateSubtype;
    BOOL _fromServer;
    NSDate *_serverDate;
    NSData *_participantData;
    NSData *_clientContextData;
    NSArray *_members;
    NSDictionary *_participantIDs;
    NSUUID *_relaySessionID;
}

@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSDate *serverDate; // @synthesize serverDate=_serverDate;
@property(readonly, nonatomic) BOOL fromServer; // @synthesize fromServer=_fromServer;
@property(readonly, nonatomic) NSUInteger participantUpdateSubtype; // @synthesize participantUpdateSubtype=_participantUpdateSubtype;
@property(readonly, nonatomic) NSUUID *relaySessionID; // @synthesize relaySessionID=_relaySessionID;
@property(readonly, nonatomic) NSDictionary *participantIDs; // @synthesize participantIDs=_participantIDs;
@property(readonly, nonatomic) NSData *clientContextData; // @synthesize clientContextData=_clientContextData;
@property(readonly, nonatomic) NSData *participantData; // @synthesize participantData=_participantData;
@property(readonly, nonatomic) NSUInteger participantUpdateType; // @synthesize participantUpdateType=_participantUpdateType;
@property(readonly, nonatomic) NSString *participantDestinationID; // @synthesize participantDestinationID=_participantDestinationID;
@property(readonly, nonatomic) NSUInteger participantIdentifier; // @synthesize participantIdentifier=_participantIdentifier;
@property(readonly, nonatomic) BOOL isInitiator; // @synthesize isInitiator=_isInitiator;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 isInitiator:(BOOL)arg2 participantIdentifier:(NSUInteger)arg3 participantDestinationID:(id)arg4 participantUpdateType:(NSUInteger)arg5 participantUpdateSubtype:(NSUInteger)arg6 fromServer:(BOOL)arg7 serverDate:(id)arg8 participantData:(id)arg9 clientContextData:(id)arg10 members:(id)arg11 participantIDs:(id)arg12 relaySessionID:(id)arg13;

@end
