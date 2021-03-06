//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, WKWebView;

__attribute__((visibility("hidden")))
@interface LPMetadataProviderSpecializationContext : NSObject
{
    BOOL _hasLoadedResource;
    NSURL *_URL;
    NSString *_MIMEType;
    WKWebView *_webView;
    NSUInteger _allowedSpecializations;
}

@property(readonly, nonatomic) NSUInteger allowedSpecializations; // @synthesize allowedSpecializations=_allowedSpecializations;
@property(readonly, retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) BOOL hasLoadedResource; // @synthesize hasLoadedResource=_hasLoadedResource;
@property(readonly, copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 webView:(id)arg3 hasLoadedResource:(BOOL)arg4 allowedSpecializations:(NSUInteger)arg5;

@end

