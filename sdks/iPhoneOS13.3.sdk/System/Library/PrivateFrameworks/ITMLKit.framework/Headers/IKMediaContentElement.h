//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKAppPlayerBridge;

@interface IKMediaContentElement : IKViewElement
{
    IKAppPlayerBridge *_playerBridge;
}

+ (id)supportedFeatures;
@property(readonly, nonatomic) IKAppPlayerBridge *playerBridge; // @synthesize playerBridge=_playerBridge;
// - (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
