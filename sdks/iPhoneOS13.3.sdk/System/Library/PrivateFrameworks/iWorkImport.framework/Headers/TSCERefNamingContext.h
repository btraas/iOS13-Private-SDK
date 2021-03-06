//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface TSCERefNamingContext : NSObject <NSCopying>
{
    BOOL _suppressIdenticalEndReference;
    BOOL _useSymbolicNames;
    BOOL _allowTableName;
    BOOL _allowSpanningColumnReferenceBodyQualifier;
    BOOL _quoteComponents;
    BOOL _forceEscaping;
    BOOL _forFormulaPlainText;
    BOOL _usedSymbolicName;
    NSString *_contextSheetName;
    UUIDData_5fbc143e _hostTableUID;
}

@property(nonatomic) BOOL usedSymbolicName; // @synthesize usedSymbolicName=_usedSymbolicName;
@property(nonatomic) BOOL forFormulaPlainText; // @synthesize forFormulaPlainText=_forFormulaPlainText;
@property(nonatomic) BOOL forceEscaping; // @synthesize forceEscaping=_forceEscaping;
@property(nonatomic) BOOL quoteComponents; // @synthesize quoteComponents=_quoteComponents;
@property(nonatomic) BOOL allowSpanningColumnReferenceBodyQualifier; // @synthesize allowSpanningColumnReferenceBodyQualifier=_allowSpanningColumnReferenceBodyQualifier;
@property(nonatomic) BOOL allowTableName; // @synthesize allowTableName=_allowTableName;
@property(nonatomic) BOOL useSymbolicNames; // @synthesize useSymbolicNames=_useSymbolicNames;
@property(nonatomic) BOOL suppressIdenticalEndReference; // @synthesize suppressIdenticalEndReference=_suppressIdenticalEndReference;
@property(nonatomic) UUIDData_5fbc143e hostTableUID; // @synthesize hostTableUID=_hostTableUID;
@property(retain, nonatomic) NSString *contextSheetName; // @synthesize contextSheetName=_contextSheetName;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)reset;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

