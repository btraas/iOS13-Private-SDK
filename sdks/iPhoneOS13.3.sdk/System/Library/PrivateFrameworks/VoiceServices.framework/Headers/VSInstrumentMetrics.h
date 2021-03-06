//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface VSInstrumentMetrics : NSObject <NSSecureCoding>
{
    BOOL _isWarmStart;
    BOOL _isServerTTS;
    BOOL _isServerStreamTTS;
    BOOL _isServerTimeout;
    BOOL _isServerTTSRacing;
    BOOL _canUseServerTTS;
    BOOL _isSpeechRequest;
    BOOL _isCacheHitFromDisk;
    BOOL _isCacheHitFromMemory;
    NSString *_utterance;
    NSString *_voiceAssetKey;
    NSString *_voiceResourceAssetKey;
    NSString *_audioOutputRoute;
    long long _requestCreatedTimestamp;
    long long _eagerRequestCreatedTimeStampDiffs;
    long long _synthesisBeginTimestamp;
    long long _synthesisEndTimestamp;
    long long _speechBeginTimestamp;
    long long _speechEndTimestamp;
    long long _audioStartTimestampDiffs;
    double _audioDuration;
    long long _promptCount;
    long long _errorCode;
    long long _sourceOfTTS;
    long long _synthesisToSpeechTimeGap;
    long long _waitForSynthesisToFinishTimeDelay;
}

+ (BOOL)supportsSecureCoding;
@property BOOL isCacheHitFromMemory; // @synthesize isCacheHitFromMemory=_isCacheHitFromMemory;
@property BOOL isCacheHitFromDisk; // @synthesize isCacheHitFromDisk=_isCacheHitFromDisk;
@property long long waitForSynthesisToFinishTimeDelay; // @synthesize waitForSynthesisToFinishTimeDelay=_waitForSynthesisToFinishTimeDelay;
@property long long synthesisToSpeechTimeGap; // @synthesize synthesisToSpeechTimeGap=_synthesisToSpeechTimeGap;
@property BOOL isSpeechRequest; // @synthesize isSpeechRequest=_isSpeechRequest;
@property long long sourceOfTTS; // @synthesize sourceOfTTS=_sourceOfTTS;
@property long long errorCode; // @synthesize errorCode=_errorCode;
@property long long promptCount; // @synthesize promptCount=_promptCount;
@property BOOL canUseServerTTS; // @synthesize canUseServerTTS=_canUseServerTTS;
@property BOOL isServerTTSRacing; // @synthesize isServerTTSRacing=_isServerTTSRacing;
@property BOOL isServerTimeout; // @synthesize isServerTimeout=_isServerTimeout;
@property BOOL isServerStreamTTS; // @synthesize isServerStreamTTS=_isServerStreamTTS;
@property BOOL isServerTTS; // @synthesize isServerTTS=_isServerTTS;
@property BOOL isWarmStart; // @synthesize isWarmStart=_isWarmStart;
@property double audioDuration; // @synthesize audioDuration=_audioDuration;
@property long long audioStartTimestampDiffs; // @synthesize audioStartTimestampDiffs=_audioStartTimestampDiffs;
@property long long speechEndTimestamp; // @synthesize speechEndTimestamp=_speechEndTimestamp;
@property long long speechBeginTimestamp; // @synthesize speechBeginTimestamp=_speechBeginTimestamp;
@property long long synthesisEndTimestamp; // @synthesize synthesisEndTimestamp=_synthesisEndTimestamp;
@property long long synthesisBeginTimestamp; // @synthesize synthesisBeginTimestamp=_synthesisBeginTimestamp;
@property long long eagerRequestCreatedTimeStampDiffs; // @synthesize eagerRequestCreatedTimeStampDiffs=_eagerRequestCreatedTimeStampDiffs;
@property long long requestCreatedTimestamp; // @synthesize requestCreatedTimestamp=_requestCreatedTimestamp;
@property(copy) NSString *audioOutputRoute; // @synthesize audioOutputRoute=_audioOutputRoute;
@property(copy) NSString *voiceResourceAssetKey; // @synthesize voiceResourceAssetKey=_voiceResourceAssetKey;
@property(copy) NSString *voiceAssetKey; // @synthesize voiceAssetKey=_voiceAssetKey;
@property(copy) NSString *utterance; // @synthesize utterance=_utterance;
// - (void).cxx_destruct;
- (double)synthesisToSpeechTime;
- (double)waitForSynthesisToFinishTime;
- (double)ttsTotalLatency;
- (double)synthesisLatency;
- (id)dictionaryMetrics;
- (double)eagerRequestTimeGap;
- (BOOL)isSynthesisCached;
- (double)ttsSynthesisLatency;
- (double)audioQueueLatency;
- (double)timeToSpeakLatency;
- (double)_clockFactor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

