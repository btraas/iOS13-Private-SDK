//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMenuDataSource : NSObject
{
    NSArray *_mainMenuItems;
    NSArray *_genreMenuItems;
}

@property(retain, nonatomic) NSArray *genreMenuItems; // @synthesize genreMenuItems=_genreMenuItems;
@property(retain, nonatomic) NSArray *mainMenuItems; // @synthesize mainMenuItems=_mainMenuItems;
// - (void).cxx_destruct;
- (id)initWithMainMenuItems:(id)arg1 genreMenuItems:(id)arg2;

@end

