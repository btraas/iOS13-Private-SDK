//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord;
@protocol WFCloudKitItem;

@interface WFCloudKitItemRecord : NSObject
{
    CKRecord *_record;
    id <WFCloudKitItem> _item;
}

@property(readonly, nonatomic) id <WFCloudKitItem> item; // @synthesize item=_item;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
- (id)initWithRecord:(id)arg1 item:(id)arg2;

@end
