//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSCharacterSet, NSString;

@interface SGSymbolicMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_numericMapping;
    NSString *_characterMapping;
    NSCharacterSet *_characterSet;
}

+ (id)withNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;
@property(retain) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
@property(retain) NSString *characterMapping; // @synthesize characterMapping=_characterMapping;
@property(retain) NSString *numericMapping; // @synthesize numericMapping=_numericMapping;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSymbolicMappingTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)initWithNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
