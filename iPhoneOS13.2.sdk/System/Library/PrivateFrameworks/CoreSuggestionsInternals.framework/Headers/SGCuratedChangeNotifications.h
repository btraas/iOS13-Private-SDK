//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGCuratedChangeNotifications : NSObject
{
}

+ (void)addCalendarObserver:(id /* block */)arg1 forObjectLifetime:(id)arg2;
+ (void)addAddressBookObserver:(id /* block */)arg1 forObjectLifetime:(id)arg2;
+ (void)_addObserver:(id /* block */)arg1 forObjectLifetime:(id)arg2 listenerClass:(Class)arg3;
+ (id)_getListener:(Class)arg1;
+ (id)_getListenerByClassMap;
+ (void)simulateCalendarChange;
+ (void)simulateAddressBookChange;

@end
