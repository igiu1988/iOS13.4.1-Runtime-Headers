/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

@interface ACHRemoteTemplateAvailabilityKeyProvider : NSObject {
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDProfile *profile;

- (void).cxx_destruct;
- (id)availabilityStateKeyFromUniqueName:(id)arg1 creatorDevice:(unsigned char)arg2;
- (id)initWithProfile:(id)arg1;
- (bool)markTemplateAvailable:(id)arg1 error:(id*)arg2;
- (id)profile;
- (bool)templateAvailableOnPairedDevice:(id)arg1 error:(id*)arg2;

@end
