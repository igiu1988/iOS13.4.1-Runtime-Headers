/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

@interface SRAppInfoPlistHelper : NSObject {
    NSString * _appName;
    NSDictionary * _perCategoryDetailDescription;
    NSURL * _privacyLink;
    NSSet * _requiredServices;
    NSString * _studyName;
    NSString * _usageDescription;
}

@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSDictionary *perCategoryDetailDescription;
@property (nonatomic, retain) NSURL *privacyLink;
@property (nonatomic, copy) NSSet *requiredServices;
@property (nonatomic, readonly, copy) NSString *studyName;
@property (nonatomic, copy) NSString *usageDescription;

+ (void)initialize;

- (id)appName;
- (void)crashWithMessage:(id)arg1;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;
- (id)perCategoryDetailDescription;
- (id)privacyLink;
- (id)requiredServices;
- (void)setAppName:(id)arg1;
- (void)setPerCategoryDetailDescription:(id)arg1;
- (void)setPrivacyLink:(id)arg1;
- (void)setRequiredServices:(id)arg1;
- (void)setUsageDescription:(id)arg1;
- (id)studyName;
- (id)usageDescription;
- (void)verifyRequiredInfoPlistContentForRequestedServices:(id)arg1;

@end
