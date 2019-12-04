//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoVisiblePercentageManager-Protocol.h>

@class NSString, SVWeakObjectCache;
@protocol SVVideoVisiblePercentageProviderFactory;

@interface SVVideoVisiblePercentageManager : NSObject <SVVideoVisiblePercentageManager>
{
    id <SVVideoVisiblePercentageProviderFactory> _visiblePercentageProviderFactory;
    SVWeakObjectCache *_visiblePercentageProviders;
}

@property(readonly, nonatomic) SVWeakObjectCache *visiblePercentageProviders; // @synthesize visiblePercentageProviders=_visiblePercentageProviders;
@property(readonly, nonatomic) id <SVVideoVisiblePercentageProviderFactory> visiblePercentageProviderFactory; // @synthesize visiblePercentageProviderFactory=_visiblePercentageProviderFactory;
- (id)_visiblePercentageProviderForVideo:(id)arg1;
- (id)visiblePercentageReporterForVideo:(id)arg1;
- (id)visiblePercentageProviderForVideo:(id)arg1;
- (id)initWithVisiblePercentageProviderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
