/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLHSA2PasswordResetNotification : NSObject <NSSecureCoding> {
    NSString * _appleID;
    NSString * _approveButtonTitle;
    NSString * _dismissButtonTitle;
    NSString * _informativeText;
    NSString * _title;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *approveButtonTitle;
@property (nonatomic, copy) NSString *dismissButtonTitle;
@property (nonatomic, copy) NSString *informativeText;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleID;
- (id)approveButtonTitle;
- (id)dismissButtonTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpItemUserInfo;
- (id)informativeText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFollowUpItemUserInfo:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setApproveButtonTitle:(id)arg1;
- (void)setDismissButtonTitle:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
