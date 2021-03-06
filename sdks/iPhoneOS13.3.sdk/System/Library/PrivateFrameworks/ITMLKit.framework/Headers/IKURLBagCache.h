//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SSURLBag;

@interface IKURLBagCache : NSObject
{
    SSURLBag *_urlBag;
    NSDictionary *_existingDictionary;
    NSString *_cachePath;
}

+ (id)URLBagContext;
+ (id)sharedCache;
@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(readonly, nonatomic) NSDictionary *existingDictionary; // @synthesize existingDictionary=_existingDictionary;
@property(readonly, nonatomic) SSURLBag *urlBag; // @synthesize urlBag=_urlBag;
// - (void).cxx_destruct;
- (void)checkTrustStatusForURL:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isTrustedURL:(id)arg1;
- (void)loadValueForKey:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)valueForKey:(id)arg1;
- (void)_loadWithNotification:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateWithInvalidation:(BOOL)arg1;
- (id)init;

@end

