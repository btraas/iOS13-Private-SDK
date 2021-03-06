//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString, UIFontDescriptor;

@interface _UIFontDescriptorCacheKey : _UIFontCacheKey
{
    BOOL _textLegibility;
    UIFontDescriptor *_fontDescriptor;
    double _pointSize;
    NSString *_textStyleForScaling;
    double _pointSizeForScaling;
    double _maximumPointSizeAfterScaling;
}

@property(nonatomic) BOOL textLegibility; // @synthesize textLegibility=_textLegibility;
@property(nonatomic) double maximumPointSizeAfterScaling; // @synthesize maximumPointSizeAfterScaling=_maximumPointSizeAfterScaling;
@property(nonatomic) double pointSizeForScaling; // @synthesize pointSizeForScaling=_pointSizeForScaling;
@property(copy, nonatomic) NSString *textStyleForScaling; // @synthesize textStyleForScaling=_textStyleForScaling;
@property(nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
@property(copy, nonatomic) UIFontDescriptor *fontDescriptor; // @synthesize fontDescriptor=_fontDescriptor;
- (id)description;
- (BOOL)_isEqualToKey:(id)arg1;
- (NSUInteger)_hash;
- (void)dealloc;

@end

