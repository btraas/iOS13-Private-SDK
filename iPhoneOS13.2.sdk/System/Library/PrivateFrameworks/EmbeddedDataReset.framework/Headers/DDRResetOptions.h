//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface DDRResetOptions : NSObject <NSSecureCoding>
{
    _Bool _hideProgress;
    _Bool _eraseDataPlan;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool eraseDataPlan; // @synthesize eraseDataPlan=_eraseDataPlan;
@property(nonatomic) _Bool hideProgress; // @synthesize hideProgress=_hideProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
