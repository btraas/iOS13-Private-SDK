//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUDevice-Protocol.h>

@class NSString, NURenderer;
@protocol MTLDevice, NURenderer, OS_dispatch_queue;

@interface NUDevice : NSObject <NUDevice>
{
    NURenderer *_renderer;
    NURenderer *_lowPriorityRenderer;
    NSObject<OS_dispatch_queue> *_queue;
    long long _defaultSampleMode;
    NSString *_name;
    NSString *_model;
    id <MTLDevice> _metalDevice;
}

@property(readonly, nonatomic) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
@property(readonly, nonatomic) id <NURenderer> lowPriorityRenderer; // @synthesize lowPriorityRenderer=_lowPriorityRenderer;
@property(readonly, nonatomic) id <NURenderer> renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)clearCaches;
- (id)_newLowPriorityRenderer:(out id *)arg1;
- (id)_lowPriorityRenderer:(out id *)arg1;
- (id)lowPriorityRenderer:(out id *)arg1;
- (id)_newRenderer:(out id *)arg1;
- (_Bool)shouldLogRendererUsed;
- (id)_renderer:(out id *)arg1;
- (id)renderer:(out id *)arg1;
@property(readonly, nonatomic) _Bool shouldRenderUsingOpenGL;
@property(readonly, nonatomic) _Bool shouldRenderUsingMetal;
- (long long)_preferredSampleMode;
- (long long)_computeDefaultSampleMode;
- (long long)_defaultSampleMode;
@property(readonly, nonatomic) long long defaultSampleMode;
- (long long)_openGLVirtualScreen;
@property(readonly, nonatomic) long long openGLVirtualScreen;
@property(readonly, nonatomic) _Bool hasOpenGLSupport;
@property(readonly, nonatomic) unsigned long long family;
@property(readonly, nonatomic) _Bool hasMetalSupport;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 model:(id)arg2 metalDevice:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
