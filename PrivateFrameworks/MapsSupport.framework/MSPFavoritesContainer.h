/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPFavoritesContainer : MSPContainer

+ (id)sharedLocalContainer;
+ (id)sharedRemoteContainer;

- (void)deDuplicateFavoritesWithCompletion:(id /* block */)arg1;
- (void)moveFavorite:(id)arg1 belowFavorite:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)moveFavoriteWithIdentifier:(id)arg1 belowFavoriteWithIdentifier:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (id)placesQueryWithDelegate:(id)arg1;
- (id)queryWithDelegate:(id)arg1;
- (id)transiteLinesQueryWithDelegate:(id)arg1;

@end
