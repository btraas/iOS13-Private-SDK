//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>





@class NSString, PPSource, PPTopic, PPTopicMetadata;

@interface PPTopicRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    PPTopic *_topic;
    PPSource *_source;
    unsigned long long _algorithm;
    double _initialScore;
    double _decayRate;
    _Bool _isLocal;
    NSString *_extractionOsBuild;
    unsigned long long _extractionAssetVersion;
    PPTopicMetadata *_metadata;
    BOOL _bucketizedSentimentScore;
}

+ (id)describeAlgorithm:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PPTopicMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned long long extractionAssetVersion; // @synthesize extractionAssetVersion=_extractionAssetVersion;
@property(readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property(readonly, nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(readonly, nonatomic) double initialScore; // @synthesize initialScore=_initialScore;
@property(readonly, nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(readonly, nonatomic) PPSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) PPTopic *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) double sentimentScore; // @dynamic sentimentScore;
- (_Bool)isEqualToTopicRecord:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
