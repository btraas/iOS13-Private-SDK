//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBTriggeredAutomationEvent : PBCodable <NSCopying>
{
    NSString *_key;
    NSString *_triggerType;
    _Bool _requiredRuntimeConfirmation;
    struct {
        unsigned int requiredRuntimeConfirmation:1;
    } _has;
}

@property(nonatomic) _Bool requiredRuntimeConfirmation; // @synthesize requiredRuntimeConfirmation=_requiredRuntimeConfirmation;
@property(retain, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRequiredRuntimeConfirmation;
@property(readonly, nonatomic) _Bool hasTriggerType;
@property(readonly, nonatomic) _Bool hasKey;

@end
