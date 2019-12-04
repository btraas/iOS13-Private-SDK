//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class GEOAutomobileOptions, MapsSuggestionsManager, MapsSuggestionsShortcutManager, NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject>
{
    MapsSuggestionsManager *_entryManager;
    MapsSuggestionsShortcutManager *_shortcutManager;
    NSObject<OS_dispatch_queue> *_optionsSerialQueue;
    int _mapType;
    GEOAutomobileOptions *_automobileOptions;
}

+ (id)defaultCachePath;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
- (void)reset;
- (void)startDemoMode;
- (void)setFakeSource:(id)arg1;
- (id)fakeSource;
- (id)strategy;
- (id)manager;
- (id)routine;
- (id)shortcutManager;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (_Bool)loadStorageFromFile:(id)arg1 callback:(id /* block */)arg2 callbackQueue:(id)arg3;
- (_Bool)loadStorageFromFile:(id)arg1;
- (_Bool)saveStorageToFile:(id)arg1;
- (void)hintRefreshOfType:(long long)arg1;
- (void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (void)addAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (struct NSArray *)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4;
- (_Bool)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 callback:(id /* block */)arg5 onQueue:(id)arg6;
- (struct NSArray *)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3;
- (_Bool)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(id /* block */)arg4 onQueue:(id)arg5;
- (_Bool)detachSink:(id)arg1;
- (void)attachSink:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)initWithEntryManager:(id)arg1 shortcutManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
