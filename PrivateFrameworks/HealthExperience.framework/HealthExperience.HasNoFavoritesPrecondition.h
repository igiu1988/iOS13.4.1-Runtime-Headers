/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
 */

@interface HealthExperience.HasNoFavoritesPrecondition : _TtCs12_SwiftObject <HealthExperience.FavoritesProviderObserver> {
    void favoritesProvider;
    void preconditionCompletion;
}

- (void)favoritesProviderDidUpdate:(id)arg1;
- (void)favoritesProviderDidUpdate:(id)arg1 specificType:(id)arg2 isFavorited:(bool)arg3;
- (void)favoritesProviderIsReady:(id)arg1;

@end