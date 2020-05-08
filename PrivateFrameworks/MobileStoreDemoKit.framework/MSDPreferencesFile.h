/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

@interface MSDPreferencesFile : NSObject {
    NSMutableDictionary * _cache;
}

@property (retain) NSMutableDictionary *cache;

+ (bool)preferencesFileExists;
+ (id)preferencesFilePath;
+ (id)preferencesFileUrl;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cache;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)populateCache;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1;
- (bool)removeObjectForKey:(id)arg1;
- (bool)removeObjectsForKeys:(id)arg1;
- (bool)saveCache;
- (void)setCache:(id)arg1;
- (bool)setObject:(id)arg1 forKey:(id)arg2;

@end
