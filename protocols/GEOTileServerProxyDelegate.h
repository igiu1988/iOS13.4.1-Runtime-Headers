/* Generated by EzioChiu.
 */

@protocol GEOTileServerProxyDelegate <NSObject>

@required

- (void)proxy:(GEOTileServerProxy *)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 failedToLoadAllPendingTilesWithError:(NSError *)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 failedToLoadTiles:(GEOTileKeyList *)arg2 error:(NSError *)arg3;
- (void)proxy:(GEOTileServerProxy *)arg1 loadedTile:(GEOTileData *)arg2 forKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg3 info:(NSDictionary *)arg4;
- (void)proxy:(GEOTileServerProxy *)arg1 willGoToNetworkForTiles:(GEOTileKeyList *)arg2;

@optional

- (void)proxyDidDownloadRegionalResources:(GEOTileServerProxy *)arg1;

@end