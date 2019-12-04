//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class ICNote, UIWindow;

@interface ICPasswordAddOrRemovePasswordActivity : UIActivity
{
    id /* block */ _completionHandler;
    id /* block */ _willPerformActivityBlock;
    ICNote *_note;
    UIWindow *_displayWindow;
}

+ (long long)activityCategory;
@property(nonatomic) __weak UIWindow *displayWindow; // @synthesize displayWindow=_displayWindow;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
@property(copy, nonatomic) id /* block */ willPerformActivityBlock; // @synthesize willPerformActivityBlock=_willPerformActivityBlock;
@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)accessibilityAnnounceAddOrRemovePasswordWithIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (void)performActivity;
- (id)initWithNote:(id)arg1 displayWindow:(id)arg2 willPerformActivityBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end
