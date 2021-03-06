//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/BSXPCCoding-Protocol.h>

@class NSDictionary, NSString;

@interface SBSRemoteAlertDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying>
{
    BOOL _forCarPlay;
    NSString *_serviceName;
    NSString *_viewControllerClassName;
    NSDictionary *_userInfo;
    NSString *_impersonatedCarPlayAppIdentifier;
}

@property(nonatomic, getter=isForCarPlay) BOOL forCarPlay; // @synthesize forCarPlay=_forCarPlay;
@property(copy, nonatomic) NSString *impersonatedCarPlayAppIdentifier; // @synthesize impersonatedCarPlayAppIdentifier=_impersonatedCarPlayAppIdentifier;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;
- (id)init;

@end

