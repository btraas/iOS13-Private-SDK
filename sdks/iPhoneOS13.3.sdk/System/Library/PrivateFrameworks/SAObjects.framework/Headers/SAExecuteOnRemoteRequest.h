//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, SARemoteDevice;

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand
{
}

+ (id)executeOnRemoteRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)executeOnRemoteRequest;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSData *serializedCommand;
@property(nonatomic) BOOL requiresResponseFromRemote;
@property(retain, nonatomic) SARemoteDevice *remoteDevice;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

