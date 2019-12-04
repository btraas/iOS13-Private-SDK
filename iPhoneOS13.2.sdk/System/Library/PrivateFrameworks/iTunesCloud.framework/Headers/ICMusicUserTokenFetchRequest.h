//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICRemoteRequestOperation.h>



@class ICClientInfo, NSString;

@interface ICMusicUserTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding>
{
    ICClientInfo *_clientInfo;
    NSString *_developerToken;
    unsigned long long _options;
}

+ (_Bool)supportsSecureCoding;
- (void)_executeByPerformingStoreRequestWithContext:(id)arg1;
- (void)execute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;
- (id)initWithDeveloperToken:(id)arg1 clientInfo:(id)arg2 options:(unsigned long long)arg3;

@end
