//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexSet, NSSet, NSString;
@protocol _UICollectionLayoutAuxillaryOffsets;

@protocol _UICollectionLayoutAuxillaryOffsets <NSObject>
@property(readonly, nonatomic) NSSet *elementKinds;
- (BOOL)containsIndex:(long long)arg1 forElementKind:(NSString *)arg2;
- (BOOL)overlapsOffsets:(id <_UICollectionLayoutAuxillaryOffsets>)arg1;
- (long long)offsetForElementKind:(NSString *)arg1;
- (NSIndexSet *)indexesForElementKind:(NSString *)arg1;
- (NSRange *)rangeForElementKind:(NSString *)arg1;
- (id)offsetsByRebasingOnOffsets:(id <_UICollectionLayoutAuxillaryOffsets>)arg1;
- (id)offsetsByApplyingOffsets:(id <_UICollectionLayoutAuxillaryOffsets>)arg1;
@end
