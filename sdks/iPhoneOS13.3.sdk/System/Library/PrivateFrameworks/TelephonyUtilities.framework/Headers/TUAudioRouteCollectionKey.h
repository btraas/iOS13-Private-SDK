//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying>
{
    NSString *_category;
    NSString *_mode;
}

@property(readonly, copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToAudioRouteCollectionKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCategory:(id)arg1 mode:(id)arg2;

@end

