//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Espresso/ETTask.h>

@class NSArray;

@interface ETTaskClassifier : ETTask
{
    NSArray *_class_names;
}

@property NSArray *class_names; // @synthesize class_names=_class_names;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(_Bool)arg4;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;

@end
