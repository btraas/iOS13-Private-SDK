//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolRuntimeStructureDescription : RWIProtocolJSONObject
{
}

@property(nonatomic) BOOL isImprecise;
@property(retain, nonatomic) RWIProtocolRuntimeStructureDescription *prototypeStructure;
@property(copy, nonatomic) NSString *constructorName;
@property(copy, nonatomic) NSArray *optionalFields;
@property(copy, nonatomic) NSArray *fields;

@end

