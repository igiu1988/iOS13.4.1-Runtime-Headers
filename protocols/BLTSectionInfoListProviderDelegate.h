/* Generated by EzioChiu.
 */

@protocol BLTSectionInfoListProviderDelegate <NSObject>

@required

- (void)removedSectionWithSectionID:(NSString *)arg1;
- (void)updateOverrides:(NSDictionary *)arg1 forSectionID:(NSString *)arg2;
- (void)updateSectionInfoForSectionIDs:(NSArray *)arg1;

@end
