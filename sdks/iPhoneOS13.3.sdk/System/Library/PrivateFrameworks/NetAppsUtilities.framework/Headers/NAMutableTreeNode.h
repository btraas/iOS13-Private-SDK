//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetAppsUtilities/NATreeNode.h>

@class NSSet;

@interface NAMutableTreeNode : NATreeNode
{
}

- (void)removeChildrenPassingTest:(id /* CDUnknownBlockType */)arg1;
- (void)removeChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
@property(copy, nonatomic) NSSet *childNodes; // @dynamic childNodes;

@end

