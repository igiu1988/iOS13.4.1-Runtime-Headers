/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VVCarrierParameters : NSObject {
    NSDictionary * _parameterValues;
}

@property (nonatomic, readonly) NSDictionary *parameterValues;

+ (bool)ignoresRoamingSwitch;
+ (id)messageNotificationFallbackTimeout;
+ (id)retryIntervals;
+ (bool)supportsDetachedStorage;

- (void).cxx_destruct;
- (id)initWithService:(id)arg1;
- (id)parameterValueForKey:(id)arg1;
- (id)parameterValues;

@end
