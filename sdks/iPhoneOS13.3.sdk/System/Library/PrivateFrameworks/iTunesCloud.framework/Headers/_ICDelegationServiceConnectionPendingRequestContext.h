//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICPBDGSRequest;

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject
{
    ICPBDGSRequest *_request;
    id /* CDUnknownBlockType */ _responseHandler;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) ICPBDGSRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;

@end
