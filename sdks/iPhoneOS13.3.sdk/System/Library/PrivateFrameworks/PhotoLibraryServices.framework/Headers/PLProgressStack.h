//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject
{
    BOOL notifyUsingAssetsdNotificationCenter;
    float currentMultiplier;
    float currentTotal;
    id delegate;
    NSMutableArray *multipliers;
    NSString *mediaPathString;
}

+ (id)unarchiveFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *mediaPathString; // @synthesize mediaPathString;
@property(nonatomic) BOOL notifyUsingAssetsdNotificationCenter; // @synthesize notifyUsingAssetsdNotificationCenter;
@property(nonatomic) float currentTotal; // @synthesize currentTotal;
@property(retain, nonatomic) NSMutableArray *multipliers; // @synthesize multipliers;
@property(nonatomic) float currentMultiplier; // @synthesize currentMultiplier;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
// - (void).cxx_destruct;
- (id)archiveToDictionary;
- (void)setCurrentMediaPath:(id)arg1;
- (void)popAndUpdate;
- (void)updateProgress:(float)arg1;
- (float)totalProgress:(float)arg1;
- (void)pop;
- (void)push:(float)arg1;
- (id)initWithDelegate:(id)arg1;

@end
