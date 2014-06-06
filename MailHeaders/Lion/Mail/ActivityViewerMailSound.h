/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@interface ActivityViewerMailSound : NSObject
{
    BOOL _fetchWasRequested;
    BOOL _waitingForServerResponse;
    BOOL _shouldPlayNoMailSound;
    long long _backgroundFetchesInProgress;
}

- (id)init;
- (void)dealloc;
- (void)beginFetch:(BOOL)arg1;
- (void)_monitoredActivityStarted:(id)arg1;
- (void)_monitoredActivityEnded:(id)arg1;
- (BOOL)_isActivityInteresting:(id)arg1 isStarting:(BOOL)arg2;
- (void)_mailFetchComplete;

@end
