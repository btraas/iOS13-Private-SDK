//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsSubscription/SKAccountPageViewControllerDelegate-Protocol.h>

@protocol SKAccountPageViewControllerDelegate;

@interface BridgedAccountPageViewControllerFactory : NSObject <SKAccountPageViewControllerDelegate>
{
    id <SKAccountPageViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SKAccountPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)createAccountPageViewControllerFor:(id)arg1;

@end

