//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSSet;

@interface PGGraphMusicSessionNode : PGGraphNode
{
}

+ (id)musicSessionDateSortDescriptors;
- (void)enumerateMusicTrackNodesUsingBlock:(id /* block */)arg1;
@property(readonly, nonatomic) NSSet *trackNodes;
@property(readonly, nonatomic) NSSet *momentNodes;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;

@end
