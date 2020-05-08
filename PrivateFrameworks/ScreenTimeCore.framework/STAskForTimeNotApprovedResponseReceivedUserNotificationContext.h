/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STAskForTimeNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext {
    NSString * _parentName;
    NSString * _requestedResourceName;
}

@property (nonatomic, copy) NSString *parentName;
@property (nonatomic, copy) NSString *requestedResourceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)parentName;
- (id)requestedResourceName;
- (void)setParentName:(id)arg1;
- (void)setRequestedResourceName:(id)arg1;

@end
