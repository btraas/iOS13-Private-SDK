//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement
{
    MSVLyricsLine *_parentLine;
    MSVLyricsWord *_nextWord;
}

@property(retain, nonatomic) MSVLyricsWord *nextWord; // @synthesize nextWord=_nextWord;
@property(retain, nonatomic) MSVLyricsLine *parentLine; // @synthesize parentLine=_parentLine;
// - (void).cxx_destruct;
- (id)init;

@end
