//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventDiscreteDispatchingPredicate.h>

@class NSSet;

@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate
{
}

+ (id)defaultFocusPredicate;
+ (id)defaultSystemPredicate;
+ (id)new;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSSet *descriptors; // @dynamic descriptors;
@property(copy, nonatomic) NSSet *senderDescriptors; // @dynamic senderDescriptors;
@property(copy, nonatomic) NSSet *displays; // @dynamic displays;
- (id)init;

@end
