//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@interface SFSearchViewAppearFeedback : SFFeedback
{
    BOOL _isOnLockScreen;
    BOOL _isOverApp;
    BOOL _readerTextAvailable;
    NSUInteger _viewAppearEvent;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property(nonatomic) BOOL isOverApp; // @synthesize isOverApp=_isOverApp;
@property(nonatomic) BOOL isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property(nonatomic) NSUInteger viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(NSUInteger)arg1;

@end

