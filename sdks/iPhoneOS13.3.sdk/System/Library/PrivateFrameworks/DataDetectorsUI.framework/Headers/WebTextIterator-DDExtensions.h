//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WebTextIterator.h>

@interface WebTextIterator (DDExtensions)
+ (id)dd_iteratorForDocument:(id)arg1;
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery )arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(BOOL )arg5 relevantResults:(id )arg6 URLificationBlock:(id /* CDUnknownBlockType */)arg7;
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery )arg1 forResults:(id)arg2;
- (struct __DDScanQuery )dd_newQueryStopRange:(id )arg1;
- (BOOL)dd_checkCurrentRangeAgainstString:(struct __CFString )arg1;
@end
