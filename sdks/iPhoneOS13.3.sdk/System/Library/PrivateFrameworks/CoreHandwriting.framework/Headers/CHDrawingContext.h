//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHClassifiableDrawing;

@interface CHDrawingContext : NSObject
{
    NSUInteger _edgeIndex;
    long long _numberOfSubstrokes;
    long long _numberOfSegments;
    CHClassifiableDrawing *_classifiableDrawing;
    set_54c7c768 _strokeGroup;
    vector_afed86a5 _delayedSegmentIDs;
}

@property(readonly, nonatomic) vector_afed86a5 delayedSegmentIDs; // @synthesize delayedSegmentIDs=_delayedSegmentIDs;
@property(readonly, nonatomic) set_54c7c768 strokeGroup; // @synthesize strokeGroup=_strokeGroup;
@property(readonly, retain, nonatomic) CHClassifiableDrawing *classifiableDrawing; // @synthesize classifiableDrawing=_classifiableDrawing;
@property(readonly, nonatomic) long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(readonly, nonatomic) long long numberOfSubstrokes; // @synthesize numberOfSubstrokes=_numberOfSubstrokes;
@property(readonly, nonatomic) NSUInteger edgeIndex; // @synthesize edgeIndex=_edgeIndex;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEdgeIndex:(NSUInteger)arg1 numberOfSubstrokes:(long long)arg2 numberOfSegments:(long long)arg3 classifiableDrawing:(id)arg4 strokeGroup:(set_54c7c768)arg5 delayedSegmentIDs:(vector_afed86a5)arg6;

@end
