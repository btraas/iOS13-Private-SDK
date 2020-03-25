//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NSHashTable;

@interface CPSWindow : UIWindow
{
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
// - (void).cxx_destruct;
- (BOOL)_isKeyWindowForDeferral;
- (void)sendEvent:(id)arg1;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;

@end
