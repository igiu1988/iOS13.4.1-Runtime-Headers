/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaPropertyResponse : HMFObject {
    NSError * _error;
    HMDMediaPropertyRequest * _request;
    NSNumber * _stateNumber;
    id  _value;
    NSDate * _valueUpdatedTime;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) HMDMediaPropertyRequest *request;
@property (nonatomic, readonly) NSNumber *stateNumber;
@property (nonatomic, retain) id value;
@property (nonatomic, readonly) NSDate *valueUpdatedTime;

+ (id)groupedProfileResponses:(id)arg1;
+ (id)propertyResponsesFromRequests:(id)arg1 error:(id)arg2;
+ (id)responseWithRequest:(id)arg1 error:(id)arg2;
+ (id)responseWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4;
+ (id)responsesFromSerializedResponse:(id)arg1 requests:(id)arg2 home:(id)arg3;
+ (id)serializeResponses:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithRequest:(id)arg1 error:(id)arg2;
- (id)initWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4;
- (id)request;
- (void)setValue:(id)arg1;
- (id)stateNumber;
- (id)value;
- (id)valueUpdatedTime;

@end
