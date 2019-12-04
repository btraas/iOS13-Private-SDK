//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVMediaInfo.h>

@class IKAppContext, TVPPlaylist;

__attribute__((visibility("hidden")))
@interface VUIMediaInfo : TVMediaInfo
{
    _Bool _hasProgress;
    _Bool _showsSecondaryVideoView;
    _Bool _automaticPlaybackStart;
    _Bool _automaticPlaybackStop;
    _Bool _restrictionsAlreadyUnlocked;
    _Bool _shouldDelayLoadingImage;
    _Bool _allowsPictureInPicture;
    _Bool _overridesStartTimeWithResumeTime;
    TVPPlaylist *_tvpPlaylist;
    unsigned long long _playbackStartReason;
    unsigned long long _playbackStopReason;
    unsigned long long _playbackContext;
    IKAppContext *_appContext;
    double _playbackDelayInterval;
}

@property(nonatomic) _Bool overridesStartTimeWithResumeTime; // @synthesize overridesStartTimeWithResumeTime=_overridesStartTimeWithResumeTime;
@property(nonatomic) double playbackDelayInterval; // @synthesize playbackDelayInterval=_playbackDelayInterval;
@property(nonatomic) _Bool allowsPictureInPicture; // @synthesize allowsPictureInPicture=_allowsPictureInPicture;
@property(retain, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(nonatomic) unsigned long long playbackContext; // @synthesize playbackContext=_playbackContext;
@property(nonatomic) _Bool shouldDelayLoadingImage; // @synthesize shouldDelayLoadingImage=_shouldDelayLoadingImage;
@property(nonatomic) _Bool restrictionsAlreadyUnlocked; // @synthesize restrictionsAlreadyUnlocked=_restrictionsAlreadyUnlocked;
@property(nonatomic) unsigned long long playbackStopReason; // @synthesize playbackStopReason=_playbackStopReason;
@property(nonatomic, getter=isAutomaticPlaybackStop) _Bool automaticPlaybackStop; // @synthesize automaticPlaybackStop=_automaticPlaybackStop;
@property(nonatomic) unsigned long long playbackStartReason; // @synthesize playbackStartReason=_playbackStartReason;
@property(nonatomic, getter=isAutomaticPlaybackStart) _Bool automaticPlaybackStart; // @synthesize automaticPlaybackStart=_automaticPlaybackStart;
@property(nonatomic) _Bool showsSecondaryVideoView; // @synthesize showsSecondaryVideoView=_showsSecondaryVideoView;
@property(retain, nonatomic) TVPPlaylist *tvpPlaylist; // @synthesize tvpPlaylist=_tvpPlaylist;
@property(readonly, nonatomic) _Bool hasProgress; // @synthesize hasProgress=_hasProgress;
- (id)_playbackOverridesForURL:(id)arg1 orAdamID:(id)arg2;
- (id)_tvpMediaTypeFromPlayableType:(id)arg1 isRental:(_Bool)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadataOverrides:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadataFromVideosPlayable:(id)arg2;
- (id)_auxMediaItemFromVideosPlayable:(id)arg1;
- (id)_storeMediaItemsFromVideosPlayable:(id)arg1 andStoreDictionary:(id)arg2;
- (id)_playlistFromVideosPlayables:(id)arg1 andStoreDictionary:(id)arg2;
- (id)_tvpRatingDomainFromUTSRatingDomain:(id)arg1;
- (void)_updatePlaybackStartReason;
- (void)setUserPlaybackInitiationDate:(id)arg1 openURLCompletionDate:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlaybackContext:(unsigned long long)arg1 videosPlayables:(id)arg2 imageProxies:(id)arg3 storeDictionary:(id)arg4;
- (id)init;
- (long long)_videoDynamimcRangeFromMPColorCapability:(long long)arg1;
- (long long)_videoResolutionFromMPVideoQuality:(long long)arg1;
- (id)_storeMediaItemFromMPMediaItem:(id)arg1;
- (id)_playlistFromMPMediaItems:(id)arg1;
- (id)initWithPlaybackContext:(unsigned long long)arg1 mpMediaItems:(id)arg2;
- (id)_playlistForVUIMediaItems:(id)arg1;
- (id)initWithPlaybackContext:(unsigned long long)arg1 vuiMediaItems:(id)arg2;
- (id)initWithBackgroundImageDictionary:(id)arg1;

@end
