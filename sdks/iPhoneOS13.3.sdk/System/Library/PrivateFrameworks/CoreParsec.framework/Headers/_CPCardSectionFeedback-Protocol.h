//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback;

@protocol _CPCardSectionFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *resultId;
@property(copy, nonatomic) NSString *cardSectionId;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection;
@property(nonatomic) NSUInteger timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

