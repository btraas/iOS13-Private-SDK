//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface BMRule : NSObject
{
    NSSet _antecedent;
    NSSet _consequent;
    double _support;
    double _confidence;
}

@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) double support; // @synthesize support=_support;
@property(retain, nonatomic) NSSet *consequent; // @synthesize consequent=_consequent;
@property(retain, nonatomic) NSSet *antecedent; // @synthesize antecedent=_antecedent;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithAntecedent:(NSSet )arg1 consequent:(NSSet )arg2 support:(double)arg3 confidence:(double)arg4;

@end

