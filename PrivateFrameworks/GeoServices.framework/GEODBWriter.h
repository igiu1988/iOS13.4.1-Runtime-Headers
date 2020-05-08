/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODBWriter : NSObject {
    bool  _canCreateDebugTable;
    bool  _closed;
    GEOCountryConfiguration * _countryConfiguration;
    unsigned long long  _databaseSize;
    struct sqlite3 { } * _db;
    bool  _defunct;
    NSString * _devicePostureCountry;
    NSString * _devicePostureRegion;
    struct sqlite3_stmt { } * _editionDelete;
    struct sqlite3_stmt { } * _editionInvalidate;
    struct sqlite3_stmt { } * _editionInvalidateAll;
    void * _editionMap;
    struct sqlite3_stmt { } * _editionQuery;
    struct sqlite3_stmt { } * _editionUpdate;
    long long  _evictionRowsThreshold;
    unsigned long long  _expirationRecordCount;
    struct { unsigned int x1; double x2; } * _expirationRecords;
    double  _lastCheckedGeneralExpiration;
    long long  _lastRowID;
    GEOResourceManifestManager * _manifestManager;
    unsigned long long  _maxDatabaseSize;
    NSString * _path;
    unsigned long long  _pendingWriteBytes;
    NSDictionary * _pragmaOverrides;
    bool  _preloading;
    struct sqlite3_stmt { } * _sizeQuery;
    unsigned long long  _tileCacheMaximumWriteBytes;
    unsigned long long  _tileCacheMaximumWriteCount;
    unsigned long long  _tileCacheMinimumWriteBytes;
    unsigned long long  _tileCacheMinimumWriteCount;
    struct sqlite3_stmt { } * _tileDelete;
    struct sqlite3_stmt { } * _tileInsert;
    struct sqlite3_stmt { } * _tileSize;
    NSMutableSet * _uncommitedWriteSet;
    struct sqlite3_stmt { } * _versionInsert;
    struct sqlite3_stmt { } * _versionQuery;
    NSMutableArray * _writeList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _writeListLock;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property bool closed;
@property (nonatomic, readonly) unsigned long long databaseSize;
@property (nonatomic, readonly) NSString *devicePostureCountry;
@property (nonatomic, readonly) NSString *devicePostureRegion;
@property (nonatomic) unsigned long long maxDatabaseSize;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (void)_assertDatabaseSize;
- (void)_closeDB;
- (void)_countryChanged:(id)arg1;
- (void)_createTables;
- (unsigned long long)_dbFileSize;
- (void)_deleteKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; })arg1;
- (void)_deviceLocked;
- (void)_dropWritesOnFloor:(id)arg1;
- (void)_evict;
- (void)_finalizeStatements;
- (unsigned long long)_freeableDiskSpace;
- (void)_localeChanged:(id)arg1;
- (void)_openDBAndPurgeContents;
- (void)_openDBForceRecreate:(bool)arg1;
- (void)_openIfNecessary;
- (void)_performWrites:(bool)arg1;
- (void)_prepareStatements;
- (void)_printDBStatus:(const char *)arg1;
- (bool)_readEditions;
- (void)_setCurrentDevicePostureToCountry:(id)arg1 region:(id)arg2;
- (void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(bool)arg2;
- (bool)_tileSetExpires:(unsigned int)arg1;
- (void)_updateEdition:(unsigned int)arg1 forTileset:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(bool)arg4;
- (void)_updateSize;
- (void)_updateVersionTableWithCountryAndRegion;
- (void)_writeEntry:(id)arg1;
- (void)_writeVersionForCountry:(id)arg1 region:(id)arg2;
- (void)addData:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)calculateFreeableSizeWithHandler:(id /* block */)arg1 onQueue:(id)arg2;
- (bool)closed;
- (unsigned long long)databaseSize;
- (void)dealloc;
- (void)deleteData:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg1;
- (id)devicePostureCountry;
- (id)devicePostureRegion;
- (void)endPreloadSession;
- (void)evaluateDevicePostureAgainstCurrentManifest:(id)arg1;
- (void)flushPendingWrites;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2;
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2 manifestManager:(id)arg3 countryConfiguration:(id)arg4;
- (unsigned long long)maxDatabaseSize;
- (id)path;
- (id)pendingWriteForKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg1;
- (void)pendingWritesForKeys:(id)arg1 handler:(id /* block */)arg2;
- (bool)prepareSingleStatement:(struct sqlite3_stmt {}**)arg1 forSql:(id)arg2;
- (void)setClosed:(bool)arg1;
- (void)setExpirationRecords:(struct { unsigned int x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setMaxDatabaseSize:(unsigned long long)arg1;
- (void)shrinkBySize:(unsigned long long)arg1 callback:(id /* block */)arg2 onQueue:(id)arg3;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id /* block */)arg2 onQueue:(id)arg3;
- (void)waitForPendingWrites;

@end
