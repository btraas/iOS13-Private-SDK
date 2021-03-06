//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBColor-Protocol.h>

@class NSData, _SFPBGraphicalFloat;

@interface _SFPBColor : PBCodable <_SFPBColor, NSSecureCoding>
{
    _SFPBGraphicalFloat *_redComponent;
    _SFPBGraphicalFloat *_greenComponent;
    _SFPBGraphicalFloat *_blueComponent;
    _SFPBGraphicalFloat *_alphaComponent;
}

@property(retain, nonatomic) _SFPBGraphicalFloat *alphaComponent; // @synthesize alphaComponent=_alphaComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *blueComponent; // @synthesize blueComponent=_blueComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *greenComponent; // @synthesize greenComponent=_greenComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *redComponent; // @synthesize redComponent=_redComponent;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

@end

