//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKComponent.h>

@interface WFAdaptiveLayoutComponent : CKComponent
{
    vector_e48f0605 _children;
}

+ (id)newWithChildren:(const vector_e48f0605 *)arg1 size:(const struct CKComponentSize *)arg2;
- (id).cxx_construct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
