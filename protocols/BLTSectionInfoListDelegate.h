/* Generated by EzioChiu.
 */

@protocol BLTSectionInfoListDelegate <NSObject>

@required

- (bool)sectionInfoList:(BLTSectionInfoList *)arg1 override:(NSDictionary *)arg2 shouldApplyToSectionInfoForSectionID:(NSString *)arg3;
- (void)sectionInfoList:(BLTSectionInfoList *)arg1 receivedRemoveSectionWithSectionID:(NSString *)arg2;
- (void)sectionInfoList:(BLTSectionInfoList *)arg1 receivedUpdatedSectionInfoForSectionID:(NSString *)arg2;
- (bool)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(NSString *)arg1;

@end
