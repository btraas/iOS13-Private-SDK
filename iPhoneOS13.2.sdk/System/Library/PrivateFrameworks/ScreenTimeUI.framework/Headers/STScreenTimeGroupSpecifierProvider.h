//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
{
    PSSpecifier *_usageSummarySpecifier;
    PSSpecifier *_seeAllActivitySpecifier;
}

@property(readonly) PSSpecifier *seeAllActivitySpecifier; // @synthesize seeAllActivitySpecifier=_seeAllActivitySpecifier;
@property(readonly) PSSpecifier *usageSummarySpecifier; // @synthesize usageSummarySpecifier=_usageSummarySpecifier;
- (void)_showUsageDetailListController:(id)arg1;
- (id)_usageDetailsCoordinator:(id)arg1;
- (void)_refreshingDidChange:(_Bool)arg1;
- (void)_isSharingUsageDataDidChange:(_Bool)arg1;
- (void)_displayNameDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_usageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end
