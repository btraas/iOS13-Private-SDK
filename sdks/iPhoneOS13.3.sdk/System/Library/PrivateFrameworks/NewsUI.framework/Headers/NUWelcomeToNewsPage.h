//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUPage-Protocol.h>

@class NSString, NUPageStyle, NUWelcomeToNewsViewController;
@protocol NURouter;

@interface NUWelcomeToNewsPage : NSObject <NUPage>
{
    id <NURouter> _router;
    NUWelcomeToNewsViewController *_welcomeToNewsViewController;
    NSUInteger _pageNextAction;
    NUPageStyle *_pageStyle;
}

@property(retain, nonatomic) NUPageStyle *pageStyle; // @synthesize pageStyle=_pageStyle;
@property(nonatomic) NSUInteger pageNextAction; // @synthesize pageNextAction=_pageNextAction;
@property(retain, nonatomic) NUWelcomeToNewsViewController *welcomeToNewsViewController; // @synthesize welcomeToNewsViewController=_welcomeToNewsViewController;
@property(readonly, nonatomic) id <NURouter> router; // @synthesize router=_router;
// - (void).cxx_destruct;
- (void)pageStyling:(id /* CDUnknownBlockType */)arg1;
- (void)activityProvider:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) BOOL allowNeighboringAdvertising;
- (void)unprepare;
- (void)prepare;
- (id)viewController;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithRouter:(id)arg1;

@end
