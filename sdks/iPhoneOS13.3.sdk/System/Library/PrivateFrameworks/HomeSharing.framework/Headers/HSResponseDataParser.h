//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HSResponseDataParser : NSObject
{
}

+ (id)_parseListingItemWithBytes:(const char )arg1 length:(unsigned int)arg2 usingHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)_parseErrorResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parsePlayStatusResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseItemIDArrayWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseBrowseListingWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseListingCollectionWithBytes:(const char )arg1 length:(NSUInteger)arg2 usingHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)_parseItemsResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2 usingHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)_parseUpdateTypeWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseEditCommandResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseDictionaryCollectionWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseDeletedIDListingWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseControlPromptResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseControlInterfacesResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseCloudLyricsInfoResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseBulkCloudLyricsInfoResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseUpdateResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseLoginResponseWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)_parseResponseCode:(unsigned int)arg1 bytes:(const char )arg2 length:(NSUInteger)arg3 usingHandler:(id /* CDUnknownBlockType */)arg4;
+ (NSUInteger)_parseItemPropertyCountWithBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (void)enumerateDeletedItemsInResponseData:(id)arg1 usingHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)enumerateItemsInResponseData:(id)arg1 usingHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)parseItemWithBytes:(const char )arg1 length:(NSUInteger)arg2 usingHandler:(id /* CDUnknownBlockType */)arg3;
+ (NSUInteger)parseItemWithBytes:(const char )arg1 length:(NSUInteger)arg2 valuesOut:(CDStruct_557df7f8 )arg3 valuesCapacity:(NSUInteger)arg4;
+ (id)enumerateRawItemsInResponseData:(id)arg1 usingHandler:(id /* CDUnknownBlockType */)arg2;
+ (id)parseResponseData:(id)arg1;
+ (id)parseErrorInResponseData:(id)arg1;

@end

