//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDDrawableInfo.h>

@class EQKitEquation;

@interface TSWPEquationInfo : TSDDrawableInfo
{
    EQKitEquation *_equation;
}

@property(retain, nonatomic) EQKitEquation *equation; // @synthesize equation=_equation;
- (Class)repClass;
- (Class)layoutClass;
- (void)dealloc;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 mathMLNode:(struct _xmlNode )arg2 fromXMLDoc:(struct _xmlDoc )arg3;

@end

