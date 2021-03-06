//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMHome.h>

#import <Home/HFCharacteristicValueReader-Protocol.h>
#import <Home/HFCharacteristicValueWriter-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFWallaperHost-Protocol.h>

@class NSArray, NSDate, NSString, UIImage;

@interface HMHome (HFUserHandleAdditions) <HFStateDumpBuildable, HFCharacteristicValueReader, HFCharacteristicValueWriter, HFWallaperHost, HFReorderableHomeKitObject>
+ (BOOL)hf_prefersAutoSynthesizedDescription;
+ (id)_hf_appDataKeyForColorPaletteOfType:(NSUInteger)arg1;
+ (id)_hf_standaloneTopicNameForPrimaryServiceType:(id)arg1;
+ (id)_hf_groupedServiceTypeTopics;
- (id)hf_handleForUser:(id)arg1;
- (id)hf_userForHandle:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_home;
- (BOOL)hf_shouldDefaultFavoriteForHomeKitObject:(id)arg1 excludingHomeKitObjects:(id)arg2;
- (NSUInteger)hf_favoriteServiceLikeObjectCountExcludingHomeKitObjects:(id)arg1;
- (NSUInteger)hf_favoriteCameraCountExcludingHomeKitObjects:(id)arg1;
- (id)hf_updateAccessControlDescriptor:(id)arg1;
- (id)hf_accessControlDescriptor;
- (id)hf_updateColorPalette:(id)arg1 type:(NSUInteger)arg2;
- (id)hf_updateColorPalette:(id)arg1;
- (id)hf_colorPaletteOfType:(NSUInteger)arg1;
- (id)hf_colorPalette;
@property(readonly, nonatomic) BOOL hf_hasAutomatableProfiles;
@property(readonly, nonatomic) BOOL hf_hasAutomatableServices;
- (BOOL)hf_isAutomatable;
- (BOOL)hf_userCanCreateTrigger;
- (BOOL)hf_userIsAllowedToCreateTrigger;
@property(readonly, nonatomic) BOOL hf_isAbleToAddTrigger;
- (BOOL)hf_hasAnyVisibleTriggers;
- (BOOL)hf_hasEnabledResident;
- (void)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;
- (BOOL)hf_cameraRecordingHasBeenOnboarded;
- (void)hf_startReprovisioningAccessory:(id)arg1;
- (BOOL)hf_hasCameraRecordingResident;
- (BOOL)hf_hasAppleTVs;
- (NSUInteger)hf_numberOfHomePods;
- (BOOL)hf_hasHomePods;
- (BOOL)hf_hasMediaAccessories;
- (BOOL)hf_supportsSharedEventAutomation;
- (BOOL)hf_isMediaAccessoryProfileValid:(id)arg1;
- (BOOL)hf_isPresenceAuthorizedForUser:(id)arg1;
- (id)hf_allNonOwnerUsers;
- (id)hf_allNonAdminUsers;
- (id)hf_allUsersIncludingCurrentUser;
- (BOOL)hf_enabledResidentsSupportsMediaActions;
- (BOOL)hf_supportsRemoteAccessRestrictions;
- (BOOL)hf_supportsPerUserRemoteAccess;
- (id)hf_markTermsAndConditionsAsAcceptedForHomePodWithLicenseAgreementVersion:(id)arg1;
- (BOOL)hf_hasAcceptedTermsAndConditionsForHomePodVersion:(id)arg1;
- (id)hf_setHomeHasMigratedServicesToAccessories:(BOOL)arg1;
- (BOOL)hf_homeHasMigratedServicesToAccessories;
- (id)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:(BOOL)arg1;
- (BOOL)hf_homeHasMigratedIntoHomeApp;
- (id)hf_setNotesApplicationData:(id)arg1;
- (id)hf_notesApplicationData;
- (id)hf_reorderableCamerasList;
- (id)hf_reorderableActionSetsList;
- (id)hf_reorderableServicesList;
- (id)hf_reorderableRoomsList;
- (id)hf_tvViewingProfilesAccessories;
- (id)hf_personalRequestAccessories;
- (id)hf_allResidentAccessories;
- (id)hf_homePods;
- (id)hf_appleTVs;
- (id)hf_mediaAccessories;
- (id)hf_updateAutomaticSoftwareUpdateEnabled:(BOOL)arg1;
- (id)hf_accessoriesRequiringManualWiFiReconfiguration;
- (id)hf_resetAllNetworkConfigurationProfiles;
- (id)hf_allHomePodProfiles;
- (id)hf_allMediaProfiles;
- (BOOL)hf_hasSecureRecordingCameras;
- (id)hf_unitaryCameraProfile;
- (id)hf_allCameraProfilesSupportingRecording;
- (id)hf_allCameraProfiles;
- (id)hf_cameraProfileWithIdentifier:(id)arg1;
- (id)hf_allNetworkRouterProfiles;
- (id)hf_allNetworkConfigurationProfiles;
- (id)hf_accessoryProfilesWithClass:(Class)arg1;
- (id)hf_allAccessoryProfiles;
- (id)hf_allVisibleServices;
- (id)hf_allServices;
- (id)hf_serviceWithIdentifier:(id)arg1;
- (id)availableSoftwareUpdates;
- (id)accessoriesSupportingSoftwareUpdate;
- (id)hf_mediaSystemForAccessory:(id)arg1;
- (id)hf_serviceGroupsForService:(id)arg1;
- (id)hf_actionSetWithUUID:(id)arg1;
- (id)hf_enabledResidentDevices;
- (id)hf_primaryResidentDevice;
- (id)hf_allTargetControlAccessories;
- (id)hf_allProgrammableSwitchAccessories;
- (id)hf_allBridgeAccessories;
- (id)hf_accessoriesMatchingCategoryType:(id)arg1;
- (id)hf_mediaProfileContainerForSymptomsHandler:(id)arg1;
- (id)hf_visibleAccessories;
- (id)hf_mediaSystemForSymptomsHandler:(id)arg1;
- (id)hf_accessoryForSymptomsHandler:(id)arg1;
- (id)hf_accessoryWithDeviceIdentifier:(id)arg1;
- (id)hf_accessoryWithIdentifier:(id)arg1;
- (id)hf_allNonEmptyActionSets;
- (id)hf_updateNetworkProtection:(long long)arg1;
- (BOOL)hf_isNetworkRouterSupported;
- (BOOL)hf_isNetworkProtectionEnabled;
- (id)hf_localizedDescriptionForNetworkProtectionSupport;
- (BOOL)hf_isNetworkProtectionSupportedForHome;
- (BOOL)hf_isNetworkProtectionSupportedForAccessories;
- (id)hf_zoneWithIdentifier:(id)arg1;
- (void)hf_setSelectedRoom:(id)arg1;
- (id)hf_selectedRoom;
- (id)hf_roomWithName:(id)arg1;
- (id)hf_roomWithIdentifier:(id)arg1;
- (BOOL)hf_currentUserIsOwner;
- (BOOL)hf_currentUserIsAdministrator;
- (BOOL)hf_isUserAtHome;
- (BOOL)hf_isCurrentLocationHome;
- (NSUInteger)hf_remoteAccessState;
- (id)hf_characteristicValueManager;
- (id)hf_activeRooms;
- (id)hf_allRooms;
- (id)hf_updateWallpaperImage:(id)arg1;
@property(readonly, nonatomic) UIImage *hf_wallpaperImage;
- (id)hf_allObjectsAffectedByServiceTopic:(id)arg1;
- (id)hf_cameraProfilesAffectedByServiceTopic:(id)arg1;
- (id)hf_servicesAffectedByServiceTopic:(id)arg1;
- (id)hf_userNotificationTopicForObject:(id)arg1;
- (id)hf_userNotificationTopicForCameraProfile:(id)arg1;
- (id)hf_userNotificationTopicForService:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *hf_userNotificationServiceTopics;
- (id)_hf_accessoryTopics;
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
@end

