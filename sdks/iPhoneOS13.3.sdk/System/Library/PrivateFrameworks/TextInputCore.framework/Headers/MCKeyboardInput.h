//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray;

@interface MCKeyboardInput : NSObject <NSCopying>
{
    NSMutableArray *_mutableInputs;
    NSUInteger _composingInputIndex;
}

@property(nonatomic) NSUInteger composingInputIndex; // @synthesize composingInputIndex=_composingInputIndex;
// - (void).cxx_destruct;
- (BOOL)hasKindOf:(Class)arg1;
- (void)insertInput:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)replaceComposingInputWith:(id)arg1;
- (void)replaceInputAtIndex:(NSUInteger)arg1 with:(id)arg2;
- (void)removeInputAtIndex:(NSUInteger)arg1;
- (void)removeComposingInput;
- (void)removeAllInputs;
- (void)composeNew:(id)arg1;
- (BOOL)canComposeNew:(id)arg1;
@property(retain, nonatomic) MCKeyboardInput *composingInput;
@property(readonly, nonatomic) NSArray *inputs;
@property(readonly, nonatomic) NSMutableArray *mutableInputs; // @synthesize mutableInputs=_mutableInputs;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (BOOL)hasDrawInput;
- (id)_asInputStringWithCursorIndex:(NSUInteger )arg1 remainingComposingInputIndex:(NSUInteger )arg2 typeInputs:(id)arg3 forSearch:(BOOL)arg4 suffix:(id)arg5;
- (void)_addNearbyKeys:(id)arg1 to:(void )arg2;
- (id)asMecabraGestures:(BOOL )arg1;
- (id)asSearchString;
- (BOOL)hasRemainingComposingInput;
- (NSUInteger)asInlineTextCursorIndex;
- (id)asCommittedText;
- (id)asInlineText;

@end
