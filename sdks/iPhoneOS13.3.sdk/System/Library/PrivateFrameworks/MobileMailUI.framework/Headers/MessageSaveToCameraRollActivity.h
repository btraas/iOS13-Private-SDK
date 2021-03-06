//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISaveToCameraRollActivity.h>

@protocol ContentRepresentationHandlingDelegate;

@interface MessageSaveToCameraRollActivity : UISaveToCameraRollActivity
{
    id <ContentRepresentationHandlingDelegate> _delegate;
    long long _context;
}

@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <ContentRepresentationHandlingDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)arg1;
- (void)_prepareWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityType;
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2;
- (id)init;

@end

