//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol PXWidget;

@protocol PXWidgetUnlockDelegate 
- (void)widget:(id <PXWidget>)arg1 performAfterUnlockingDeviceIfNecessary:(void (^)(void))arg2 failurehandler:(void (^)(void))arg3;
- (_Bool)widgetDeviceIsUnlocked:(id <PXWidget>)arg1;
@end
