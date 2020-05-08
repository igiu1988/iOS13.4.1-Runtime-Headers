/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSURL * _explicitBaseURL;
    NSString * _functionName;
    bool  _local;
    NSData * _permittedRemoteMeasurement;
    NSArray * _requestLocalEnvelopes;
    NSArray * _requestLocalSerializations;
    NSString * _serviceName;
    bool  _shouldFetchAssetContentInMemory;
}

@property (nonatomic, copy) NSURL *explicitBaseURL;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic) bool local;
@property (nonatomic, copy) NSData *permittedRemoteMeasurement;
@property (nonatomic, copy) NSArray *requestLocalEnvelopes;
@property (nonatomic, copy) NSArray *requestLocalSerializations;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic) bool shouldFetchAssetContentInMemory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)explicitBaseURL;
- (id)functionName;
- (id)initWithCoder:(id)arg1;
- (bool)local;
- (id)permittedRemoteMeasurement;
- (id)requestLocalEnvelopes;
- (id)requestLocalSerializations;
- (id)serviceName;
- (void)setExplicitBaseURL:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setLocal:(bool)arg1;
- (void)setPermittedRemoteMeasurement:(id)arg1;
- (void)setRequestLocalEnvelopes:(id)arg1;
- (void)setRequestLocalSerializations:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (bool)shouldFetchAssetContentInMemory;

@end
