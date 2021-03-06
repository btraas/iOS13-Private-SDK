//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAMoveAction : DAAction
{
    NSString *_sourceContainerId;
    NSString *_sourceServerId;
    NSString *_destinationContainerId;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *destinationContainerId; // @synthesize destinationContainerId=_destinationContainerId;
@property(retain, nonatomic) NSString *sourceServerId; // @synthesize sourceServerId=_sourceServerId;
@property(retain, nonatomic) NSString *sourceContainerId; // @synthesize sourceContainerId=_sourceContainerId;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(NSUInteger)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;

@end

