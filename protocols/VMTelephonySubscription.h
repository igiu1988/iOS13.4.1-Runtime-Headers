/* Generated by EzioChiu.
 */

@protocol VMTelephonySubscription <NSObject>

@required

- (NSString *)label;
- (NSString *)labelID;
- (NSString *)phoneNumber;
- (NSNumber *)userDataPreferred;
- (NSNumber *)userDefaultVoice;
- (NSUUID *)uuid;
- (NSString *)vm_isoCountryCode;
- (NSUUID *)vm_labelUUID;
- (NSString *)vm_telephoneNumber;

@end
