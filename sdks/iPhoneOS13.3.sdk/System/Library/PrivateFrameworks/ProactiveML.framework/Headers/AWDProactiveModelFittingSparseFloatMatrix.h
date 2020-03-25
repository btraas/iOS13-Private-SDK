//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDProactiveModelFittingSparseFloatMatrix : PBCodable <NSCopying>
{
    CDStruct_62a50c50 _columnIndices;
    CDStruct_62a50c50 _rowIndices;
    CDStruct_fae3dc92 _values;
    NSUInteger _columnLength;
    NSUInteger _rowLength;
    struct {
        unsigned int columnLength:1;
        unsigned int rowLength:1;
    } _has;
}

+ (id)sparseFloatMatrixFromSparseMatrix:(id)arg1;
+ (id)sparseFloatMatrixFromDenseMatrix:(id)arg1;
@property(nonatomic) NSUInteger rowLength; // @synthesize rowLength=_rowLength;
@property(nonatomic) NSUInteger columnLength; // @synthesize columnLength=_columnLength;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setValues:(float )arg1 count:(NSUInteger)arg2;
- (float)valuesAtIndex:(NSUInteger)arg1;
- (void)addValues:(float)arg1;
- (void)clearValues;
@property(readonly, nonatomic) float values;
@property(readonly, nonatomic) NSUInteger valuesCount;
@property(nonatomic) BOOL hasRowLength;
- (void)setRowIndices:(NSUInteger )arg1 count:(NSUInteger)arg2;
- (NSUInteger)rowIndicesAtIndex:(NSUInteger)arg1;
- (void)addRowIndices:(NSUInteger)arg1;
- (void)clearRowIndices;
@property(readonly, nonatomic) NSUInteger rowIndices;
@property(readonly, nonatomic) NSUInteger rowIndicesCount;
@property(nonatomic) BOOL hasColumnLength;
- (void)setColumnIndices:(NSUInteger )arg1 count:(NSUInteger)arg2;
- (NSUInteger)columnIndicesAtIndex:(NSUInteger)arg1;
- (void)addColumnIndices:(NSUInteger)arg1;
- (void)clearColumnIndices;
@property(readonly, nonatomic) NSUInteger columnIndices;
@property(readonly, nonatomic) NSUInteger columnIndicesCount;
- (void)dealloc;
- (float)valueAtRow:(NSUInteger)arg1 column:(NSUInteger)arg2;

@end
