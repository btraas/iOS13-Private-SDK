//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIClientContext, UIViewController;

@interface SKUIExplicitRestrictionAlertController : NSObject
{
    SKUIClientContext *_clientContext;
    UIViewController *_presentingViewController;
}

- (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithClientContext:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithClientContext:(id)arg1;

@end
