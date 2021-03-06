//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSError, NSString;

@interface VCVoiceShortcutPhraseValidationResult : NSObject <NSSecureCoding>
{
    NSString *_phrase;
    long long _validationState;
    NSError *_validationError;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSError *validationError; // @synthesize validationError=_validationError;
@property(nonatomic) long long validationState; // @synthesize validationState=_validationState;
@property(readonly, copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrase:(id)arg1 validationState:(long long)arg2 validationError:(id)arg3;

@end

