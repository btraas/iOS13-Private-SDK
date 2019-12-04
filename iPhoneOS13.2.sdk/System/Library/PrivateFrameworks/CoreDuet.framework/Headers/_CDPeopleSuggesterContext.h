//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSSet, NSString, _CDInteraction;

@interface _CDPeopleSuggesterContext : NSObject <NSCopying>
{
    NSDate *_date;
    NSString *_locationUUID;
    NSString *_title;
    NSString *_contactPrefix;
    NSSet *_seedContactIdentifiers;
    NSSet *_nearbyPeople;
    NSString *_consumerIdentifier;
    NSSet *_contentUTIs;
    _CDInteraction *_activeInteraction;
}

+ (id)currentContext;
@property(retain) _CDInteraction *activeInteraction; // @synthesize activeInteraction=_activeInteraction;
@property(retain) NSSet *contentUTIs; // @synthesize contentUTIs=_contentUTIs;
@property(retain) NSString *consumerIdentifier; // @synthesize consumerIdentifier=_consumerIdentifier;
@property(retain) NSSet *nearbyPeople; // @synthesize nearbyPeople=_nearbyPeople;
@property(retain) NSSet *seedContactIdentifiers; // @synthesize seedContactIdentifiers=_seedContactIdentifiers;
@property(retain) NSString *contactPrefix; // @synthesize contactPrefix=_contactPrefix;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *locationUUID; // @synthesize locationUUID=_locationUUID;
@property(retain) NSDate *date; // @synthesize date=_date;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
