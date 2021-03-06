//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface TPLayoutState : NSObject <NSCopying>
{
    NSUInteger _sectionIndex;
    NSUInteger _sectionPageIndex;
    NSUInteger _documentPageIndex;
    NSUInteger _lastPageCount;
    NSArray *_sectionHints;
    NSUInteger _bodyLength;
    NSSet *_missingFonts;
}

@property(copy, nonatomic) NSSet *missingFonts; // @synthesize missingFonts=_missingFonts;
@property(nonatomic) NSUInteger bodyLength; // @synthesize bodyLength=_bodyLength;
@property(copy, nonatomic) NSArray *sectionHints; // @synthesize sectionHints=_sectionHints;
@property(nonatomic) NSUInteger lastPageCount; // @synthesize lastPageCount=_lastPageCount;
@property(nonatomic) NSUInteger documentPageIndex; // @synthesize documentPageIndex=_documentPageIndex;
@property(nonatomic) NSUInteger sectionPageIndex; // @synthesize sectionPageIndex=_sectionPageIndex;
@property(nonatomic) NSUInteger sectionIndex; // @synthesize sectionIndex=_sectionIndex;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct LayoutStateArchive )arg1 archiver:(id)arg2 context:(id)arg3;
- (id)initWithArchive:(const struct LayoutStateArchive )arg1 unarchiver:(id)arg2;
- (id)archivedLayoutStateInContext:(id)arg1;
- (BOOL)isEqualToLayoutState:(id)arg1;
- (void)reset;
- (id)init;

@end

