/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOConfigPersistence : NSObject {
    GEODefaultsDBDict * _cache;
    geo_isolater * _cacheIsolator;
    GEOSQLiteDB * _db;
}

+ (bool)_setup:(id)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (id)_valueForKeyPath:(id)arg1 key:(id*)arg2 createOrUpdate:(id /* block */)arg3;
- (void)dealloc;
- (id)defaultForKeyPath:(id)arg1;
- (id)initWithDBPath:(id)arg1;
- (void)setDefault:(id)arg1 forKeyPath:(id)arg2;
- (void)tearDown;

@end
