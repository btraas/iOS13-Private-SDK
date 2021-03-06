//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedInputStream.h>

#import <MediaRemote/AVOutputContextCommunicationChannelDelegate-Protocol.h>

@class AVOutputContext, NSString;

@interface MRAVInputStream : MRAVBufferedInputStream <AVOutputContextCommunicationChannelDelegate>
{
    AVOutputContext *_outputContext;
}

@property(readonly, nonatomic) AVOutputContext *outputContext; // @synthesize outputContext=_outputContext;
// - (void).cxx_destruct;
- (void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithOutputContext:(id)arg1;

@end

