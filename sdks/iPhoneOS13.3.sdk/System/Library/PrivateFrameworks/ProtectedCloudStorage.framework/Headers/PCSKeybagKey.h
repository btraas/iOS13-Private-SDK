//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface PCSKeybagKey : NSObject <NSSecureCoding>
{
    NSData *_data;
    long long _flags;
}

+ (BOOL)supportsSecureCoding;
@property long long flags; // @synthesize flags=_flags;
@property(retain) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
