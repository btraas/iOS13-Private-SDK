//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogSmokeFaceView : NTKAnalogVideoFaceView
{
    BOOL _shouldApplyTransform;
    NSUInteger _currentSmokeColor;
    NSUInteger _currentDialShape;
    NSDictionary *_dataSources;
}

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_nameForSmokeColor:(NSUInteger)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
@property(retain, nonatomic) NSDictionary *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) NSUInteger currentDialShape; // @synthesize currentDialShape=_currentDialShape;
@property(nonatomic) NSUInteger currentSmokeColor; // @synthesize currentSmokeColor=_currentSmokeColor;
// - (void).cxx_destruct;
- (id)_swatchImageForSmokeColor:(NSUInteger)arg1 andDialShape:(NSUInteger)arg2;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (BOOL)_wantsConstantSpeedZoom;
- (void)reloadDataSources;
- (void)setupDataSources;
- (void)_updateDialSize;
- (void)_applyVideoPlayerTransform;
- (id)imageForEditOption:(id)arg1;
- (id)_complicationsCompanionForegroundColor;
- (void)_customizeVideoPlayerOnSetup;
- (void)_handleEitherScreenWake;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureTimeView:(id)arg1;

@end

