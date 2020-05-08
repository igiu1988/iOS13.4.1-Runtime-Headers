/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDAppUsageStats : NSObject <NSCopying> {
    NSString * _bundleID;
    NSString * _bundleVersion;
    NSDate * _endDate;
    long long  _eventTime;
    NSNumber * _evid;
    bool  _isExtensionUsage;
    NSNumber * _itemID;
    NSString * _itemName;
    NSDate * _lastEventEndDate;
    NSString * _launchReason;
    NSDate * _startDate;
    long long  _usageCount;
    long long  _usageTime;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) long long eventTime;
@property (nonatomic, copy) NSNumber *evid;
@property (nonatomic) bool isExtensionUsage;
@property (nonatomic, copy) NSNumber *itemID;
@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSDate *lastEventEndDate;
@property (nonatomic, copy) NSString *launchReason;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) long long usageCount;
@property (nonatomic) long long usageTime;

- (void).cxx_destruct;
- (id)_formatTimeInternal:(long long)arg1;
- (id)bundleID;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (long long)eventTime;
- (id)evid;
- (bool)isExtensionUsage;
- (id)itemID;
- (id)itemName;
- (id)lastEventEndDate;
- (id)launchReason;
- (void)setBundleID:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventTime:(long long)arg1;
- (void)setEvid:(id)arg1;
- (void)setIsExtensionUsage:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setLastEventEndDate:(id)arg1;
- (void)setLaunchReason:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUsageCount:(long long)arg1;
- (void)setUsageTime:(long long)arg1;
- (id)startDate;
- (long long)usageCount;
- (long long)usageTime;

@end
