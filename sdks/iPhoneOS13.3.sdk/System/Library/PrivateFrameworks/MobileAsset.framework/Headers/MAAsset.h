//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MAAsset : NSObject
{
    NSDictionary *_attributes;
    NSString *_assetType;
    NSString *_assetId;
    long long _state;
}

+ (void)startCatalogDownload:(id)arg1 options:(id)arg2 then:(id /* CDUnknownBlockType */)arg3;
+ (void)startCatalogDownload:(id)arg1 then:(id /* CDUnknownBlockType */)arg2;
@property(readonly) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (BOOL)isEqual:(id)arg1;
- (BOOL)refreshState;
- (BOOL)spaceCheck:(long long )arg1;
- (BOOL)overrideGarbageCollectionThreshold:(NSUInteger)arg1;
- (long long)configDownloadSync:(id)arg1;
- (void)configDownload:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (long long)cancelDownloadSync;
- (void)cancelDownload:(id /* CDUnknownBlockType */)arg1;
- (long long)purgeSync;
- (void)purge:(id /* CDUnknownBlockType */)arg1;
- (void)commonAssetDownload:(id)arg1 options:(id)arg2 then:(id /* CDUnknownBlockType */)arg3;
- (void)invokeClientCompletion:(long long)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (long long)calculateTimeout;
- (void)startDownload:(id)arg1 then:(id /* CDUnknownBlockType */)arg2;
- (void)startDownload:(id /* CDUnknownBlockType */)arg1;
- (id)createExtractor;
- (id)hashToString:(id)arg1;
- (void)startDownloadWithExtractor:(id /* CDUnknownBlockType */)arg1 options:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)startDownloadWithExtractor:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)logAsset;
- (id)description;
- (id)assetProperty:(id)arg1;
- (id)getLocalUrl;
- (id)getLocalFileUrl;
- (void)attachProgressCallBack:(id /* CDUnknownBlockType */)arg1;
- (id)assetServerUrl;
- (NSUInteger)hash;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;

@end

