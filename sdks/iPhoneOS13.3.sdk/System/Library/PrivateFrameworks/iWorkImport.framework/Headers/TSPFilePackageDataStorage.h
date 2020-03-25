//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPStreamDataStorage.h>

@class NSString, TSPFilePackage;
@protocol TSPCryptoInfo;

__attribute__((visibility("hidden")))
@interface TSPFilePackageDataStorage : TSPStreamDataStorage
{
    NSString *_path;
    id <TSPCryptoInfo> _decryptionInfo;
    TSPFilePackage *_package;
    NSUInteger _encodedLength;
    unsigned int _CRC;
    struct {
        unsigned int didCalculateIsReadable:1;
        unsigned int didCalculateEncodedLength:1;
        unsigned int didCalculateCRC:1;
        unsigned int isReadable:1;
        unsigned int isMissingData:1;
    } _flags;
}

// - (void).cxx_destruct;
- (BOOL)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(BOOL)arg3;
- (BOOL)isInPackage:(id)arg1;
- (unsigned int)CRC;
- (NSUInteger)encodedLength;
- (NSUInteger)length;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo )arg3 preferredFilename:(id)arg4 error:(id )arg5;
- (id)streamReadChannel;
- (void)performIOChannelReadWithAccessor:(id /* CDUnknownBlockType */)arg1;
- (void)setIsMissingData:(BOOL)arg1;
- (BOOL)isMissingData;
- (BOOL)isReadable;
- (void)resetFlags;
- (id)decryptionInfo;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)didInitializeFromDocumentURL:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3;

@end
