//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDUnassociatedWACAccessory, NSError;

@protocol HMDWACAccessoryConfigurationDelegate
- (void)unassociatedWACAccessoryDidFinishAssociation:(HMDUnassociatedWACAccessory *)arg1 withError:(NSError *)arg2;
- (void)unassociatedWACAccessoryDidStartAssociation:(HMDUnassociatedWACAccessory *)arg1;
- (void)requestPermissionToAssociateWACAccessory:(HMDUnassociatedWACAccessory *)arg1 completionHandler:(void (^)(BOOL))arg2;
@end
