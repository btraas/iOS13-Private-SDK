//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AceObject, NSUUID, UIViewController;
@protocol SiriUIViewController;

@interface SiriUITranscriptItem : NSObject
{
    BOOL _restored;
    BOOL _shouldBeExposed;
    BOOL _snippetViewControllerHasBeenUnloaded;
    NSUUID *_itemIdentifier;
    UIViewController<SiriUIViewController> *_viewController;
    AceObject *_aceObject;
    CGRect _previousFrame;
}

+ (id)transcriptItemWithAceObject:(id)arg1;
@property(nonatomic) CGRect previousFrame; // @synthesize previousFrame=_previousFrame;
@property(nonatomic) BOOL snippetViewControllerHasBeenUnloaded; // @synthesize snippetViewControllerHasBeenUnloaded=_snippetViewControllerHasBeenUnloaded;
@property(nonatomic) BOOL shouldBeExposed; // @synthesize shouldBeExposed=_shouldBeExposed;
@property(nonatomic, getter=isRestored) BOOL restored; // @synthesize restored=_restored;
@property(retain, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(retain, nonatomic) UIViewController<SiriUIViewController> *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSUUID *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithAceObject:(id)arg1;

@end

