//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAnisetteProvisioningClientProtocol-Protocol.h>

@protocol AKAnisetteServiceProtocol;

@interface _AKAnisetteProviderProxy : NSObject <AKAnisetteProvisioningClientProtocol>
{
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;
}

@property(retain, nonatomic) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
// - (void).cxx_destruct;
- (void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(BOOL)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)eraseAnisetteForContext:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)provisionAnisetteForContext:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithProvider:(id)arg1;

@end

