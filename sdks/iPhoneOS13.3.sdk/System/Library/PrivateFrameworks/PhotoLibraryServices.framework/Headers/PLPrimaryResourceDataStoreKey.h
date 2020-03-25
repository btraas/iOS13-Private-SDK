//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLTaggedPointerDataStoreKey-Protocol.h>

@interface PLPrimaryResourceDataStoreKey : NSObject <PLTaggedPointerDataStoreKey>
{
}

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)strategyFromExternalResource:(id)arg1 asset:(id)arg2;
+ (id)fileURLForPayloadKeyData:(NSUInteger)arg1 assetID:(id)arg2;
- (id)descriptionForAssetID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKey:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)_initWithKeyStruct:(const void )arg1;
- (id)_init;
- (id)uniformTypeIdentifier;
- (id)fileURLForAssetID:(id)arg1;
- (id)keyData;
- (id)initWithKeyStruct:(const void )arg1;

@end
