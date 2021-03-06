//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUEmbedConfigurationLoader-Protocol.h>

@class FCAsyncOnceOperation, FCFlintResourceManager, SXJSONDictionary;
@protocol FCNewsAppConfigurationManager;

@interface NUANFEmbedConfigurationLoader : NSObject <NUEmbedConfigurationLoader>
{
    SXJSONDictionary *_embedConfiguration;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    FCFlintResourceManager *_flintResourceManager;
    FCAsyncOnceOperation *_asyncOnceOperation;
}

@property(retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // @synthesize asyncOnceOperation=_asyncOnceOperation;
@property(retain, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
// - (void).cxx_destruct;
- (id)asyncLoadEmbedConfigurationOnceWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) SXJSONDictionary *embedConfiguration; // @synthesize embedConfiguration=_embedConfiguration;
- (id)loadEmbededConfigurationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;

@end

