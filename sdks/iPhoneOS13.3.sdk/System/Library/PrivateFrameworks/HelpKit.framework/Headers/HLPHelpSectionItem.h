//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/HLPHelpItem.h>

@class NSArray;

@interface HLPHelpSectionItem : HLPHelpItem
{
    BOOL _open;
    NSArray *_children;
}

@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
// - (void).cxx_destruct;
- (id)debugDescription;

@end

