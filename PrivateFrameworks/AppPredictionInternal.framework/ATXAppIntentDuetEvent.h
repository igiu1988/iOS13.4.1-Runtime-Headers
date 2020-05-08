/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXAppIntentDuetEvent : ATXDuetEvent {
    NSString * _actionType;
    NSString * _bundleId;
    NSNumber * _paramCount;
    NSArray * _parameterHashes;
    NSArray * _slotSetHashes;
}

@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSNumber *paramCount;
@property (nonatomic, readonly) NSArray *parameterHashes;
@property (nonatomic, readonly) NSArray *slotSetHashes;

- (void).cxx_destruct;
- (id)actionType;
- (id)bundleId;
- (id)description;
- (id)identifier;
- (id)initWithBundleId:(id)arg1 actionType:(id)arg2 parameterHashes:(id)arg3 slotSetHashes:(id)arg4 paramCount:(id)arg5 startDate:(id)arg6 endDate:(id)arg7;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;
- (id)paramCount;
- (id)parameterHashes;
- (id)slotSetHashes;

@end
