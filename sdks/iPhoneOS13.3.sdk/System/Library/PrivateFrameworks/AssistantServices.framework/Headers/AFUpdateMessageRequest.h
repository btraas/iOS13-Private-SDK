//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface AFUpdateMessageRequest : AFSiriRequest
{
    STSiriMessage *_message;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponseWithMessageIdentifier:(id)arg1;
- (id)message;
- (id)_initWithMessage:(id)arg1;

@end

