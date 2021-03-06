/* Generated by EzioChiu.
 */

@protocol PLMomentListData <PLMomentRefreshable>

@required

- (void)addMoments:(NSSet *)arg1;
- (NSArray *)batchedMoments;
- (void)delete;
- (NSDate *)endDate;
- (short)granularityLevel;
- (bool)isDeleted;
- (NSSet *)moments;
- (NSDate *)representativeDate;
- (void)setEndDate:(NSDate *)arg1;
- (void)setGranularityLevel:(short)arg1;
- (void)setRepresentativeDate:(NSDate *)arg1;
- (void)setSortIndex:(int)arg1;
- (void)setStartDate:(NSDate *)arg1;
- (int)sortIndex;
- (NSDate *)startDate;
- (NSObject<NSCopying> *)uniqueObjectID;

@optional

- (NSString *)momentListDebugDescription;
- (NSString *)title;

@end
