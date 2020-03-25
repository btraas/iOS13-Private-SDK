//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HDDemoDataGenerator;

@interface HDDemoDataBaseSampleGenerator : NSObject <NSSecureCoding>
{
    BOOL _createdFromNSKeyedUnarchiver;
    HDDemoDataGenerator *_demoDataGenerator;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL createdFromNSKeyedUnarchiver; // @synthesize createdFromNSKeyedUnarchiver=_createdFromNSKeyedUnarchiver;
@property(nonatomic) __weak HDDemoDataGenerator *demoDataGenerator; // @synthesize demoDataGenerator=_demoDataGenerator;
// - (void).cxx_destruct;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_createdFromNSKeyedUnarchiver;
- (id)init;

@end
