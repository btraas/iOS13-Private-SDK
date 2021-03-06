//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ISVitalitySettings;

__attribute__((visibility("hidden")))
@interface ISLivePhotoVitalityFilter : NSObject
{
    BOOL _isPerformingInputChanges;
    BOOL __shouldUpdateOutput;
    id <ISVitalitySettings> _settings;
    long long _state;
    id /* CDUnknownBlockType */ _outputChangeHandler;
}

@property(nonatomic, setter=_setShouldUpdateOutput:) BOOL _shouldUpdateOutput; // @synthesize _shouldUpdateOutput=__shouldUpdateOutput;
@property(nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges; // @synthesize isPerformingInputChanges=_isPerformingInputChanges;
@property(copy, nonatomic) id /* CDUnknownBlockType */ outputChangeHandler; // @synthesize outputChangeHandler=_outputChangeHandler;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) id <ISVitalitySettings> settings; // @synthesize settings=_settings;
// - (void).cxx_destruct;
- (void)updateOutput;
- (void)invalidateOutput;
- (void)performInputChanges:(id /* CDUnknownBlockType */)arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

