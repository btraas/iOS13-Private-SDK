//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMOAuth : NSObject
{
    NSString *_baseString;
    NSString *_headerString;
}

+ (id)headerForURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8;
@property(readonly, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
@property(readonly, nonatomic) NSString *baseString; // @synthesize baseString=_baseString;
// - (void).cxx_destruct;
- (id)initWithURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8;

@end

