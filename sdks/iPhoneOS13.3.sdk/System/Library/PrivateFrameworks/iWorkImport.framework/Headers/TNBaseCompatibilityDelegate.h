//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSKCompatibilityDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface TNBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>
{
}

- (id)backwardsCompatibleTypeForType:(id)arg1;
- (id)nestedDocumentFilename;
- (id)needNewerVersionIndexXmlContentString;
- (id)indexXmlFilename;
- (BOOL)isTextOnlyType:(id)arg1;
- (BOOL)isSageDocumentType:(id)arg1;
- (BOOL)isTCMessageExceptionErrorDomain:(id)arg1;
- (id)exportableTypes;
- (Class)exportOptionsControllerClass;
- (Class)exporterClassForType:(id)arg1 options:(id)arg2;
- (Class)importerClassForType:(id)arg1 path:(id)arg2;
- (id)newExportableDocumentTypesForFlag:(NSUInteger)arg1;

@end

