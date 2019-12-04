//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUI/IMFullScreenEffectSoundPlayerDelegate-Protocol.h>

@class IMFullScreenEffect, IMMessagePartChatItem, NSString, NSTimer, UIImage;
@protocol IMFullScreenEffectPlayerDelegate, IMFullScreenEffectSoundPlayer;

@interface IMFullScreenEffectPlayer : NSObject <IMFullScreenEffectSoundPlayerDelegate>
{
    _Bool _wasAborted;
    _Bool _shouldRepeat;
    _Bool _triggeredByResponseKit;
    _Bool _isFromMe;
    IMFullScreenEffect *_fullScreenEffect;
    id <IMFullScreenEffectSoundPlayer> _soundPlayer;
    IMMessagePartChatItem *_messagePartChatItem;
    struct UIImage *_messageImage;
    double _startTime;
    double _endTime;
    NSString *_languageCode;
    NSTimer *_effectTimer;
    NSString *_identifier;
    id <IMFullScreenEffectPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <IMFullScreenEffectPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFromMe; // @synthesize isFromMe=_isFromMe;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool triggeredByResponseKit; // @synthesize triggeredByResponseKit=_triggeredByResponseKit;
@property(nonatomic) __weak NSTimer *effectTimer; // @synthesize effectTimer=_effectTimer;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) _Bool wasAborted; // @synthesize wasAborted=_wasAborted;
@property(retain, nonatomic) UIImage *messageImage; // @synthesize messageImage=_messageImage;
@property(nonatomic) __weak IMMessagePartChatItem *messagePartChatItem; // @synthesize messagePartChatItem=_messagePartChatItem;
@property(retain, nonatomic) id <IMFullScreenEffectSoundPlayer> soundPlayer; // @synthesize soundPlayer=_soundPlayer;
@property(retain, nonatomic) IMFullScreenEffect *fullScreenEffect; // @synthesize fullScreenEffect=_fullScreenEffect;
@property(readonly, nonatomic) _Bool didPlay;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)stopPlayingEffect;
- (void)startPlayingEffect;
- (void)prepareToPlayEffect;
- (void)fullScreenEffectSoundPlayerDidStopPlaying:(id)arg1;
- (void)fullScreenEffectSoundPlayerDidStartPlaying:(id)arg1;
- (void)fullScreenEffectSoundPlayerDidPrepare:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)willStartPlaying;
- (void)didStopPlaying;
- (void)abortPlayingEffect;
- (void)didAbortPlaying;
- (void)_didPrepare;
- (void)loadFullScreenEffect:(id /* block */)arg1;
- (void)_setFullScreenEffect:(id)arg1;
- (void)didSetFullScreenEffect:(id)arg1;
- (void)dealloc;
- (id)initWithMessagePartChatItem:(id)arg1 languageCode:(id)arg2;
- (id)initWithIdentifier:(id)arg1 isFromMe:(_Bool)arg2;
- (id)createSoundPlayer;
- (void)addFullScreenEffectFilterToTriggeringCell:(id)arg1;
- (void)removeFullScreenEffectFiltersFromCells:(id)arg1;
- (void)addFullScreenEffectFiltersToCells:(id)arg1;
- (_Bool)_shouldAddFilter:(id)arg1 toCell:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
