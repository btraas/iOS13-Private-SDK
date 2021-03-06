//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUInputStream-Protocol.h>

@class SFUCryptor;
@protocol SFUInputStream;

@interface SFUCryptoInputStream : NSObject <SFUInputStream>
{
    id <SFUInputStream> mBaseStream;
    SFUCryptor *mCryptor;
    long long mOffset;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;

@end

