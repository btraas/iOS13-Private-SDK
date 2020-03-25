//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface FMDLostModeInfo : NSObject <NSSecureCoding>
{
    BOOL _lostModeEnabled;
    BOOL _disableSlideToUnlock;
    BOOL _facetimeCapable;
    NSString *_message;
    NSString *_phoneNumber;
    NSUInteger _lostModeType;
    NSString *_footnoteText;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *footnoteText; // @synthesize footnoteText=_footnoteText;
@property(nonatomic) BOOL facetimeCapable; // @synthesize facetimeCapable=_facetimeCapable;
@property(nonatomic) BOOL disableSlideToUnlock; // @synthesize disableSlideToUnlock=_disableSlideToUnlock;
@property(nonatomic) NSUInteger lostModeType; // @synthesize lostModeType=_lostModeType;
@property(nonatomic) BOOL lostModeEnabled; // @synthesize lostModeEnabled=_lostModeEnabled;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
