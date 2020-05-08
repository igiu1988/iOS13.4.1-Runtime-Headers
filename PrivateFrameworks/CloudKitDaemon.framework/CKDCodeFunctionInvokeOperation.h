/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation {
    NSData * _attestationEntropy;
    NSURL * _explicitBaseURL;
    NSString * _functionName;
    id /* block */  _initialResponseReceivedCallback;
    bool  _local;
    PCCKey * _pccKey;
    NSArray * _pccWrappedKeys;
    NSData * _permittedRemoteMeasurement;
    id /* block */  _recordFetchCommandBlock;
    id /* block */  _recordFetchCompletionBlock;
    id /* block */  _recordFetchProgressBlock;
    id /* block */  _replaceLocalSerializationsBlobs;
    id /* block */  _replaceWireSerializations;
    NSArray * _requestEnvelopes;
    NSArray * _requestLocalEnvelopes;
    NSArray * _requestLocalSerializations;
    NSArray * _requestRecords;
    NSArray * _responseRecords;
    NSData * _serializedArguments;
    NSData * _serializedResponse;
    NSString * _serviceName;
    bool  _shouldFetchAssetContentInMemory;
    CKDProtocolTranslator * _translator;
}

@property (nonatomic, retain) NSData *attestationEntropy;
@property (nonatomic, copy) NSURL *explicitBaseURL;
@property (nonatomic, readonly, copy) NSString *functionName;
@property (nonatomic, copy) id /* block */ initialResponseReceivedCallback;
@property (nonatomic) bool local;
@property (nonatomic, retain) PCCKey *pccKey;
@property (nonatomic, retain) NSArray *pccWrappedKeys;
@property (nonatomic, copy) NSData *permittedRemoteMeasurement;
@property (nonatomic, copy) id /* block */ recordFetchCommandBlock;
@property (nonatomic, copy) id /* block */ recordFetchCompletionBlock;
@property (nonatomic, copy) id /* block */ recordFetchProgressBlock;
@property (nonatomic, copy) id /* block */ replaceLocalSerializationsBlobs;
@property (nonatomic, copy) id /* block */ replaceWireSerializations;
@property (nonatomic, copy) NSArray *requestEnvelopes;
@property (nonatomic, copy) NSArray *requestLocalEnvelopes;
@property (nonatomic, copy) NSArray *requestLocalSerializations;
@property (nonatomic, copy) NSArray *requestRecords;
@property (nonatomic, copy) NSArray *responseRecords;
@property (nonatomic, copy) NSData *serializedArguments;
@property (nonatomic, copy) NSData *serializedResponse;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic) bool shouldFetchAssetContentInMemory;
@property (nonatomic, retain) CKDProtocolTranslator *translator;

+ (long long)isPredominatelyDownload;

- (void).cxx_destruct;
- (void)_getDeserializedRecords;
- (void)_getSerializedRequest;
- (void)_invokeFunction;
- (void)_invokeLocalFunction;
- (void)_postflightRecords;
- (void)_preflightRecords;
- (id)activityCreate;
- (id)attestationEntropy;
- (id)explicitBaseURL;
- (id)functionName;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id /* block */)initialResponseReceivedCallback;
- (bool)local;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)pccKey;
- (id)pccWrappedKeys;
- (id)permittedRemoteMeasurement;
- (id /* block */)recordFetchCommandBlock;
- (id /* block */)recordFetchCompletionBlock;
- (id /* block */)recordFetchProgressBlock;
- (id /* block */)replaceLocalSerializationsBlobs;
- (id /* block */)replaceWireSerializations;
- (id)requestEnvelopes;
- (id)requestLocalEnvelopes;
- (id)requestLocalSerializations;
- (id)requestRecords;
- (id)responseRecords;
- (id)serializedArguments;
- (id)serializedResponse;
- (id)serviceName;
- (void)setAttestationEntropy:(id)arg1;
- (void)setExplicitBaseURL:(id)arg1;
- (void)setInitialResponseReceivedCallback:(id /* block */)arg1;
- (void)setLocal:(bool)arg1;
- (void)setPccKey:(id)arg1;
- (void)setPccWrappedKeys:(id)arg1;
- (void)setPermittedRemoteMeasurement:(id)arg1;
- (void)setRecordFetchCommandBlock:(id /* block */)arg1;
- (void)setRecordFetchCompletionBlock:(id /* block */)arg1;
- (void)setRecordFetchProgressBlock:(id /* block */)arg1;
- (void)setReplaceLocalSerializationsBlobs:(id /* block */)arg1;
- (void)setReplaceWireSerializations:(id /* block */)arg1;
- (void)setRequestEnvelopes:(id)arg1;
- (void)setRequestLocalEnvelopes:(id)arg1;
- (void)setRequestLocalSerializations:(id)arg1;
- (void)setRequestRecords:(id)arg1;
- (void)setResponseRecords:(id)arg1;
- (void)setSerializedArguments:(id)arg1;
- (void)setSerializedResponse:(id)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (void)setTranslator:(id)arg1;
- (bool)shouldFetchAssetContentInMemory;
- (id)translator;

@end