/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBWallpaperAggdLogger : NSObject {
    long long  _aggd_homescreenWallpaperIdentifier;
    long long  _aggd_homescreenWallpaperType;
    long long  _aggd_irisWallpaperEnabled;
    long long  _aggd_lockscreenWallpaperIdentifier;
    long long  _aggd_lockscreenWallpaperType;
    long long  _aggd_sharedWallpaper;
}

- (unsigned long long)_bucketedPlayCount;
- (void)_clearAggdKeysForLocations:(long long)arg1;
- (void)_resetPlayCountDate;
- (id)_valueString;
- (void)incrementIrisPlayCount;
- (id)init;
- (void)saveWallpaperAggdCurrentValues;
- (void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(bool)arg2 hasProcedural:(bool)arg3 name:(id)arg4;

@end
