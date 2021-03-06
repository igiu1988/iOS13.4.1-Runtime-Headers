/* Generated by EzioChiu.
 */

@protocol CNUIUserActionContext <NSObject>

@required

- (<CNUIUserActionCurator> *)actionCurator;
- (<CNUIUserActionRecorder> *)actionRecorder;
- (NSString *)channelIdentifier;
- (BSServiceConnectionEndpoint *)connectionEndpoint;
- (<CNUIUserActionDialRequestOpener> *)dialRequestOpener;
- (void)setChannelIdentifier:(NSString *)arg1;
- (void)setConnectionEndpoint:(BSServiceConnectionEndpoint *)arg1;
- (<CNUIUserActionURLOpener> *)urlOpener;
- (<CNUIUserActionUserActivityOpener> *)userActivityOpener;

@end
