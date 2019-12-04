//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class CPLScopedIdentifier, NSData, NSDate, NSString;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_uploadIdentifier;
    _Bool _shouldNotTrustCloudCache;
    _Bool _shouldFilterDefaultValuesForNewProperties;
    _Bool _isSparseFullChange;
    _Bool _shouldOnlyUploadNewResources;
    _Bool _didCacheRealResourceSizeInStorage;
    unsigned long long _cachedRealResourceSizeInStorage;
    _Bool _inTrash;
    _Bool _inExpunged;
    _Bool _serverRecordIsCorrupted;
    CPLScopedIdentifier *_scopedIdentifier;
    NSDate *_recordModificationDate;
    unsigned long long _changeType;
    NSDate *_dateDeleted;
    CPLScopedIdentifier *_resourceCopyFromScopedIdentifier;
    NSString *_realIdentifier;
    NSData *_recordChangeData;
}

+ (id)newDeleteChangeWithIdentifier:(id)arg1;
+ (id)newRecordWithIdentifier:(id)arg1;
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
+ (id /* block */)copyPropertyBlockForDirection:(unsigned long long)arg1;
+ (id /* block */)equalityBlockForDirection:(unsigned long long)arg1;
+ (id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(_Bool)arg2 onlyUploadNewResources:(_Bool)arg3;
+ (id)descriptionForChangeType:(unsigned long long)arg1;
+ (long long)maxInlineDataSize;
+ (id)newChangeWithType:(unsigned long long)arg1;
+ (id)newDeleteChangeWithScopedIdentifier:(id)arg1;
+ (id)newChangeWithScopedIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
+ (id)newRecordWithScopedIdentifier:(id)arg1;
+ (id)newRecordInScopeWithIdentifier:(id)arg1;
+ (id)newRecord;
+ (id)descriptionForDirection:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
@property(nonatomic) _Bool serverRecordIsCorrupted; // @synthesize serverRecordIsCorrupted=_serverRecordIsCorrupted;
@property(copy, nonatomic) NSData *recordChangeData; // @synthesize recordChangeData=_recordChangeData;
@property(copy, nonatomic) NSString *realIdentifier; // @synthesize realIdentifier=_realIdentifier;
@property(nonatomic) _Bool inExpunged; // @synthesize inExpunged=_inExpunged;
@property(nonatomic) _Bool inTrash; // @synthesize inTrash=_inTrash;
@property(copy, nonatomic) CPLScopedIdentifier *resourceCopyFromScopedIdentifier; // @synthesize resourceCopyFromScopedIdentifier=_resourceCopyFromScopedIdentifier;
@property(copy, nonatomic) NSDate *dateDeleted; // @synthesize dateDeleted=_dateDeleted;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(copy, nonatomic) NSDate *recordModificationDate; // @synthesize recordModificationDate=_recordModificationDate;
@property(copy, nonatomic) CPLScopedIdentifier *scopedIdentifier; // @synthesize scopedIdentifier=_scopedIdentifier;
- (_Bool)isAssetChange;
- (_Bool)isMasterChange;
- (id)copyChangeType:(unsigned long long)arg1;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (void)copyDerivatives:(unsigned long long *)arg1 count:(int)arg2 avoidResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5;
- (unsigned long long)baseVideoComplemenentResourceType;
- (unsigned long long)baseDerivativeResourceType;
- (id)resourcePerType;
- (_Bool)allResourcesAreAvailable;
- (_Bool)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;
- (unsigned long long)fullChangeTypeForFullRecord;
- (_Bool)_canLowerQuota;
- (void)_setShouldNotTrustCloudCache:(_Bool)arg1;
- (_Bool)_shouldNotTrustCloudCache;
- (void)_setUploadIdentifier:(id)arg1;
- (id)_uploadIdentifier;
- (unsigned long long)estimatedRecordSize;
- (_Bool)validateChangeWithError:(id *)arg1;
- (_Bool)validateFullRecord;
- (id)onlyAddedResources;
- (_Bool)changeIsOnlyAddingResourcesToRecord:(id)arg1 addedResources:(id *)arg2;
- (_Bool)allowsToOnlyUploadNewResources;
- (_Bool)shouldOnlyUploadNewResources;
- (void)markToOnlyUploadNewResources;
- (void)markAsSparseFullChange;
- (_Bool)isSparseFullChange;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (_Bool)shouldFilterDefaultValuesForNewProperties;
- (void)setShouldFilterDefaultValuesForNewProperties:(_Bool)arg1;
- (_Bool)shouldApplyPropertiesWithSelector:(SEL)arg1;
- (id)resourcesDescription;
- (id)cplFullDescription;
- (long long)dequeueOrder;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (void)clearIdentifiers;
- (id)allRelatedScopedIdentifiers;
- (id)scopedIdentifiersForQuarantine;
- (id)scopedIdentifierForQuarantine;
- (id)proposedLocalScopedIdentifier;
- (id)secondaryScopedIdentifier;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)secondaryIdentifier;
- (id)relatedScopedIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1 direction:(unsigned long long)arg2;
- (_Bool)resourceChangeWillOnlyChangeDerivatives:(id)arg1;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 updatedProperties:(id *)arg4;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 changeType:(unsigned long long)arg4 updatedProperties:(id *)arg5;
- (_Bool)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 direction:(unsigned long long)arg4 updatedProperty:(id *)arg5;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)description;
- (id)propertiesDescription;
- (unsigned long long)originalResourceSize;
- (unsigned long long)realResourceSize;
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)arg1;
- (unsigned long long)totalResourceSize;
- (id)resourceForType:(unsigned long long)arg1;
- (void)setResources:(id)arg1;
- (id)resources;
- (_Bool)supportsDirectDeletion;
- (_Bool)supportsDeletion;
- (_Bool)supportsResourceType:(unsigned long long)arg1;
- (_Bool)supportsResources;
- (_Bool)isDelete;
- (_Bool)isFullRecord;
- (_Bool)hasChangeType:(unsigned long long)arg1;
- (_Bool)isInScopeWithIdentifier:(id)arg1;
- (id)realScopedIdentifier;
- (void)setScopeIndex:(long long)arg1;
- (id)_unscopedIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)proposedCloudScopedIdentifierWithError:(id *)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)scopedIdentifiersForMapping;
- (_Bool)validateRecordForTracker:(id)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;

@end
