/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXPreferences : NSObject {
    NSObject<OS_xpc_object> * _agentConnection;
    NSObject<OS_xpc_object> * _daemonConnection;
    NSObject<OS_xpc_object> * _directConnection;
    unsigned int  _euid;
    unsigned int  _launchdUID;
    struct __CFDictionary { } * _namedVolatileSources;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _namedVolatileSourcesLock;
    struct __CFDictionary { } * _searchLists;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _searchListsLock;
    struct __CFDictionary { } * _sources;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sourcesLock;
    _Atomic BOOL  _userHomeDirectoryState;
}

+ (id)copyDefaultPreferences;

- (id)_copyDaemonConnectionSettingUpIfNecessaryForRole:(int)arg1;
- (void)_deliverPendingKVONotifications;
- (void)addSuitePreferences:(struct __CFString { }*)arg1 toAppIdentifier:(struct __CFString { }*)arg2 container:(struct __CFString { }*)arg3;
- (void)alreadylocked_withNamedVolatileSources:(id /* block */)arg1;
- (void)alreadylocked_withSearchLists:(id /* block */)arg1;
- (void)alreadylocked_withSources:(id /* block */)arg1;
- (unsigned char)appSynchronizeWithIdentifier:(struct __CFString { }*)arg1 container:(struct __CFString { }*)arg2;
- (bool)appValueIsForcedForKey:(struct __CFString { }*)arg1 appIdentifier:(struct __CFString { }*)arg2;
- (void)assertEquivalence:(bool)arg1 ofIdentifiers:(struct __CFArray { }*)arg2 containers:(struct __CFArray { }*)arg3 cloudConfigurationURLs:(struct __CFArray { }*)arg4;
- (void)assertEquivalence:(bool)arg1 ofIdentifiers:(struct __CFArray { }*)arg2 users:(struct __CFArray { }*)arg3 hosts:(struct __CFArray { }*)arg4 containers:(struct __CFArray { }*)arg5 managedFlags:(struct __CFArray { }*)arg6 cloudFlags:(struct __CFArray { }*)arg7;
- (bool)canLookUpAgents;
- (void*)copyAppValueForKey:(struct __CFString { }*)arg1 identifier:(struct __CFString { }*)arg2 container:(struct __CFString { }*)arg3 configurationURL:(struct __CFURL { }*)arg4;
- (struct __CFString { }*)copyDescriptionOfSearchLists;
- (struct __CFDictionary { }*)copyDictionaryForApp:(struct __CFString { }*)arg1 withContainer:(struct __CFString { }*)arg2;
- (struct __CFDictionary { }*)copyDictionaryForSourceWithIdentifier:(struct __CFString { }*)arg1;
- (struct __CFDictionary { }*)copyDictionaryForVolatileSourceWithName:(struct __CFString { }*)arg1;
- (struct __CFArray { }*)copyKeyListForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 host:(struct __CFString { }*)arg3 container:(struct __CFString { }*)arg4;
- (struct __CFDictionary { }*)copyManagedValuesForKeys:(struct __CFArray { }*)arg1 identifier:(struct __CFString { }*)arg2 useSystemContainer:(bool)arg3;
- (void*)copyValueForKey:(struct __CFString { }*)arg1 identifier:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 host:(struct __CFString { }*)arg4 container:(struct __CFString { }*)arg5;
- (struct __CFDictionary { }*)copyValuesForKeys:(struct __CFArray { }*)arg1 identifier:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 host:(struct __CFString { }*)arg4 container:(struct __CFString { }*)arg5;
- (bool)currentUserHasInvalidHomeDirectory;
- (void)dealloc;
- (void)destroyConnections;
- (unsigned int)euid;
- (void)flushCachesForAppIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (void)flushManagedSources;
- (void)fullCloudSynchronizeForAppIdentifier:(struct __CFString { }*)arg1 container:(struct __CFString { }*)arg2 configurationURL:(struct __CFURL { }*)arg3 completionHandler:(id /* block */)arg4;
- (bool)hasCloudValueForKey:(struct __CFString { }*)arg1 appIdentifier:(struct __CFString { }*)arg2 container:(struct __CFString { }*)arg3 configurationURL:(struct __CFURL { }*)arg4;
- (bool)hasNonRegisteredValueForKey:(struct __CFString { }*)arg1 appIdentifier:(struct __CFString { }*)arg2 container:(struct __CFString { }*)arg3 configurationURL:(struct __CFURL { }*)arg4;
- (void)ingestVolatileStateFromPreferences:(id)arg1;
- (id)init;
- (void)notifyOfImpendingDeletionOfUser:(struct __CFString { }*)arg1;
- (void)preloadAppValuesForIdentifiers:(const struct __CFString {}**)arg1 containers:(const struct __CFString {}**)arg2 configurationURLs:(const struct __CFURL {}**)arg3 count:(long long)arg4;
- (void)registerDefaultValues:(struct __CFDictionary { }*)arg1;
- (void)registerUserDefaultsInstance:(id)arg1 configurationURL:(struct __CFURL { }*)arg2;
- (void)removeSuite:(struct __CFString { }*)arg1 fromApp:(struct __CFString { }*)arg2 withContainer:(struct __CFString { }*)arg3;
- (void)removeVolatileSourceForName:(struct __CFString { }*)arg1;
- (void)replaceSearchList:(id)arg1 withSearchList:(id)arg2;
- (void)replaceValuesInSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 host:(struct __CFString { }*)arg3 container:(struct __CFString { }*)arg4 withValues:(struct __CFDictionary { }*)arg5;
- (void)replaceValuesInVolatileSourceNamed:(struct __CFString { }*)arg1 withValues:(struct __CFDictionary { }*)arg2;
- (void)resetPreferences:(bool)arg1;
- (void)setAccessRestricted:(bool)arg1 forAppIdentifier:(struct __CFString { }*)arg2;
- (void)setBackupDisabled:(bool)arg1 identifier:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 host:(struct __CFString { }*)arg4 container:(struct __CFString { }*)arg5;
- (void)setCloudSyncEnabled:(bool)arg1 forKey:(struct __CFString { }*)arg2 appIdentifier:(struct __CFString { }*)arg3 container:(struct __CFString { }*)arg4;
- (void)setDaemonCacheEnabled:(bool)arg1 identifier:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 host:(struct __CFString { }*)arg4 container:(struct __CFString { }*)arg5;
- (void)setFileProtectionClass:(int)arg1 identifier:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 host:(struct __CFString { }*)arg4 container:(struct __CFString { }*)arg5;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2 appIdentifier:(struct __CFString { }*)arg3 container:(struct __CFString { }*)arg4 configurationURL:(struct __CFURL { }*)arg5;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2 identifier:(struct __CFString { }*)arg3 user:(struct __CFString { }*)arg4 host:(struct __CFString { }*)arg5 container:(struct __CFString { }*)arg6;
- (void)setValuesForKeys:(struct __CFDictionary { }*)arg1 removingValuesForKeys:(struct __CFArray { }*)arg2 identifier:(struct __CFString { }*)arg3 user:(struct __CFString { }*)arg4 host:(struct __CFString { }*)arg5 container:(struct __CFString { }*)arg6;
- (_Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**)shmemForRole:(void *)arg1 name:(void *)arg2; // needs 2 arg types, found 3: SEL, int, const char *
- (void)simulateTimerSynchronizeForTestingForUser:(struct __CFString { }*)arg1;
- (void)synchronizeEverything;
- (unsigned char)synchronizeIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 host:(struct __CFString { }*)arg3 container:(struct __CFString { }*)arg4;
- (void)unregisterUserDefaultsInstance:(id)arg1;
- (void)updateSearchListsForIdentifier:(struct __CFString { }*)arg1;
- (struct __CFArray { }*)volatileSourceNames;
- (void)with23930198HackSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 container:(struct __CFString { }*)arg4 cloud:(bool)arg5 perform:(id /* block */)arg6;
- (void)withConnectionForRole:(int)arg1 performBlock:(id /* block */)arg2;
- (void)withManagedSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 perform:(id /* block */)arg3;
- (void)withNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1 perform:(id /* block */)arg2;
- (void)withNamedVolatileSources:(id /* block */)arg1;
- (void)withSearchListForIdentifier:(struct __CFString { }*)arg1 container:(struct __CFString { }*)arg2 cloudConfigurationURL:(struct __CFURL { }*)arg3 perform:(id /* block */)arg4;
- (void)withSearchLists:(id /* block */)arg1;
- (void)withSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 container:(struct __CFString { }*)arg4 cloud:(bool)arg5 perform:(id /* block */)arg6;
- (void)withSources:(id /* block */)arg1;
- (void)withSuiteSearchListForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 locked:(bool)arg3 perform:(id /* block */)arg4;

@end
