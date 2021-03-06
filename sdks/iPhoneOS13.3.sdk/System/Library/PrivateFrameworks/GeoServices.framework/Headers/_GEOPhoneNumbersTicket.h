//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket
{
    NSArray *_phoneNumbers;
    BOOL _allowCellularDataForLookup;
}

// - (void).cxx_destruct;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* CDUnknownBlockType */)arg4;
- (id)description;
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3;

@end

