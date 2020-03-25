//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NSString, NSURL;

@interface NUFileSourceDefinition : NUSingleSourceDefinition
{
    BOOL _useEmbeddedPreview;
    NSURL *_url;
    NSString *_uti;
}

@property(nonatomic) BOOL useEmbeddedPreview; // @synthesize useEmbeddedPreview=_useEmbeddedPreview;
@property(readonly) NSString *uti; // @synthesize uti=_uti;
@property(readonly) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)description;
- (long long)mediaType;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;
- (id)init;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id )arg2;

@end
