/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLLibraryBookmarkManager : NSObject {
    NSMutableDictionary * _activeURLsByPathKey;
    NSMutableDictionary * _securityScopedBookmarksByPathKey;
}

+ (id)_securityScopedURLWithURL:(id)arg1 sandboxExtension:(id)arg2;
+ (id)resolveSecurityScopedBookmark:(id)arg1 isStale:(bool*)arg2 error:(id*)arg3;
+ (id)sharedBookmarkManager;

- (void).cxx_destruct;
- (id)URLFromClientLibraryURL:(id)arg1 sandboxExtension:(id)arg2 error:(id*)arg3;
- (id)_activeURLForClientLibraryURL:(id)arg1;
- (void)_importLithiumAccessRights;
- (void)_loadFromDefaults;
- (id)_newSandboxExtensionDataForClient:(struct { unsigned int x1[8]; })arg1 path:(id)arg2 writable:(bool)arg3;
- (id)_newSecurityScopedBookmarkDataForURL:(id)arg1;
- (void)_refreshSecurityScopedBookmarks;
- (void)_removeActiveURLForPathKey:(id)arg1;
- (void)_removeSSBForPathKey:(id)arg1;
- (id)_resolveSecurityScopedBookmarkData:(id)arg1 error:(id*)arg2;
- (void)_saveToDefaults;
- (void)_storeBookmarkForURL:(id)arg1;
- (void)_storeSecurityScopedURL:(id)arg1 pathKey:(id)arg2;
- (id)allKnownLibraryURLs;
- (void)dealloc;
- (id)init;
- (void)removeInvalidSSBsExcept:(id)arg1;
- (void)removeSSBForLibraryURL:(id)arg1;
- (id)sandboxExtensionsByPathForClient:(id)arg1 pathManager:(id)arg2;

@end
