//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection, EFResource;

@interface _EDPersistenceDatabaseConnectionWrapper : NSObject
{
    EFResource *_resource;
    EDPersistenceDatabaseConnection *_connection;
    NSUInteger _generation;
    NSUInteger _type;
}

@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUInteger generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) EFResource *resource; // @synthesize resource=_resource;
// - (void).cxx_destruct;
- (id)initWithConnection:(id)arg1 generation:(NSUInteger)arg2;

@end

