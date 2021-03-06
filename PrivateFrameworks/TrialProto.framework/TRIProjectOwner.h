/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

@interface TRIProjectOwner : TRIPBMessage

@property (nonatomic) unsigned int adirGroupId;
@property (nonatomic, copy) NSString *driEmail;
@property (nonatomic) bool hasAdirGroupId;
@property (nonatomic) bool hasDriEmail;
@property (nonatomic) bool hasPrivacyRadarRequired;
@property (nonatomic) bool hasProjectId;
@property (nonatomic) bool hasQaContact;
@property (nonatomic) bool hasRadarComponent;
@property (nonatomic) bool hasReleaseManagerEmail;
@property (nonatomic) bool hasSecurityRadarRequired;
@property (nonatomic, retain) NSMutableArray *privacyRadarArray;
@property (nonatomic, readonly) unsigned long long privacyRadarArray_Count;
@property (nonatomic) bool privacyRadarRequired;
@property (nonatomic) int projectId;
@property (nonatomic, copy) NSString *qaContact;
@property (nonatomic, copy) NSString *radarComponent;
@property (nonatomic, copy) NSString *releaseManagerEmail;
@property (nonatomic, retain) NSMutableArray *securityRadarArray;
@property (nonatomic, readonly) unsigned long long securityRadarArray_Count;
@property (nonatomic) bool securityRadarRequired;

+ (id)descriptor;

@end
