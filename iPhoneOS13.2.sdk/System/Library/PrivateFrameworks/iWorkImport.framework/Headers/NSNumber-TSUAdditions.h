//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <iWorkImport/TSCHChartGridValue-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class NSString;

@interface NSNumber (TSUAdditions) <TSCHChartGridValue, TSDMixing>
+ (id)numberWithCGFloat:(double)arg1;
+     // Error parsing type: @32@0:8r^{ChartsNSNumberDoubleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}d}16@24, name: tsch_optionalNumberWithArchive:unarchiver:
+     // Error parsing type: v40@0:8@16^{ChartsNSNumberDoubleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}d}24@32, name: tsch_saveOptionalNumber:toArchive:archiver:
+     // Error parsing type: @32@0:8r^{ChartsNSNumberDoubleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}d}16@24, name: tsch_instanceWithArchive:unarchiver:
+ (id)tsch_numberWithStyleProperty:(int)arg1;
+ (id)tsch_numberWithStyleInt:(int)arg1;
- (_Bool)tsu_isAlmostEqual:(id)arg1;
- (_Bool)isFloatingPointType;
@property(readonly, nonatomic) double CGFloatValue;
@property(readonly, nonatomic) int chartGridValueType;
-     // Error parsing type: @32@0:8r^{ChartsNSNumberDoubleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}d}16@24, name: tsch_initWithArchive:unarchiver:
-     // Error parsing type: v32@0:8^{ChartsNSNumberDoubleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}d}16@24, name: tsch_saveToArchive:archiver:
- (int)tsch_stylePropertyValue;
- (int)tsch_styleIntValue;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (int)tss_propertyValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
