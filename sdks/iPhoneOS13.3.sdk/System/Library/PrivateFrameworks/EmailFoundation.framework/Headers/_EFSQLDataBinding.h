//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFSQLBinding.h>

@class NSData;

@interface _EFSQLDataBinding : EFSQLBinding
{
    NSData *_dataValue;
}

@property(readonly, copy, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
// - (void).cxx_destruct;
- (void)bindTo:(struct sqlite3_stmt )arg1 withSQLIndex:(int)arg2;
- (id)initWithData:(id)arg1;

@end

