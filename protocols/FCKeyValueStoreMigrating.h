/* Generated by EzioChiu.
 */

@protocol FCKeyValueStoreMigrating <NSObject>

@required

- (bool)keyValueStore:(FCKeyValueStore *)arg1 canMigrateFromVersion:(unsigned long long)arg2;
- (id)keyValueStore:(FCKeyValueStore *)arg1 migrateObject:(id)arg2 forKey:(NSString *)arg3 fromVersion:(unsigned long long)arg4;

@end
