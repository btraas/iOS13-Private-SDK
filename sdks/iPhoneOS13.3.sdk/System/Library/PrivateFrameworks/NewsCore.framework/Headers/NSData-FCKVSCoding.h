//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

#import <NewsCore/FCKeyValueStoreCoding-Protocol.h>

@interface NSData (FCKVSCoding) <FCKeyValueStoreCoding>
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
+ (id)fc_randomDataWithLength:(NSUInteger)arg1;
- (void)writeToKeyValuePair:(id)arg1;
- (BOOL)fc_anefKeyIsValid:(id)arg1;
- (id)fc_anefDecryptWithKey:(id)arg1;
- (id)fc_anefEncryptWithKey:(id)arg1;
- (id)fc_URLSafeBase64EncodedStringWithOptions:(NSUInteger)arg1;
- (id)fc_sha256;
- (id)fc_decryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_encryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_gzipDeflate;
- (id)fc_gzipInflate;
- (id)fc_zlibDeflate;
- (id)fc_zlibInflate;
@end

